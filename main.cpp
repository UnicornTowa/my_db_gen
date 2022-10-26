#include "header.h"

wstring get_name(){
    if (rand () % 2 == 0) return get_full_male_name();
    else return get_full_female_name();
}

using namespace libxl;

unordered_set<Company, Company_hash> companies_set;

int main() {
    setlocale(LC_ALL, "Russian");
    set_operators_probability(40, 20, 30, 10); //// <- вероятности выдачи номера различных операторов, %
    set_job_probability(10, 25, 5, 5, 20, 35); //// <- вероятности присвоение профессии из каждой категории, %
    int num_of_lines = 500000;                 //// <- количество строк для генерации
    companies_set.rehash(num_of_lines);

    auto* book = xlCreateXMLBookW();
    if (book) {
        auto* sheet = book->addSheet(L"Лист 1");
        if (sheet) {
            sheet->writeStr(1, 0, L"ФИО работника");
            sheet->writeStr(1, 1, L"Номер телефона");
            sheet->writeStr(1, 2, L"Адрес работы");
            sheet->writeStr(1, 3, L"Должность");
            sheet->writeStr(1, 4, L"Заработная плата");
            cout << "Start generating" << endl;
            for (int i = 2; i < 2 + num_of_lines; i++) {
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
        cout << "Done.. saving" << endl;
        sheet->setCol(0, 3, 32);
        sheet->setCol(1, 1, 15);
        sheet->setCol(4, 4, 15);
        book->save(L"dataset_new_new.xlsx");
        book->release();
        cout << "Done.. exiting" << endl;
    }
    return 0;
}
