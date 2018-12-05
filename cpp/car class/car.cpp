#include <iostream>
#include <string>
using namespace std;
class Car   {
    public:
        string name;
        string model;
        string color;
        int year;
};

int main()
{
    Car car1;
    car1.name = "Tesla";
    car1.model = "Model S Performance";
    car1.color = "Silver";
    car1.year = 2014;
    cout << car1.name;
    return 0;

}
//Name Model Year color
