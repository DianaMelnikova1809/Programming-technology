﻿#include "menu.h"
/*Класс Печатное издание хранит книги поэтов, романистов и фантастов. Для
поэтов определено: ФИО, годы жизни, несколько основных произведений. Для
романистов определено: ФИО, годы жизни, несколько произведений, краткая
биография. Для фантастов определено: ФИО, несколько произведений, сняты
ли фильмы по книгам.
*/
/*Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
▪ добавление и удаление производных объектов абстрактного класса Writter
▪ полное сохранение себя в файле;
▪ полное восстановление себя из файла.
*/

/*TODO: 
1)Keeper - сделан 
2)Меню - сделано
3)Сделать правильно name_books - сделано
4)Добавить функции в switch case в меню, функции должны быть инкапсулированы 
5)Подумать над тем, как обрабатывать файл не только для поэта
но и для романиста и кого-то там тоже - сделано
6)Добавить остальные классы писателей

*/
using namespace Menu;
int main()
{
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    menu();
    return 0;
}