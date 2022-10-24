//
// Created by tosha on 17/10/2022.
//

#ifndef DB_GEN_HEADER_H
#define DB_GEN_HEADER_H

#include <libxl.h>
#include <string>
#include <locale>
#include <iostream>
#include <utility>
#include <vector>
#include <stdexcept>
#include <array>
#include <random>
#include <unordered_map>
#include <unordered_set>

using namespace std;

wstring get_full_male_name();
wstring get_full_female_name();
wstring get_male_name();
wstring get_phone_number();
wstring get_addr();
void prepare_addresses();
void set_operators_probability(int _megafon, int _beeline, int _mts, int _tele2);
void set_job_probabitily(int _dir_probability, int _manager_probability, int _secretary_probability,
                         int _account_probability, int _service_probability, int _main_prof_probability);

struct Company {
    wstring addr;
    mutable int gen_dir_q = 0;
    int spec;
    explicit Company(wstring addr) : addr(std::move(addr)) {
        spec = rand() % 7;
    }
    pair<wstring, int> get_employee() const;
    bool operator== (const Company& A) const{
        return this->addr == A.addr;
    }

    pair<wstring, int>
    get_employee(int _dir_probability, int _manager_probability, int _secretary_probability, int _account_probability,
                 int _service_probability, int _main_prof_probability) const;
};
struct Company_hash {
    std::size_t operator()(const Company& company) const {
        return std::hash<std::wstring>()(company.addr);
    }
};



#endif //DB_GEN_HEADER_H
