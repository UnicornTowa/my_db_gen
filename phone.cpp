#include "header.h"

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(0, 10000000 - 1);
int megafon, beeline, mts, tele2; // 40 20 30 10
void set_operators_probability(int _megafon, int _beeline, int _mts, int _tele2){
    if (_megafon + _beeline + _mts + _tele2 != 100)
        throw invalid_argument("Wrong operators probability");
    megafon = _megafon; beeline = _beeline; mts = _mts; tele2 = _tele2;
}
static array<int,3> Megafon = {929, 921, 931};

static array<int, 5> Tele2 = {901, 952, 904, 950, 951};

static array<int, 2> Mts = {911, 981};

static array<int, 9> Beeline = {961, 962, 963, 964, 903, 905, 906, 909, 960};

const unordered_map<int, vector<std::uniform_int_distribution<>>> bounds = {
        {929,{
            std::uniform_int_distribution<>(1000000, 1999999)
            }
         },
        {921, {
                std::uniform_int_distribution<>(900000, 999999),
                std::uniform_int_distribution<>(1110000, 1119999),
                std::uniform_int_distribution<>(1800000, 1899999),
                std::uniform_int_distribution<>(3000000, 4499999),
                std::uniform_int_distribution<>(5500000, 5999999),
                std::uniform_int_distribution<>(6300000, 6599999),
                std::uniform_int_distribution<>(7400000, 7999999),
                std::uniform_int_distribution<>(8450000, 8499999),
                std::uniform_int_distribution<>(8550000, 9999999)
            }
        },
        {931, {std::uniform_int_distribution<>(2000000, 2499999)}},
        {901, {
                std::uniform_int_distribution<>(9700000, 9799999),
                std::uniform_int_distribution<>(3000000, 3299999),
                std::uniform_int_distribution<>(3700000, 3799999)
        }},
        {964, {std::uniform_int_distribution<>(3200000, 3399999)}},
        {963, {
                std::uniform_int_distribution<>(3220000, 3299999),
                std::uniform_int_distribution<>(3400000, 3499999),
                std::uniform_int_distribution<>(3000000, 3219999),
                std::uniform_int_distribution<>(2410000, 2499999)
        }},
        {961, {std::uniform_int_distribution<>(8000000, 8119999)}},
        {903, {std::uniform_int_distribution<>(920000, 999999)}},
        {962, {std::uniform_int_distribution<>(6800000, 7299999)}},
        {905, {
                std::uniform_int_distribution<>(2000000, 2369999),
                std::uniform_int_distribution<>(2500000, 2899999)
        }},
        {906, {std::uniform_int_distribution<>(2250000, 2299999),
               std::uniform_int_distribution<>(2400000, 2799999)
        }},
        {909, {std::uniform_int_distribution<>(5770000, 5939999)}},
        {960, {std::uniform_int_distribution<>(2300000, 2899999)}},
        {952, {
                std::uniform_int_distribution<>(3500000, 3799999),
                std::uniform_int_distribution<>(2300000, 2499999)
        }},
        {904, {
                std::uniform_int_distribution<>(3300000, 3399999),
                std::uniform_int_distribution<>(5500000, 5599999),
                std::uniform_int_distribution<>(6000000, 6199999),
                std::uniform_int_distribution<>(6300000, 6499999)
        }},
        {950, {std::uniform_int_distribution<>(0, 399999)}},
        {951, {std::uniform_int_distribution<>(6600000, 6899999)}},
        {911, {std::uniform_int_distribution<>(0, 399999),
               std::uniform_int_distribution<>(800000, 2999999),
               std::uniform_int_distribution<>(7000000, 7999999),
               std::uniform_int_distribution<>(8100000, 8499999),
               std::uniform_int_distribution<>(9000000, 9999999)
        }},
        {981, {std::uniform_int_distribution<>(7000000, 7499999)}}
};

std::unordered_set<wstring> phones;

wstring num_to_wstring(int num){
    wstring res = to_wstring(num);
    return wstring(7 - res.length(), '0') + res;
}

template<size_t N>
wstring return_wstring_num_of_operator(array<int, N> arr){
    auto code = arr[rand() % N];
    wstring s = L"+7";
    const vector<uniform_int_distribution<>>& bounds_for_code = bounds.at(code);
    int num = bounds_for_code[rand() % bounds_for_code.size()](gen);
    return s + to_wstring(code) + num_to_wstring(num);
}

wstring generate_phone_number(int megafon, int beeline, int mts, int tele2){
    int choose = rand() % 100;
//    num = wstring(7 - num.length(), '0') + num;
    if (choose < megafon){
        return return_wstring_num_of_operator(Megafon);
    }
    else if (choose < megafon + beeline){
        return return_wstring_num_of_operator(Beeline);
    }
    else if (choose < megafon + beeline + mts){
        return return_wstring_num_of_operator(Mts);
    }
    else {
        return return_wstring_num_of_operator(Tele2);
    }
}

//wstring generate_phone_number(int megafon, int beeline, int mts, int tele2){
//    if (megafon + beeline + mts + tele2 != 100)
//        throw invalid_argument("Wrong probabilities, sum != 100");
//    int choose = rand() % 100;
//    wstring s = L"+7";
//    wstring num = to_wstring(dist(gen));
//    num = wstring(7 - num.length(), '0') + num;
//    if (choose < megafon){
//        return s + to_wstring(Megafon[rand() % 3]) + num;
//    }
//    else if (choose < megafon + beeline){
//        return s + to_wstring(Beeline[rand() % 9]) + num;
//    }
//    else if (choose < megafon + beeline + mts){
//        return s + to_wstring(Mts[rand() % 2]) + num;
//    }
//    else {
//        return s + to_wstring(Tele2[rand() % 5]) + num;
//    }
//}
wstring get_phone_number(){
    wstring num;
    do
        num = generate_phone_number(megafon, beeline, mts, tele2);
    while (phones.contains(num));
    phones.insert(num);
    return num;
}   //// НАСТРОЙКА ОПЕРАТОРОВ
