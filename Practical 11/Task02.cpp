#include<iostream>
using namespace std;
class Mammals
{
    public:
            void display1()
            {
                cout << "I am Mammal." << endl;
            }
};
class MarineAnimals
{
    public:
            void display2()
            {
                cout << "I am Marine Animal." << endl;
            }
};
class BlueWhale: public Mammals, public MarineAnimals
{
    public:
            void display3()
            {
                cout << "I belong to both categories: Mammals as well as Marine Animals." << endl;
            }
};

int main()
{
    Mammals obj1;
    MarineAnimals obj2;
    BlueWhale obj3;

    obj1.display1();
    obj2.display2();
    obj3.display3();
    obj3.display1();
    obj3.display2();

    return 0;
}
