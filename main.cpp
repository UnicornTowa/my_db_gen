#include "header.h"
#include "libxl.h"

int main() {
    setlocale(LC_ALL, "Russian");
    prepare_addresses();
    wcout << get_full_male_name() << endl;
    wcout << get_full_female_name() << endl;
    wcout << get_full_male_name() << endl;
    wcout << get_full_female_name() << endl;
    wcout << get_full_male_name() << endl;
    wcout << get_full_female_name() << endl;
    wcout << get_full_male_name() << endl;
    wcout << get_full_female_name() << endl;
    wcout << get_addr() << endl;
    wcout << get_addr() << endl;
    wcout << get_addr() << endl;
    wcout << get_addr() << endl;
    wcout << get_addr() << endl;
    cout << get_phone_number() << endl;
    cout << get_phone_number() << endl;
    cout << get_phone_number() << endl;
    cout << get_phone_number() << endl;
    cout << get_phone_number() << endl;
    return 0;
}
