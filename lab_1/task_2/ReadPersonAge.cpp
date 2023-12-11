#include "Header.h"
#include <iostream>

unsigned short ReadPersonAge() {
    unsigned short age;
    std::cout << "¬ведите возраст: ";
    std::cin >> age;
    return age;
}