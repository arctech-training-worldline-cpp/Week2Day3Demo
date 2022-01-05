#include <iostream>
using namespace std;

class PolymorphicVehicle
{
    protected:
        int speed = 0;
    public:
        void Start()
        {
            cout << "Vehicle Start" << endl;
        }

        void Stop()
        {
            speed = 0;
            cout << "Vehicle Stop" << endl;
        }

        void Accelerate()
        {
            speed += 10;
            cout << "Vehicle Accelerate" << endl;
        }

        void Brake()
        {
            speed -= 10;
            cout << "Vehicle Brake" << endl;
        }

        int GetSpeed()
        {
           return speed; 
        }
};
