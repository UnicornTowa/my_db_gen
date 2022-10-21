#include "header.h"

wstring get_name(){
    if (rand () % 2 == 0) return get_full_male_name();
    else return get_full_female_name();
}

using namespace libxl;

unordered_set<Company, Company_hash> companies_set;

int main() {
    setlocale(LC_ALL, "Russian");
    prepare_addresses();
    companies_set.rehash(200000);

    auto* book = xlCreateXMLBookW();
    if (book) {
        auto* sheet = book->addSheet(L"Лист 1");
        if (sheet) {
            sheet->writeStr(1, 0, L"ФИО работника");
            sheet->writeStr(1, 1, L"Номер телефона");
            sheet->writeStr(1, 2, L"Адрес работы");
            sheet->writeStr(1, 3, L"Должность");
            sheet->writeStr(1, 4, L"Заработная плата");
            for (int i = 2; i < 200002; i++) {
                auto addr = get_addr();
                if (!companies_set.contains(Company(addr))) {
                    companies_set.insert(Company(addr));
                }
                pair<wstring, int> data = companies_set.find(Company(addr))->get_employee();
                sheet->writeStr(i, 0, get_name().c_str());
                sheet->writeStr(i, 1, get_phone_number().c_str());
                sheet->writeStr(i, 2, addr.c_str());
                sheet->writeStr(i, 3, data.first.c_str());
                sheet->writeStr(i, 4, to_wstring(data.second).c_str());
            }
        }
        book->save(L"dataset1.xlsx");
        book->release();
    }
    return 0;
}
