#include "Header.h"

void ReadPersonData(std::string& name, unsigned short& age, double& salary, unsigned short& weight) {
    ReadPersonData(name, age, salary);
    ReadPersonWeight(weight);
}