#include <iostream>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person()
    {
        name = "default";
        age = 18;
    }
    Person(string name, int age)
    {
        this->name = name;
        (*this).age = age;
    }
    void DisplayPerson()
    {
        cout << "\n Name : " << name << "\nAge:" << age;
    }
};
class Student : public Person
{
    string rln;

public:
    Student()
    {
        rln = "25csu000";
    }
    Student(string j, int p, string n) : Person(j, p)
    {
        rln = n;
    }
    void displayStudent()
    {
        DisplayPerson();
        cout << "\n Roll no. :" << rln;
    }
};
int main()
{
    Student s1, s2("jam", 19, "25csu098");
    s1.displayStudent();
    s2.displayStudent();
    return 0;
}
