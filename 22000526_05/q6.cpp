#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
    string name;
    int year_of_joining;
    string address;

public:
    Employee(string n, int yoj, string addr)
        : name(n), year_of_joining(yoj), address(addr) {}

    void display()
    {
        cout << name << "\t" << year_of_joining << "\t" << address << endl;
    }
};

int main(){
    Employee emp1("Robert", 1994, "64C- WallsStreat");
    Employee emp2("Sam", 2000, "68D- WallsStreat");
    Employee emp3("John", 1999, "26B- WallsStreat");

    cout << "Name\tYear of joining\tAddress" << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
