#include <iostream>

using namespace std;

class Vehicle
{
    public:
        void Start()
        {
            cout << "Vehicle Start" << endl;
        }

        void Stop()
        {
            cout << "Vehicle Stop" << endl;
        }

        void Accelerate()
        {
            cout << "Vehicle Accelerate" << endl;
        }

        void Brake()
        {
            cout << "Vehicle Brake" << endl;
        }
};

class Car : public Vehicle
{
    public:
        void OpenSunRoof()
        {
            cout << "Car Open Sun Roof" << endl;
        }

        void CloseSunRoof()
        {
            cout << "Car Close Sun Roof" << endl;
        }
};

class ElectricCar : public Car
{
    public:
        void Charge()
        {
            cout << "Electric Car charge" << endl;
        }
};

class PetrolCar : public Car
{
public:
        void Refuel()
        {
            cout << "Petrol Card refuel" << endl;
        }
};

int main3()
{
    Vehicle v;
    v.Start();

    cout << "---------------------" << endl;
    
    Car c;
    c.Start();
    c.OpenSunRoof();

    cout << "---------------------" << endl;

    ElectricCar e;
    e.Start();
    e.OpenSunRoof();
    e.Charge();

    cout << "---------------------" << endl;
}