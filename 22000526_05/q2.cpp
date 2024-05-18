#include <iostream>
#include <string>

class Student{
private:
    std::string name;
    int roll_no;
public:
    void setDetails(int rollno , std::string name){
        this->name = name;
        this->roll_no = rollno;
    }
    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll No: " << roll_no << std::endl;
    }
};

int main()
{
    Student student;
    student.setDetails(2 , "John");    
    student.display();

    return 0;
}
