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
void set_operators_probability(int _megafon, int _beeline, int _mts, int _tele2);
void set_job_probability(int _dir_probability, int _manager_probability, int _secretary_probability,
                         int _account_probability, int _service_probability, int _main_prof_probability);

/// Структура хранящая данные о компании: <br> Адрес - идентефикатор <br> Флаг о выдачи должности ген. директора
/// <br> Число характеризующее основную специальность
struct Company {
    wstring addr;
    /// mutable т.к. изменяется константным методом
    mutable bool gen_dir_generated = false;
    int spec;
    explicit Company(wstring addr) : addr(std::move(addr)) {
        spec = rand() % 7;
    }
    /// Методы ниже константные чтобы их можно было вызвать у объекта внутри контейнера
    /// <br> Метод выдающий работника по вероятностям заданным единожды в начале программы
    pair<wstring, int> get_employee() const;
    /// Метод дающий работника по вероятностям (его на самом деле вызывает метод без аргументов)
    pair<wstring, int> get_employee(int _dir_probability, int _manager_probability,
                                    int _secretary_probability, int _account_probability,
                                    int _service_probability, int _main_prof_probability) const;
    /// Перегрузка оператора равенства
    bool operator== (const Company& A) const{
        return this->addr == A.addr;
    }
};
/// Настраиваем хэш для класса Company - хешируем по адресу, он уникален
struct Company_hash {
    size_t operator()(const Company& company) const {
        return hash<wstring>()(company.addr);
    }
};



#endif //DB_GEN_HEADER_H
