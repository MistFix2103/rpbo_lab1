#include <iostream>
#include "Header.h"

std::string personSalary;

void WritePersonData(const std::string& name, const std::string& height, const std::string& weight, const unsigned short* age) {
    std::cout << "���: " << name << std::endl;
    if (age != nullptr) std::cout << "�������: " << *age << std::endl;
    if (!height.empty()) std::cout << "����: " << height << std::endl;
    if (!weight.empty()) std::cout << "���: " << weight << std::endl;
    std::cout << "���������� �����: " << personSalary << std::endl;
}