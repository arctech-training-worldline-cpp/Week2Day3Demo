#include "PolymorphicVehicle.h"

class PolymorphicCar : public PolymorphicVehicle
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

class PolymorphicElectricCar : public PolymorphicCar
{
    public:
        void Charge()
        {
            cout << "Electric Car charge" << endl;
        }

        // We are overwriting the default 
        // OOP Term: Method OverRiding
        //     Note: This is different to Method OverLoading
        void Accelerate()
        {
            speed += 10;
            cout << "ElectricCar Accelerate" << endl;
        }
};

int main()
{
    cout << "---------------------------------";
    // What is the output of the below code. Answer given below!
    PolymorphicCar c;
    c.Accelerate();
    cout << "1.speed = " << c.GetSpeed() << endl;    //10

    PolymorphicElectricCar e;
    e.Accelerate();
    e.Accelerate();
    cout << "2.speed = " << e.GetSpeed() << endl;  // 20

    cout << "---------------------------------";
    
    // What is the output of the below code.
    // Find out and explain why.
    PolymorphicCar* carPtr = new PolymorphicCar();
    carPtr->Accelerate();
    cout << "3.speed = " << carPtr->GetSpeed() << endl;

    carPtr = new PolymorphicElectricCar();
    carPtr->Accelerate();
    carPtr->Accelerate();
    cout << "4.speed = " << carPtr->GetSpeed() << endl;
    cout << "---------------------------------";
    return 0;
}

int main5()
{
    PolymorphicElectricCar e;
    e.Start();
    e.Accelerate();
    e.Accelerate();
    cout << "1. Speed: " << e.GetSpeed() << endl;
    e.Brake();
    cout << "2. Speed: " << e.GetSpeed() << endl;
    e.Stop();
    cout << "3. Speed: " << e.GetSpeed() << endl;
    e.Charge();
    e.Accelerate();
    cout << "4. Speed: " << e.GetSpeed() << endl;
    cout << "---------------------" << endl;

    return 0;
}
