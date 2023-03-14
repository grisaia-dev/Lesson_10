#include <iostream>

#define WINDOWS
#ifndef WINDOWS
#include <Windows.h>
#endif

int main(void) {

#ifndef WINDOWS
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
#endif

    std::string name = "";
    std::cout << "Введите имя: ";
    std::cin >> name;

    std::cout << "Здравствуйте, " << name << "!" << std::endl;
    return 0;
}