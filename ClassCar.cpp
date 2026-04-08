#include <iostream>
using namespace std;
class Car
{
    string brand;
    float price;
    int make;
    string color;

public:
    void input_detail()
    {
        cout << "Enter the brand price make and colour:";
        cin >> brand >> price >> make >> color;
    }
    void display()
    {
        cout << "\nBrand:" << brand;
        cout << "\nPrice:" << price;
        cout << "\nMAnufacture year:" << make;
        cout << "\nColor:" << color;
    }
};
int main()
{
    Car c1;
    c1.input_detail();
    c1.display();
    return 0;
}
