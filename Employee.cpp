#include "Employee.h"

Person::Person() : name("Unnamed") {
    cout << "Person()\n";
}
Person::Person(string name) : name(name) {
    cout << "Person(" << name << ")\n";
}
Person::~Person() {
    cout << "~Person()\n";
}
void Person::ShowName() const {
    cout << "Name: " << name << "\n";
}

Employee::Employee() : id(0), salary(0.0) {
    cout << "Employee()\n";
}
Employee::Employee(string name, int id, double salary)
    : Person(name), id(id), salary(salary) {
    cout << "Employee(" << name << ", " << id << ", $" << salary << ")\n";
}
void Employee::Work() {
    cout << name << " виконує загальні завдання.\n";
}
void Employee::ShowInfo() {
    cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << "\n";
}
Employee::~Employee() {
    cout << "~Employee()\n";
}

Manager::Manager() : teamSize(0) {
    cout << "Manager()\n";
}
Manager::Manager(string name, int teamSize) : Person(name), teamSize(teamSize) {
    cout << "Manager(" << name << ", teamSize: " << teamSize << ")\n";
}
void Manager::Work() {
    cout << name << " керує командою з " << teamSize << " людей.\n";
}
Manager::~Manager() {
    cout << "~Manager()\n";
}

Developer::Developer() : language("Unknown") {
    cout << "Developer()\n";
}
Developer::Developer(string name, string lang) : Person(name), language(lang) {
    cout << "Developer(" << name << ", " << lang << ")\n";
}
void Developer::Work() {
    cout << name << " пише код мовою " << language << ".\n";
}
void Developer::SetLanguage(string lang) {
    language = lang;
    cout << name << " тепер програмує на " << lang << ".\n";
}
Developer::~Developer() {
    cout << "~Developer()\n";
}

TeamLead::TeamLead(string name, int id, double salary, string lang, int teamSize)
    : Person(name), Employee(name, id, salary),
      Developer(name, lang), Manager(name, teamSize) {
    cout << "TeamLead()\n";
}
void TeamLead::Work() {
    cout << name << " очолює команду та пише код мовою " << language << ".\n";
}
TeamLead::~TeamLead() {
    cout << "~TeamLead()\n";
}

Tester::Tester() {
    cout << "Tester()\n";
}
Tester::~Tester() {
    cout << "~Tester()\n";
}

Architect::Architect() {
    cout << "Architect()\n";
}
Architect::~Architect() {
    cout << "~Architect()\n";
}

MultiRole::MultiRole(string name, string lang)
    : Person(name), Developer(name, lang) {
    cout << "MultiRole()\n";
}
MultiRole::~MultiRole() {
    cout << "~MultiRole()\n";
}
