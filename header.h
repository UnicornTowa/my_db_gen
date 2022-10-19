//
// Created by tosha on 17/10/2022.
//

#ifndef DB_GEN_HEADER_H
#define DB_GEN_HEADER_H

#include <string>
#include <locale>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <array>
#include <string>
#include <random>

using namespace std;

wstring get_full_male_name();
wstring get_full_female_name();
wstring get_male_name();
string get_phone_number(int megafon, int beeline, int mts, int tele2);
string get_phone_number();
wstring get_addr();
void prepare_addresses();


#endif //DB_GEN_HEADER_H
