#include <iostream>
#include "Header.h"

std::string ReadPersonName() {
    std::string name;
    std::cout << "������� ���: ";
    std::cin >> name;
    return name;
}