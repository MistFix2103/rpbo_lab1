#include <iostream>
#include <string>
using namespace std;

unsigned short ReadPersonAge() {
    unsigned short age;
    cout << "Введите возраст: ";
    cin >> age;
    return age;
}

string ReadPersonName() {
    string name;
    cout << "Введите имя: ";
    cin >> name;
    return name;
}

unsigned short personHeight;

void ReadPersonHeight() {
    cout << "Введите рост: ";
    cin >> personHeight;
}

void ReadPersonWeight(unsigned short& weight) {
    cout << "Введите вес: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cout << "Введите заработную плату: ";
    cin >> *salary;
}

string personSalary;

void WritePersonData(const string& name, const string& height = "", const string& weight = "", const unsigned short* age = nullptr) {
    cout << "Имя: " << name << endl;
    if (age != nullptr) cout << "Возраст: " << *age << endl;
    if (!height.empty()) cout << "Рост: " << height << endl;
    if (!weight.empty()) cout << "Вес: " << weight << endl;
    cout << "Заработная плата: " << personSalary << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, double& salary, unsigned short& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
    ReadPersonWeight(weight);
}

#ifndef DO_NOT_DEFINE_MAIN
int main() {
    setlocale(LC_ALL, "Russian");
    string name;
    unsigned short age, weight;
    double salary;

    ReadPersonData(name, age, salary, weight);
    ReadPersonHeight();
    personSalary = to_string(salary);
    WritePersonData(name, to_string(personHeight), to_string(weight), &age);

    return 0;
}
#endif
