#include <iostream>
#include "Header.h"

int main() {
    std::string name;
    unsigned short age, weight;
    double salary;

    setlocale(LC_ALL, "ru");
    ReadPersonData(name, age, salary, weight);
    ReadPersonHeight();
    personSalary = std::to_string(salary);
    WritePersonData(name, std::to_string(personHeight), std::to_string(weight), &age);

    return 0;
}