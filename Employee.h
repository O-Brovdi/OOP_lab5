#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Person {
protected:
    string name;

public:
    Person();
    Person(string name);
    virtual ~Person();

    void ShowName() const;
};

class Employee : virtual public Person {
protected:
    int id;
    double salary;

public:
    Employee();
    Employee(string name, int id, double salary);
    virtual void Work();
    virtual void ShowInfo();
    virtual ~Employee();
};

class Manager : virtual public Person {
protected:
    int teamSize;

public:
    Manager();
    Manager(string name, int teamSize);
    virtual void Work();
    virtual ~Manager();
};

class Developer : virtual public Person {
protected:
    string language;

public:
    Developer();
    Developer(string name, string lang);
    virtual void Work();
    void SetLanguage(string lang);
    virtual ~Developer();
};

class TeamLead : public Employee, public Developer, public Manager {
public:
    TeamLead(string name, int id, double salary, string lang, int teamSize);
    void Work() override;
    ~TeamLead();
};

class Tester {
public:
    Tester();
    virtual ~Tester();
};

class Architect {
public:
    Architect();
    virtual ~Architect();
};

class MultiRole : public Developer, public Tester, public Architect {
public:
    MultiRole(string name, string lang);
    ~MultiRole();
};

class AutomationTester : public Tester, public Developer {
public:
    AutomationTester(string name, string lang);
    void Work() override;
    ~AutomationTester();
};

#endif
