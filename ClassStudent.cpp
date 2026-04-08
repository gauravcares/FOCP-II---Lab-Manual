#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll_no;
    float marks1, marks2, marks3;

public:
    void input_detail() // setter
    {
        cout << "Enter the name roll no and marks1,marks2,marks3:";
        cin >> name >> roll_no >> marks1 >> marks2 >> marks3;
    }
    int calculate_total() // getter
    {
        return (marks1 + marks2 + marks3);
    }
    void display() // getter
    {
        cout << "\nName:" << name;
        cout << "\nRoll No:" << roll_no;
        cout << "\nMarks1:" << marks1 << "\nMarks2:" << marks1 << "\nMarks3:" << marks3;

        cout << "\ntoal Marks:" << calculate_total();
    }
};
int main()
{
    Student s1;
    s1.input_detail();
    s1.display();
    return 0;
}
