#include "header.h"

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(0, 10000000);

static array<int,3> Megafon = {929, 921, 931};

static array<int, 5> Tele2 = {901, 952, 904, 950, 951};

static array<int, 2> Mts = {911, 981};

static array<int, 9> Beeline = {961, 962, 963, 964, 903, 905, 906, 909, 960};

string get_phone_number(int megafon, int beeline, int mts, int tele2){
    if (megafon + beeline + mts + tele2 != 100)
        throw invalid_argument("Wrong probabilities, sum != 100");
    int choose = rand() % 100;
    string s = "+7";
    string num = to_string(dist(gen));
    num = string(7 - num.length(), '0') + num;
    if (choose < megafon){
        return s + to_string(Megafon[rand() % 3]) + num;
    }
    else if (choose < megafon + beeline){
        return s + to_string(Beeline[rand() % 9]) + num;
    }
    else if (choose < megafon + beeline + mts){
        return s + to_string(Mts[rand() % 2]) + num;
    }
    else {
        return s + to_string(Tele2[rand() % 5]) + num;
    }
}
string get_phone_number(){
    return get_phone_number(40, 20, 30, 10);
}

vector<int> a;
vector<wstring> b = {L"hello"};