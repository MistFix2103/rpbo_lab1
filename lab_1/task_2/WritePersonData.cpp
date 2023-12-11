#include <iostream>
#include "Header.h"

std::string personSalary;

void WritePersonData(const std::string& name, const std::string& height, const std::string& weight, const unsigned short* age) {
    std::cout << "Имя: " << name << std::endl;
    if (age != nullptr) std::cout << "Возраст: " << *age << std::endl;
    if (!height.empty()) std::cout << "Рост: " << height << std::endl;
    if (!weight.empty()) std::cout << "Вес: " << weight << std::endl;
    std::cout << "Заработная плата: " << personSalary << std::endl;
}