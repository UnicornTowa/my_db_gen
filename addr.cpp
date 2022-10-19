//
// Created by tosha on 20/10/2022.
//

#include "header.h"

vector<wstring> addresses[79] = {{L"пр-кт Владимирский", L"1/47 стр А", L"1/47 стр Б", L"10 стр А", L"10 стр В", L"12 стр А", L"14 стр А", L"16 стр А", L"20 стр А", L"20 стр Б", L"20 стр В", L"20 стр Д", L"20 стр Е", L"20 стр З", L"20 стр Р", L"20 стр С", L"3 стр А", L"5 стр А", L"7 стр А", L"7 стр Б", L"8 стр А", L"8 стр Б", L"9 стр А", L"9а стр А"},
                                  {L"ул. Стремянная", L"1/6 стр А", L"10 стр А", L"11 стр А", L"12 стр А", L"12 стр Б", L"13 стр А", L"14 стр А", L"15/1 стр А", L"16 стр А", L"18 стр А", L"19 стр А", L"19а стр А", L"2/4 стр А", L"20 стр А", L"21/5 стр А", L"22/3 стр А", L"22/3 стр Б", L"2а стр А", L"3 стр А", L"3 стр Б", L"4 стр А", L"5 стр А", L"5 стр Б"},
                                  {L"ул. Восстания", L"2/116", L"2/116 стр А", L"4 стр А", L"6 стр А", L"6а стр А", L"8 стр А", L"8 стр Б", L"8 стр Г", L"8 стр Д", L"8 стр Е", L"8 стр Ж", L"8 стр К", L"8 стр М", L"8а стр А"},
                                  {L"Реки Фонтанки наб.,	38 стр А", L"38 стр Б", L"38 стр Д", L"40/68 стр А", L"40/68 стр Б", L"40/68 стр Т", L"44 стр А", L"46 стр Б", L"46 стр В", L"46 стр З", L"46 стр М", L"46а стр М"},
                                  {L"ул. Рубинштейна", L"1/43 стр А", L"10 стр А", L"10 стр Б", L"12 стр А", L"14 стр А", L"2/45 стр А", L"3 стр А", L"5 стр А", L"6 стр А", L"7 стр А", L"7 стр Б", L"7 стр В", L"7 стр Ж", L"8 стр А"},
                                  {L"ул. Маяковского", L"1/96 стр А", L"10 стр А", L"2/94 стр А", L"2/94 стр Б", L"2/94 стр В", L"3а стр А", L"3б стр А", L"4", L"4 стр А", L"5 стр Б", L"6 стр А", L"8 стр А", L"8 стр В"},
                                  {L"ул. Димитрова", L"11/67 стр А"},
                                  {L"Поварской пер.", L"10 стр А", L"11 стр А", L"12 стр А", L"13 стр А", L"14 стр А", L"15 стр А", L"17/12 стр А", L"2 стр А", L"3 стр А", L"4 стр А", L"5 стр А", L"6 стр А", L"6 стр Б", L"7 стр А", L"7 стр Г", L"8 стр А", L"9 стр А"},
                                  {L"ул. Марата", L"1/71 стр А", L"10 стр А", L"10 стр И", L"10 стр Л", L"11 стр А", L"11 стр Б", L"11 стр В", L"12 стр А", L"12 стр Б", L"12 стр Г", L"12/2 стр А", L"13 стр А", L"13 стр Б", L"13 стр В", L"14 стр А", L"14 стр Б", L"14 стр Т", L"15 стр А", L"16 стр А", L"16 стр Б", L"17 стр А", L"17 стр Б", L"18 стр А", L"18 стр Б", L"18 стр В", L"2/73-75 стр А", L"23 стр А", L"25 стр А", L"25 стр Б", L"25а стр Б", L"4 стр А", L"6 стр А", L"6 стр Б", L"6 стр В", L"6 стр Г", L"6 стр Д", L"6 стр И", L"8 стр А", L"9 стр А"},
                                  {L"Графский пер.", L"10/11 стр А", L"10/11 стр Ж", L"2/48", L"2/48 стр А", L"2/48 стр Б", L"2/48 стр В", L"6/16 стр А", L"8 стр А", L"8 стр Д"},
                                  {L"Дмитровский пер.", L"1/7 стр А", L"10 стр А", L"11 стр А", L"12 стр А", L"12 стр Б", L"13 стр А", L"13 стр Ж", L"14 стр А", L"15 стр А", L"16-18/6 стр А", L"16-18/6 стр Е", L"17 стр А", L"17 стр Б", L"2а стр А", L"3-5 стр А", L"4 стр А", L"6 стр А", L"6 стр В", L"7 стр А", L"8 стр А", L"9 стр А", L"9 стр Б", L"9 стр В"},
                                  {L"пр-кт Литейный", L"60 стр А", L"62 стр А", L"63", L"64/78 стр А", L"64/78 стр Б"},
                                  {L"ул. Колокольная", L"1 стр А", L"1 стр В", L"10 стр А", L"11 стр А", L"13 стр А", L"15/21 стр А", L"16 стр А", L"18 стр А", L"2/18 стр А", L"3 стр А", L"5 стр А", L"7 стр А", L"8 стр А", L"9 стр А", L"9 стр Б"},
                                  {L"пр-кт Невский", L"100 стр А", L"100 стр И", L"100 стр У", L"100 стр Ш", L"100а стр А", L"102 стр А", L"102 стр Ж", L"102 стр М", L"102 стр С", L"104 стр А", L"104 стр Б", L"104 стр В", L"106 стр А", L"106 стр Б", L"106 стр Г", L"106 стр Е", L"106 стр Ж", L"106 стр Н", L"106а стр А", L"108 стр А", L"108 стр Б", L"108 стр В", L"108 стр Д", L"108 стр Р", L"108 стр Ш", L"108а стр А", L"110 стр А", L"110 стр Б", L"110 стр В", L"110 стр Ж", L"110 стр З", L"110 стр И", L"112 стр А", L"114", L"114 стр А", L"114-116 стр А", L"41 стр А", L"49/2 стр А", L"51 стр А", L"51 стр В", L"51 стр Г", L"53 стр А", L"53 стр Э", L"53 стр Я", L"55 стр А", L"57 стр А", L"59 стр А", L"61 стр А", L"61 стр Б", L"63 стр А", L"65 стр А", L"67 стр А", L"68а стр А", L"69 стр А", L"70 стр А", L"72 стр А", L"74-76 стр А", L"74-76 стр Б", L"74-76 стр Г", L"74-76 стр Е", L"80 стр А", L"82 стр А", L"82 стр Б", L"84-86 стр А", L"84-86 стр Б", L"84-86 стр Л", L"88 стр А", L"88 стр Б", L"88 стр Д", L"88 стр Ю", L"90-92 стр А", L"90-92 стр Б", L"90-92 стр Г", L"90-92 стр Д", L"90-92 стр Е", L"90-92 стр З", L"90-92 стр Н", L"90-92 стр П", L"98 стр А"},
                                  {L"Кузнечный пер.", L"10 стр А", L"10 стр Б", L"2-4 стр А", L"2-4 стр Б", L"2-4 стр Л", L"6 стр А", L"6 стр Б", L"8 стр А"},
                                   {L"ул. Боровая", L"1 стр А", L"10 стр А", L"11-13 стр А", L"12 стр А", L"12 стр Б", L"14 стр А", L"16/2 стр А", L"18/1 стр А", L"19 стр Б", L"19 стр В", L"19а стр 1", L"20 стр А", L"20 стр Б", L"20 стр В", L"20 стр Д", L"21 стр А", L"22 стр А", L"23/21 стр А", L"23/21 стр Л", L"24 стр Б", L"26-28 стр А", L"29-33 стр А", L"3 стр А", L"32 стр А", L"34/24 стр А", L"34/24 стр Б", L"34/24 стр В", L"34/24 стр Л", L"35-37 стр А", L"35-37 стр Г", L"35-37 стр Д", L"36-38 стр А", L"36-38 стр Б", L"40 стр А", L"6 стр А", L"6 стр Д", L"6 стр Е", L"8 стр А", L"8 стр Ж", L"8 стр З", L"8 стр И", L"9 стр А"},
                                   {L"ул. Воронежская", L"12 стр А", L"12 стр Б", L"14 стр А", L"14 стр Б", L"15-17 стр А", L"16", L"16 стр А", L"16 стр Б", L"16 стр В", L"16 стр Д", L"16 стр О", L"18 стр В", L"2 стр А", L"22-24 стр А", L"26-28 стр А", L"26-28 стр З", L"30", L"30 стр К", L"5 стр А", L"6-8 стр А", L"6-8 стр Б", L"6-8 стр В"},
                                   {L"пр-кт Загородный", L"34 стр А", L"36 стр А", L"38 стр Б", L"40 стр А", L"40 стр Б", L"42", L"42 стр А", L"42 стр Б", L"42 стр В", L"42 стр Д", L"46 стр А"},
                                   {L"Свечной пер.", L"15/48 стр А", L"15/48 стр Б", L"17 стр А", L"19а стр А", L"23/20 стр А", L"27 стр А"},
                                   {L"Павлоградский пер.", L"1 стр А", L"3 стр А", L"3а стр 1"},
                                   {L"ул. Черняховского", L"1/63 стр А", L"10 стр А", L"10 стр Б", L"10 стр В", L"10 стр Г", L"10 стр Д", L"10 стр Е", L"10 стр Ж", L"10 стр Л", L"10 стр М", L"10 стр Н", L"10 стр Х", L"11 стр А", L"11 стр В", L"11 стр Г", L"12 стр А", L"13 стр А", L"13 стр В", L"15 стр А", L"16/5", L"16/5 стр А", L"16/5 стр Б", L"16/5 стр Д", L"17 стр А", L"17 стр Б", L"17 стр Г", L"17 стр Д", L"17 стр Е", L"19 стр А", L"2 стр А", L"2 стр В", L"21", L"21 стр А", L"21 стр Б", L"21 стр Г", L"21 стр З", L"21 стр Ю", L"23 стр А", L"24 стр А", L"24 стр Г", L"25 стр А", L"25 стр Б", L"25 стр В", L"25 стр Г", L"25 стр Д", L"26-28 стр А", L"27 стр А", L"3 стр А", L"3 стр Б", L"30 стр А", L"30 стр В", L"30а стр А", L"31 стр А", L"31 стр В", L"31 стр Е", L"32 стр А", L"32/2 стр А", L"33 стр А", L"33 стр Б", L"33 стр В", L"33 стр Д", L"33 стр К", L"34 стр А", L"35/7 стр А", L"36 стр А", L"39 стр А", L"39 стр Г", L"41 стр А", L"41 стр Б", L"43 стр А", L"45 стр А", L"47 стр Б", L"47 стр В", L"49 стр А", L"49 стр Б", L"49 стр В", L"5 стр А", L"5 стр Б", L"5 стр В", L"5 стр Г", L"51 стр А", L"51 стр Г", L"53 стр В", L"53/3 стр Б", L"55 стр А", L"6/10 стр А", L"7 стр Г", L"7а стр А", L"7а стр Б", L"9 стр А"},
                                   {L"ул. Звенигородская", L"1 стр А", L"1/2 стр А", L"12/17 стр А", L"16 стр А", L"2/44 стр А", L"20 стр А", L"22 стр А", L"22 стр В", L"24 стр А", L"24/2 стр 1", L"26 стр А", L"26 стр Б", L"26 стр В", L"28 стр А", L"28 стр В", L"3 стр А", L"30 стр А", L"30 стр Б", L"30а стр А", L"30а стр Б", L"30а стр К", L"32 стр А", L"4 стр А", L"5 стр А", L"5 стр Б", L"6 стр А", L"6 стр В", L"7 стр А", L"7б стр А", L"8-10 стр А", L"8-10 стр Б", L"8-10 стр Е", L"8-10 стр К", L"9-11 стр А", L"9-11 стр Б", L"9-11 стр В", L"9-11 стр Е", L"9-11 стр К", L"9-11 стр Л"},
                                   {L"Волоколамский пер.", L"1", L"2", L"4"},
                                   {L"ул. Роменская", L"10 стр А", L"10 стр Б", L"10 стр Д", L"10 стр Е", L"10 стр Ж", L"10 стр И", L"10 стр К", L"11 стр А", L"12 стр А", L"13 стр А", L"13 стр В", L"4/22 стр А", L"4/22 стр Б", L"6/37 стр А", L"8 стр А", L"9 стр А", L"9а стр А", L"9а стр Б"},
                                   {L"Транспортный пер.", L"1 стр А", L"1/2 стр Б", L"11 стр А", L"13 стр А", L"13 стр Б", L"15 стр А", L"15 стр Б", L"3 стр А", L"5а стр А", L"7 стр А", L"9 стр А"},
                                   {L"пл. Пионерская", L"1 стр А", L"1 стр Б"},
                                   {L"Обводного канала наб.", L"49 стр А", L"51 стр А", L"51 стр Б", L"51 стр В", L"51 стр Г", L"53 стр А", L"53 стр В", L"53 стр Г", L"53 стр Д", L"53 стр Ж", L"55 стр А", L"55 стр В", L"55 стр Г", L"57 стр А", L"59 стр Б", L"59 стр В", L"59 стр Д", L"59а стр 1", L"61 стр А", L"61 стр Б", L"61 стр Д", L"61 стр Ж", L"65 стр А", L"69 стр А", L"71 стр А", L"75 стр А", L"83 стр А", L"83 стр Г", L"93а стр А", L"93а стр Б"},
                                   {L"ул. Тюшина", L"10 стр А", L"11 стр А", L"12 стр А", L"16 стр А", L"18 стр А", L"20 стр А", L"20 стр Е", L"20/2 стр А", L"3 стр А", L"4 стр А", L"5 стр А", L"5 стр Б", L"5 стр Г", L"6 стр А", L"6 стр Б", L"8 стр А", L"9/7 стр А"},
                                   {L"ул. Правды", L"10 стр А", L"12/12 стр А", L"12/12 стр Г", L"13", L"13 стр А", L"13 стр В", L"15 стр А", L"15 стр Б", L"16 стр А", L"18 стр А", L"18 стр Б", L"2/13 стр А", L"20 стр А", L"20 стр Б", L"20 стр В", L"20 стр Г", L"22 стр А", L"4 стр А", L"4 стр Б", L"6 стр А", L"6 стр Б", L"6 стр Г", L"6/3 стр В", L"8 стр А", L"8 стр Б", L"8 стр В", L"8 стр Г", L"8 стр Д", L"8 стр Е", L"8 стр К"},
                                   {L"ул. Достоевского", L"19/21 стр А", L"19/21 стр Б", L"19/21 стр М", L"19/21 стр Н", L"21 стр А", L"23 стр А", L"25 стр А", L"27 стр А", L"29/18 стр А", L"30 стр А", L"32 стр А", L"32 стр Б", L"34 стр А", L"36 стр А", L"38 стр А", L"40-44 стр А", L"40-44 стр Б", L"40-44 стр Г", L"40-44 стр Д", L"40-44 стр Е", L"40-44 стр Т"},
                                   {L"ул. Социалистическая", L"1/32 стр А", L"11 стр А", L"11/2 стр А", L"11а стр А", L"11а стр В", L"13 стр А", L"14 стр А", L"14 стр Б", L"15 стр А", L"15 стр Б", L"16 стр А", L"24 стр А", L"26-28/15 стр А", L"3 стр А", L"5 стр А", L"5 стр Б", L"7/11 стр А", L"7/11 стр Б", L"7/11 стр В", L"7/11 стр Г", L"7/11 стр Д", L"9 стр А"},
                                   {L"ул. Днепропетровская", L"11 стр Б", L"11 стр Г", L"13 стр А", L"13 стр Б", L"13 стр В", L"2", L"2 стр А", L"2 стр Б", L"2 стр В", L"27 стр А", L"27 стр В", L"27 стр Г", L"27 стр Д", L"27 стр Е", L"27 стр Ж", L"27 стр З", L"27 стр И", L"27 стр К", L"27 стр Л", L"29 стр А", L"2б стр А", L"2в стр А", L"3 стр А", L"3 стр Б", L"3 стр В", L"3 стр М", L"31 стр А", L"31 стр Б", L"31 стр В", L"33 стр А", L"35 стр В", L"37 стр 1", L"37 стр Л", L"4 стр А", L"41 стр А", L"41 стр Б", L"43 стр А", L"45 стр А", L"4а стр В", L"5 стр А", L"5 стр Е", L"6 стр А", L"7 стр А", L"7 стр Б", L"7 стр В", L"7 стр Г", L"7 стр Д", L"7 стр Е", L"7 стр К", L"7 стр Л", L"7 стр Н", L"7 стр О", L"7 стр Р", L"8 стр А", L"8 стр Б", L"8 стр В", L"8 стр Е", L"8 стр Ж", L"8 стр З", L"8 стр И", L"8 стр К", L"8 стр С", L"8 стр Т", L"8 стр Ф", L"9 стр А", L"9 стр Б", L"9 стр В"},
                                   {L"пр-кт Лиговский", L"100-104 стр А", L"100-104 стр Ж", L"100-104 стр М", L"100-104 стр Н", L"100-104 стр С", L"101 стр А", L"101 стр Б", L"105 стр А", L"106 стр А", L"107 стр А", L"108 стр А", L"108 стр Б", L"109 стр А", L"110 стр А", L"110 стр Б", L"110 стр В", L"110 стр Г", L"111-113-115", L"111-113-115 стр А", L"111-113-115 стр Б", L"111-113-115 стр В", L"111-113-115 стр Г", L"111-113-115 стр Ж", L"111-113-115 стр З", L"111-113-115 стр И", L"111-113-115 стр Л", L"111-113-115 стр Р", L"111-113-115 стр У", L"111-113-115 стр Ю", L"112 стр А", L"112 стр Е", L"114 стр А", L"114 стр Б", L"114 стр В", L"114 стр Г", L"116-118 стр А", L"116-118 стр Б", L"116-118 стр В", L"117 стр А", L"117 стр В", L"117 стр Г", L"117 стр К", L"119 стр А", L"119 стр Б", L"119 стр В", L"119 стр К", L"120 стр А", L"121 стр А", L"121 стр В", L"123 стр А", L"123 стр Ж", L"123 стр К", L"124 стр А", L"125 стр А", L"125 стр З", L"126 стр А", L"126 стр Б", L"127 стр А", L"127 стр Е", L"128", L"128 стр А", L"128 стр Б", L"128 стр В", L"128 стр Г", L"128 стр Д", L"128 стр К", L"128а стр А", L"129 стр А", L"131 стр А", L"131 стр Б", L"133 стр А", L"133 стр Б", L"135 стр А", L"135 стр Г", L"135 стр Е", L"135 стр З", L"137 стр А", L"137 стр Д", L"139 стр А", L"141 стр А", L"141 стр Б", L"141 стр И", L"141 стр Л", L"143 стр А", L"145/2 стр А", L"147 стр А", L"147 стр В", L"149 стр А", L"149 стр Н", L"88 стр 1", L"88 стр А", L"92 стр Г", L"92 стр Д", L"93 стр А", L"94 стр А", L"94/2 стр А", L"95 стр А", L"96 стр А", L"97 стр А", L"98 стр А", L"98 стр Н", L"99 стр А", L"99 стр Ж"},
                                   {L"ул. Социалистическая", L"5 стр А"},
                                   {L"ул. Печатника Григорьева", L"14 стр А", L"16/3 стр К"},
                                   {L"ул. Марата", L"50 стр А", L"50 стр Б", L"52 стр А", L"52 стр Б", L"53 стр А", L"54/34 стр А", L"55/5 стр А", L"56-58/29 стр А", L"56-58/29 стр Б", L"56-58/29 стр Г", L"57 стр А", L"59 стр А", L"59 стр Д", L"60/7 стр А", L"61 стр А", L"61 стр И", L"62 стр А", L"62 стр Б", L"63 стр Ж", L"64 стр А", L"64 стр Б", L"65/20 стр А", L"66/22 стр А", L"66/22 стр В", L"66/22 стр Г", L"67/17 стр А", L"67/17 стр Б", L"68 стр А", L"68 стр Б", L"69-71 стр А", L"70а-70б стр А", L"70а-70б стр Б", L"70а-70б стр Г", L"72 стр А", L"73 стр А", L"73 стр Б", L"73 стр Д", L"74 стр А", L"74 стр Б", L"74 стр Л", L"75 стр А", L"75 стр Б", L"75 стр В", L"75 стр Н", L"75/2 стр Д", L"76 стр А", L"76 стр Б", L"77 стр А", L"77 стр Б", L"78", L"78 стр А", L"78 стр Е", L"78 стр К", L"78 стр Р", L"79 стр А", L"79а стр А", L"79а стр В", L"80 стр А", L"80 стр Б", L"80 стр В", L"81", L"82 стр В", L"82 стр Ж", L"82 стр И", L"82 стр М", L"82 стр Х", L"82 стр Ч", L"82 стр Щ", L"82 стр Ы", L"82/20 стр Е", L"82/20 стр К", L"84/18 стр А", L"86 стр А", L"86 стр Б", L"88/2 стр А", L"90 стр В", L"90 стр Д", L"90 стр З", L"90 стр И", L"90 стр К", L"90 стр Л", L"90 стр М", L"90 стр О", L"90 стр П", L"90 стр Р", L"90 стр Ф", L"90 стр Ю", L"90 стр Я", L"92", L"92 стр А", L"92 стр Б"},
                                   {L"ул. Разъезжая", L"15 стр А", L"15 стр Д", L"17 стр А", L"17 стр Б", L"17 стр В", L"17 стр Г", L"19 стр А", L"19 стр Б", L"19/2 стр А", L"31 стр А", L"31 стр Б", L"31 стр В", L"33 стр А", L"33 стр Б", L"35 стр А", L"35 стр Б", L"36 стр А", L"37 стр А", L"37/2 стр Б", L"38 стр А", L"42/34 стр А", L"42/34 стр Б", L"43/1 стр А", L"43/1 стр Б", L"43/1 стр В", L"43/1 стр Д", L"44 стр А", L"44 стр Б", L"44 стр Ж", L"44 стр И", L"44 стр К", L"44 стр Т", L"46 стр Б"},
                                   {L"ул. Коломенская", L"22 стр А", L"23 стр А", L"23 стр Б", L"25 стр А", L"27 стр А", L"28 стр А", L"28 стр Д", L"29 стр А", L"29 стр Б", L"29 стр В", L"30 стр А", L"30 стр Б", L"31 стр А", L"32 стр А", L"33/40 стр А", L"35-37 стр А", L"38-40/41 стр А", L"39 стр А", L"39а стр А", L"41 стр А", L"42 стр А", L"43 стр А", L"43 стр Б", L"44 стр А", L"45 стр А", L"45 стр Б", L"45 стр Г", L"46 стр А"},
                                   {L"ул. Константина Заслонова", L"10 стр А", L"10 стр Б", L"11 стр А", L"11 стр Б", L"12 стр А", L"14 стр А", L"14 стр Б", L"15 стр А", L"16 стр А", L"16 стр Б", L"17 стр А", L"18 стр А", L"20 стр А", L"22 стр А", L"23", L"23 стр А", L"23/3 стр В", L"23/4 стр А", L"23/4 стр Б", L"25 стр А", L"26 стр А", L"27 стр А", L"27 стр Б", L"28-30 стр А", L"32-34 стр А", L"36-38 стр А", L"4 стр А", L"40 стр А", L"6 стр А", L"6 стр В", L"7 стр А", L"8 стр А", L"8 стр Б", L"9/4 стр Б"},
                                   {L"Воскресенская наб.", L"10 стр А", L"12 стр А", L"24 стр А", L"24 стр Б", L"24 стр Ж", L"28 стр Б", L"32 стр А", L"8/46/5", L"8/46/5 стр А"},
                                   {L"ул. Кирочная", L"17 стр А", L"17 стр Б", L"19 стр А", L"23 стр А", L"25 стр А", L"27 стр А", L"28 стр А", L"28а стр А", L"29 стр А", L"30 стр А", L"31 стр А", L"31/2 стр А", L"32-34 стр А", L"33 стр А", L"35 стр А", L"35а стр А", L"36 стр А", L"36 стр Б", L"36 стр М", L"37 стр А", L"38 стр А", L"38 стр Б", L"38 стр В", L"39 стр А", L"40 стр А", L"42 стр А", L"44 стр А", L"44 стр Б", L"46 стр А", L"46 стр Б"},
                                   {L"ул. Чайковского", L"16 стр Б", L"2/7 стр Ф", L"2/7 стр Ш", L"20 стр А", L"20 стр Б", L"20 стр В", L"22 стр А", L"22 стр Б", L"22 стр Е", L"24 стр А", L"26 стр А", L"26 стр В", L"26 стр Д", L"28 стр А", L"29", L"29 стр А", L"30 стр А", L"30 стр В", L"31 стр А", L"32 стр А", L"32 стр В", L"32 стр Д", L"33-37 стр А", L"33-37 стр Б", L"34 стр А", L"36 стр А", L"38/9 стр А", L"39 стр А", L"39 стр Б", L"40 стр А", L"41 стр А", L"41 стр Б", L"42 стр А", L"43 стр А", L"44 стр А", L"44 стр В", L"45 стр А", L"45 стр Б", L"46-48 стр А", L"47 стр А", L"47 стр Ж", L"49 стр А", L"49 стр Б", L"50 стр А", L"50 стр Г", L"51 стр А", L"51 стр Б", L"52 стр А", L"52 стр В", L"53 стр А", L"53 стр Б", L"54 стр А", L"54 стр Б", L"55 стр А", L"56 стр А", L"56 стр Б", L"58 стр А", L"60 стр А", L"60 стр Б", L"61 стр А", L"62 стр А", L"63 стр А", L"63 стр Б", L"65-67 стр А", L"69 стр А", L"71 стр А", L"73 стр А", L"73 стр В", L"73 стр Г", L"73 стр Д", L"75 стр А", L"77 стр А", L"77 стр Б", L"79 стр А", L"81 стр А", L"81 стр Б", L"81 стр В", L"83/7 стр А"},
                                   {L"ул. Фурштатская", L"26 стр Т", L"27", L"29а стр А", L"29б стр А", L"31 стр А", L"32 стр Н", L"32 стр О", L"33 стр А", L"33 стр Б", L"35 стр А", L"36 стр Б", L"36а стр А", L"37 стр А", L"37 стр В", L"37 стр К", L"39 стр А", L"39 стр Б-В", L"39 стр К", L"40 стр А", L"40 стр Б", L"40 стр В", L"41 стр А", L"42 стр А", L"43 стр А", L"44 стр А", L"45 стр А", L"45 стр Б", L"46 стр А", L"46 стр Б", L"47/11 стр А", L"48 стр А", L"48 стр Б", L"50 стр А", L"50 стр Б", L"52 стр А", L"54 стр А", L"56 стр А", L"58 стр А", L"58 стр Б", L"58 стр В", L"60 стр А", L"62/9 стр А"},
                                   {L"ул. Радищева", L"38/20 стр А", L"39 стр В", L"39 стр Г", L"39 стр Д", L"39 стр Н", L"39 стр О", L"40 стр А", L"42 стр А", L"42 стр Б", L"42 стр В", L"44 стр А"},
                                   {L"ул. Захарьевская", L"1 стр А", L"10", L"10 стр А", L"10 стр В", L"11 стр А", L"11 стр К", L"11/2 стр Д", L"12 стр А", L"12 стр Б", L"12а стр А", L"13 стр А", L"14 стр А", L"14 стр Б", L"14 стр В", L"14 стр Г", L"14 стр З", L"14 стр Т", L"14 стр У", L"15 стр А", L"16 стр А", L"17 стр А", L"17 стр Б", L"19", L"19 стр А", L"19 стр Б", L"19 стр В", L"21 стр А", L"22 стр А", L"22 стр Б", L"22 стр В", L"23 стр А", L"23 стр Б", L"23 стр В", L"25 стр А", L"27 стр А", L"27 стр Ж", L"29 стр А", L"29 стр Б", L"3 стр А", L"31 стр А", L"33 стр А", L"35 стр А", L"35 стр В", L"37 стр А", L"37 стр В", L"39 стр А", L"39 стр Б", L"39 стр В", L"41 стр А", L"6 стр А", L"6 стр Б", L"6 стр В", L"6а стр Б", L"6б стр Д", L"7 стр А", L"8 стр А", L"8 стр Б", L"9 стр А"},
                                   {L"пр-кт Чернышевского", L"11/57 стр А", L"13 стр А", L"14/59 стр А", L"16 стр А", L"16 стр К", L"17 стр А", L"18 стр А", L"20 стр А", L"3 стр А", L"3 стр Б", L"4 стр А"},
                                   {L"ул. Восстания", L"38 стр А", L"40 стр А", L"42 стр А", L"42а стр А", L"44 стр А", L"49 стр А", L"53 стр А", L"53 стр Б", L"55 стр А", L"55 стр Б", L"55 стр В"},
                                   {L"ул. Потёмкинская", L"13/48 стр А", L"2 стр А", L"2 стр Б", L"2 стр В", L"2 стр Г", L"2 стр Д", L"2 стр Ж", L"2 стр И", L"4", L"4 стр А", L"4 стр Б", L"4 стр Г", L"4 стр Д", L"4а стр А", L"4б стр А", L"4в стр А", L"4д стр А"},
                                   {L"ул. Маяковского", L"37 стр А", L"37 стр В", L"37 стр Г", L"37 стр Д", L"37 стр Ю"},
                                   {L"ул. Рылеева", L"10 стр А", L"14 стр А", L"15 стр А", L"17-19 стр А", L"20/51 стр А", L"21 стр А", L"22 стр А", L"22 стр Б", L"23 стр А", L"24 стр А", L"25 стр А", L"25 стр Г", L"27 стр А", L"29 стр А", L"33 стр А", L"35 стр А", L"35 стр Б", L"37 стр А", L"39 стр А", L"6 стр А", L"8 стр А"},
                                   {L"Гродненский пер.", L"12-14 стр А", L"12-14 стр Б", L"16 стр А", L"18 стр А", L"18 стр Б", L"4 стр А", L"6 стр А", L"6 стр Б", L"8-10 стр А"},
                                   {L"пр-кт Литейный", L"4", L"4 стр А", L"4 стр Б", L"4 стр В", L"6 стр А", L"6 стр Б", L"6 стр Г"},
                                   {L"Манежный пер.", L"14 стр А", L"14 стр Б", L"14 стр В", L"14 стр Д", L"15-17 стр А", L"7 стр А", L"7 стр Б", L"9 стр А"},
                                   {L"ул. Шпалерная", L"22 стр А", L"22 стр Г", L"24 стр А", L"24 стр В", L"24 стр Д", L"24а стр А", L"25 стр В", L"26 стр А", L"28 стр А", L"28 стр В", L"28 стр Г", L"3 стр К", L"30 стр А", L"32 стр А", L"33 стр А", L"33 стр Б", L"33 стр В", L"34 стр Б", L"34 стр В", L"34 стр Г", L"36", L"36 стр А", L"37 стр А", L"38 стр А", L"39 стр Б", L"39 стр Г", L"39 стр Д", L"40 стр А", L"40 стр Б", L"40 стр В", L"40а", L"40а стр А", L"40а стр Е", L"40а стр З", L"40а стр И", L"42 стр А", L"44а стр А", L"44б"},
                                   {L"5-я В.О. линия", L"64/13 стр А", L"66 стр А", L"66 стр Б", L"68 стр А", L"68 стр Б", L"68 стр И", L"68 стр Р", L"68 стр Т", L"68 стр У", L"68/2 стр В", L"68/3 стр Г", L"68/4 стр Д", L"70 стр А"},
                                   {L"8-я В.О. линия", L"69 стр Б", L"71 стр А", L"73/23 стр А", L"75 стр А", L"75 стр Б", L"77 стр А", L"77 стр Б", L"77 стр В", L"77 стр Д", L"83/1 стр А", L"83/2 стр В", L"83/3 стр Е", L"85 стр А"},
                                   {L"11-я В.О. линия", L"14/39 стр А", L"16 стр А", L"16 стр Б", L"18 стр А", L"18 стр В", L"20 стр А", L"20 стр Б", L"22 стр А", L"22 стр В", L"24 стр А", L"24 стр Б", L"24 стр М", L"26 стр А", L"26 стр Е", L"28 стр А", L"28 стр Б", L"30 стр А", L"30 стр Б", L"32/44 стр А", L"34/47 стр А", L"36 стр А", L"38 стр А", L"38 стр Т", L"40 стр А", L"40 стр Б", L"42 стр А", L"44 стр А", L"46 стр А", L"48 стр А", L"48 стр Б", L"50 стр А", L"52 стр А", L"52 стр Б", L"54 стр А", L"54 стр Б", L"54 стр В", L"54 стр Г", L"56 стр А", L"56 стр Б", L"56 стр В", L"56 стр Г", L"56 стр Д", L"56 стр Е", L"58 стр А", L"60 стр А", L"64 стр Д", L"66 стр А", L"66/2 стр В", L"66/3 стр Б", L"66/4 стр Е", L"66/5 стр Д"},
                                   {L"ул. Камская", L"10 стр А", L"10 стр В", L"11 стр А", L"14 стр А", L"16", L"16 стр Б", L"16а стр А", L"18 стр В", L"20", L"20 стр Г", L"20 стр Л", L"20 стр Т", L"20/2 стр В", L"20/2 стр Д", L"22 стр Д", L"24 стр А", L"24 стр Б", L"24 стр Е", L"26 стр А", L"4 стр А", L"4/2 стр Т", L"5/2 стр А", L"5а стр Г", L"7-9 стр Д", L"8/90 стр А", L"8/90 стр Б"},
                                   {L"9-я В.О. линия", L"66 стр А", L"68 стр А", L"70 стр А", L"72 стр А", L"72 стр Б", L"72 стр В", L"74 стр А", L"76 стр А", L"76 стр Б", L"78 стр А", L"78 стр Б", L"78 стр Т"},
                                   {L"14-я В.О. линия", L"19 стр А", L"19 стр Ж", L"21 стр А", L"23 стр А", L"23 стр Б", L"25-27 стр А", L"25-27 стр З", L"29 стр А", L"31-33 стр А", L"31-33 стр Б", L"31-33 стр В", L"31-33 стр Г", L"31-33 стр О", L"31-33 стр Т", L"35 стр А", L"35 стр Б", L"37 стр А", L"37 стр Б", L"37 стр Д", L"39 стр А", L"45 стр А", L"45 стр В", L"47 стр А", L"49 стр А", L"49 стр Т", L"51 стр А", L"53 стр 1", L"57-61 стр А", L"57-61 стр Б", L"57-61 стр В", L"57-61 стр Г", L"57-61 стр Д", L"57-61 стр Е", L"57-61 стр И", L"57-61 стр Л", L"57-61 стр П", L"57-61 стр Ю", L"63 стр А", L"65 стр А", L"65а стр А", L"67-69 стр А", L"71 стр А", L"71 стр Б", L"71 стр В", L"71/2 стр Т", L"75/2 стр Б", L"77 стр А", L"77 стр Т", L"83 стр В", L"85 стр А", L"85 стр Б", L"85 стр Е", L"87 стр 1", L"89 стр А", L"89 стр В", L"91 стр А", L"93 стр А", L"93 стр Б", L"95 стр А", L"97 стр А", L"97 стр Б", L"97 стр Д", L"99 стр А"},
                                   {L"пр-кт Средний В.О.", L"40 стр А", L"46 стр А", L"48/27 стр А", L"48/27 стр Б", L"48/27 стр Г", L"48/27 стр Г1", L"48/27 стр Г2", L"48/27 стр Т", L"48/27 стр Ш", L"49 стр А", L"50 стр А", L"50 стр Б", L"51 стр А", L"51 стр В", L"51 стр Т", L"52 стр А", L"52 стр Б", L"54 стр А", L"54 стр Б", L"55 стр А", L"55 стр Б", L"55 стр В", L"55 стр О", L"56 стр А", L"57/43 стр А", L"57/43 стр В", L"57/43 стр Г", L"58/36 стр А", L"60-62 стр А", L"60-62 стр Т", L"61 стр А", L"61 стр Б", L"65 стр А", L"68 стр А", L"68 стр Б", L"69 стр А", L"69 стр Б", L"70 стр А", L"72 стр А", L"75 стр А", L"75 стр Б"},
                                   {L"4-я В.О. линия", L"57 стр А", L"59 стр А", L"59 стр Б", L"61 стр А", L"61 стр Б", L"65", L"65 стр А", L"65/2 стр З"},
                                   {L"12-я В.О. линия", L"11 стр А", L"13 стр А", L"15 стр А", L"17 стр А", L"19 стр А", L"21 стр А", L"21 стр Б", L"23 стр А", L"23 стр Б", L"25 стр Ц", L"29/53 стр А", L"31 стр А", L"33 стр А", L"35 стр А", L"37 стр А", L"37 стр Б", L"37 стр В", L"37 стр Г", L"39 стр А", L"39 стр Б", L"39 стр В", L"41/1 стр Ж", L"41/2 стр Б", L"43 стр А", L"45 стр А", L"45 стр Т", L"51", L"51 стр А", L"51/2 стр Б", L"51/3 стр В", L"53 стр А", L"55/20 стр А", L"55/20 стр Б", L"55/20 стр В", L"7/43 стр А", L"9 стр А"},
                                   {L"2-я В.О. линия", L"61", L"61/30 стр А"},
                                   {L"16-я В.О. линия", L"17 стр А", L"19 стр А", L"21", L"21 стр А", L"23/1 стр А", L"23/2 стр А", L"25 стр А", L"25 стр Б", L"27 стр А", L"27 стр В", L"27 стр Г", L"27/2 стр А", L"29", L"29 стр А", L"31", L"31 стр А", L"31 стр Т", L"35 стр А", L"35 стр Б", L"37 стр А", L"39 стр А", L"39/64", L"39/64 стр А", L"43 стр А", L"45 стр А", L"47 стр А", L"47 стр Б", L"49 стр А", L"49 стр В", L"53 стр А", L"55 стр А", L"55 стр Т", L"65 стр А", L"65 стр Б", L"65/2 стр В", L"67 стр В", L"69 стр А", L"69 стр Б", L"71/50 стр А", L"73/49 стр А", L"73/49 стр Б", L"73/49 стр В", L"75 стр А", L"75 стр Б", L"75 стр В", L"75 стр Г", L"77 стр А", L"77 стр Б", L"79 стр А", L"81 стр А", L"83 стр А", L"85 стр Г", L"85/1 стр Б", L"85/2 стр Ж", L"85/2 стр Т", L"85/3 стр В", L"85/4 стр А", L"85/5 стр Б", L"85/6 стр Д", L"85/7 стр Г", L"89/1 стр А", L"89/2 стр В", L"89/3 стр Б", L"91/1 стр А", L"91/2 стр А", L"93/1 стр А", L"93/2 стр Б", L"93/2 стр Г1", L"93/2 стр Г2", L"93/2 стр Г3", L"93/2 стр Г4", L"93/3 стр Г", L"93/3 стр Г11", L"93/3 стр Г12", L"93/3 стр Г6", L"93/3 стр Г8", L"93/4 стр В", L"97 стр А", L"97 стр В"},
                                   {L"3-я В.О. линия", L"62 стр А"},
                                   {L"17-я В.О. линия", L"14 стр А", L"16 стр А", L"18 стр А", L"18 стр Б", L"18 стр В", L"18 стр Г", L"18/3 стр А", L"20 стр А", L"20 стр Б", L"28 стр Д", L"28 стр З", L"30/66 стр А", L"30/66 стр Б", L"32/67 стр А", L"34-36 стр А", L"34-36 стр Д", L"38 стр А", L"38 стр Б", L"40 стр А", L"40 стр Б", L"42 стр А", L"42 стр Б", L"42 стр В", L"42 стр Е", L"42/4 стр Ж", L"44 стр А", L"44 стр А-А2", L"44/2", L"44/3", L"44/4", L"44/5 стр А", L"46 стр А", L"48", L"52/1 стр А", L"52/2 стр А", L"54/1 стр В", L"54/10 стр А", L"54/10 стр Д", L"54/11 стр А", L"54/12 стр А", L"54/13 стр А", L"54/14 стр А", L"54/15 стр А", L"54/16 стр А", L"54/17 стр Е", L"54/2 стр Е", L"54/3 стр Г", L"54/4 стр А", L"54/5 стр Б", L"54/6 стр А", L"54/7 стр А", L"54/8 стр Д", L"54/9 стр В", L"56 стр А", L"56 стр Б", L"58", L"58 стр А", L"60 стр А", L"62 стр А", L"62 стр Б", L"64 стр А", L"64 стр Б", L"64 стр В", L"66 стр Б", L"66 стр В", L"66 стр Д", L"68 стр А", L"68 стр Б", L"68 стр В", L"70/12 стр А", L"70/12 стр Т"},
                                   {L"10-я В.О. линия", L"11 стр А", L"11 стр Б", L"13 стр А", L"15 стр А", L"15б стр А", L"17 стр А", L"17/2 стр А", L"19 стр А", L"19 стр З", L"21 стр А", L"23 стр А", L"23 стр Д", L"25/42 стр А", L"27/45 стр А", L"29 стр А", L"29 стр Б", L"31-33", L"31-33 стр А", L"37 стр Б", L"37 стр В", L"37 стр Т", L"39 стр А", L"41 стр А", L"43 стр А", L"45 стр А", L"45 стр Т", L"47 стр А", L"47 стр Б", L"49 стр А", L"49 стр Б", L"5 стр А", L"51/31 стр А", L"53 стр А", L"53 стр Г17", L"53 стр Г19", L"53 стр Г20", L"53 стр Г21", L"53 стр Г22", L"53 стр Г23", L"53 стр Г24", L"53 стр Г25", L"53 стр Г26", L"55", L"55 стр А", L"55 стр Б", L"55 стр В", L"55 стр Д", L"57 стр А", L"57 стр Б", L"7 стр А", L"7 стр Б", L"9 стр А", L"9 стр Б", L"9 стр В"},
                                   {L"18-я В.О. линия", L"17", L"19 стр А", L"21 стр А", L"23 стр А", L"23 стр Б", L"25 стр А", L"29 стр А", L"29 стр Б", L"29 стр Ж", L"29 стр З", L"29 стр И", L"31 стр А", L"31 стр В", L"31 стр Т", L"37 стр А", L"37 стр Б", L"37 стр Е", L"43 стр А", L"45 стр А", L"47 стр А", L"49 стр 1", L"49/2", L"49/3", L"49/4", L"49/5", L"51", L"53 стр Б", L"55/1", L"55/2", L"55/3 стр А", L"55к1", L"55к2", L"55к3"},
                                   {L"15-я В.О. линия", L"12 стр А", L"14 стр А", L"14 стр Т", L"14/3 стр А", L"16 стр А", L"18 стр А", L"22 стр А", L"22 стр Д", L"24-26 стр А", L"28 стр Г", L"30 стр Д", L"32 стр А", L"32 стр Т", L"34 стр А", L"38/59 стр В", L"38/59 стр Е", L"40 стр А", L"42 стр А", L"44 стр А", L"44 стр Б", L"46 стр А", L"48 стр А", L"50 стр А", L"50 стр Б", L"56/2 стр А", L"58 стр А", L"58 стр Д", L"60 стр А", L"60 стр Б", L"60 стр В", L"60 стр И", L"62 стр А", L"62 стр Б", L"62/2 стр А", L"64 стр А", L"64 стр Б", L"66 стр Б", L"66 стр Г", L"68 стр А", L"70 стр А", L"72 стр А", L"74 стр А", L"74 стр Б", L"76 стр А", L"76 стр Е", L"78 стр А", L"80 стр А", L"80 стр Б", L"82 стр А", L"84/2", L"84/2 стр Б", L"86 стр А", L"86 стр В", L"88 стр А", L"88 стр Л"},
                                   {L"19-я В.О. линия", L"34/1 стр Б", L"34/2 стр О", L"34/3 стр В", L"34/3 стр Н", L"34/4 стр М", L"34/5 стр Ц"},
                                   {L"Реки Смоленки наб.", L"10/1 стр А", L"10/2 стр Б", L"10/2 стр Г", L"14 стр А", L"14 стр О", L"14 стр С", L"14 стр Ш", L"14 стр Я1", L"14 стр Я2", L"14 стр Я3", L"14 стр Я4", L"17/2", L"17/2 стр М", L"19-21 стр А", L"19-21 стр Б", L"19-21 стр В", L"19-21 стр Д", L"19-21 стр Е", L"19-21 стр Ж", L"19-21 стр К", L"19-21 стр Л", L"19-21 стр О", L"19-21 стр П", L"19-21 стр С", L"19-21 стр Т", L"25", L"25 стр А", L"25 стр В", L"25 стр Е", L"27 стр А", L"27 стр Г", L"27а стр А", L"29 стр А", L"29 стр Б", L"29 стр В", L"31 стр А", L"31 стр Б", L"31 стр В", L"31 стр Г3", L"31а стр А", L"33 стр А", L"5-7 стр А", L"5-7 стр Д", L"5-7 стр Ж", L"5-7 стр З", L"5-7 стр И", L"5-7 стр К", L"5-7 стр Л", L"5-7 стр Н", L"5-7 стр П", L"5-7 стр Р", L"5-7 стр С", L"5-7 стр Т", L"8/86", L"8/86 стр Б"},
                                   {L"ул. Донская", L"10 стр А", L"10 стр В", L"14 стр А", L"19 стр А", L"24 стр А", L"26 стр А", L"28 стр А", L"3 стр Б"},
                                   {L"пр-кт Большой В.О.", L"41 стр А", L"41 стр Б", L"41 стр Т", L"47 стр А", L"47 стр Б", L"47/3 стр А", L"49-51 стр А", L"49-51 стр Б", L"49-51 стр В", L"49-51 стр Г", L"49-51 стр Д", L"49-51 стр Ж", L"53/10 стр А", L"55 стр А", L"55 стр Б", L"55 стр В", L"57/15 стр А", L"59 стр А", L"61 стр А", L"61 стр Т", L"63/17 стр А", L"63/17 стр Т", L"67 стр А"},
                                   {L"7-я В.О. линия", L"72 стр А", L"72 стр Т", L"74 стр А", L"76 стр А", L"80/1 стр А", L"80/2 стр Д", L"80/4 стр З", L"82/1 стр Ж", L"82/2 стр Б", L"82/3 стр Д", L"84 стр А"},
                                   {L"13-я В.О. линия", L"16 стр А", L"18 стр А", L"18 стр Б", L"18 стр В", L"18 стр Т", L"20 стр А", L"22 стр А", L"22 стр Б", L"22 стр В", L"22/3 стр Г", L"24 стр А", L"24 стр Б", L"24/2 стр И", L"26 стр А", L"26 стр Г", L"28 стр А", L"30 стр А", L"32 стр А", L"32 стр Т", L"34 стр А", L"34 стр Б", L"36 стр А", L"40", L"42 стр А", L"44 стр А", L"44 стр Б", L"44 стр Т", L"44/2 стр Т", L"44/3 стр А", L"46 стр А", L"46 стр Б", L"46а стр А", L"46а стр Б", L"48 стр А", L"48 стр Б", L"50 стр А", L"54 стр В", L"56 стр А", L"58-60 стр А", L"58-60 стр Б", L"58-60 стр Г", L"58-60 стр Д", L"62 стр А", L"64/39 стр А", L"64/39 стр В", L"68 стр А", L"68 стр В", L"72 стр А", L"72 стр Б", L"72 стр В", L"72 стр З", L"72 стр Н", L"78 стр А", L"78 стр Г", L"80/1 стр А", L"80/2 стр Б"},
                                   {L"Макарова наб.", L"3 стр А", L"32 стр Ж", L"32/1 стр А", L"32/2", L"32/2 стр Б", L"32/3 стр В", L"32/4 стр Д", L"34 стр А"},
                                   {L"6-я В.О. линия", L"53 стр А", L"55 стр А", L"59/1 стр Б", L"59/2 стр В"},
                                   {L"пр-кт Малый В.О.", L"15 стр А", L"15 стр Б", L"15 стр В", L"19 стр А", L"21 стр А", L"27 стр А", L"27 стр Т", L"27-29", L"27-29 стр Е", L"27/2 стр А", L"29 стр Б", L"29 стр В", L"29 стр Г", L"3/60 стр А", L"30-32 стр А", L"30-32 стр Б", L"30-32 стр В", L"30-32 стр Г", L"33 стр А", L"33 стр Б", L"33 стр В", L"34 стр А", L"35 стр А", L"35 стр Б", L"37 стр А", L"37 стр Б", L"37/49", L"37/49 стр Б", L"38-40/73 стр А", L"38-40/73 стр Ж", L"41 стр А", L"41 стр Б", L"41 стр В", L"41 стр Г1", L"41 стр Г2", L"43/2 стр В", L"43/75 стр А", L"44 стр А", L"44 стр Б", L"46 стр А", L"47 стр Т", L"48 стр А", L"48/2 стр А", L"5 стр А", L"51/50 стр А", L"51/50 стр Б", L"52 стр 1", L"52 стр Б", L"53 стр А", L"54 стр А", L"54/2 стр А1", L"54/3 стр Ж", L"54/4 стр В", L"54/5 стр Е", L"54/5 стр П", L"54/6 стр Т", L"54/7 стр Ф", L"54/8 стр Ш", L"55/1 стр А", L"55/2 стр А", L"57/1 стр Д", L"57/2 стр Б", L"57/3 стр А", L"57/4 стр Ж", L"57/6 стр М", L"57/7 стр А", L"58 стр А", L"58 стр Б", L"58 стр Е", L"58 стр И", L"60 стр А", L"62/1 стр А", L"62/2 стр А", L"64", L"64 стр Р", L"64 стр Х", L"66 стр А", L"7 стр А", L"83 стр Б", L"83 стр В"}};
array<size_t, 79> quantity;
void prepare_addresses(){
    cout << "Preparing adresses..." << endl;
    for (int i = 0; i < 79; i++){
        quantity[i] = addresses[i].size();
    }
    cout << "Done" << endl;
}
wstring get_addr(){
    int n = rand() % 79;
    return addresses[n][0] + L" " + addresses[n][1 + rand() % (quantity[n] - 1)];
}