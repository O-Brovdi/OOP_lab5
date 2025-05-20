#include "Employee.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "\n--- TeamLead ---\n";
    TeamLead lead("Ivan", 103, 6000, "C++", 5);
    lead.Work();

    cout << "\n--- MultiRole ---\n";
    MultiRole mr("Olena", "Python");

    cout << "\n--- AutomationTester ---\n";
    AutomationTester at("Stepan", "JavaScript");
    at.Work();

    cout << "\n--- END OF MAIN ---\n";
    return 0;
}
