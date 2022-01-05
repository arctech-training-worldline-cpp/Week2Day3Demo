#include <iostream>
#include "Bike.h"
using namespace std;

class CbxBike : public Bike
{
    public:
    void Start()
    {
        cout << "CBZ Started" << endl;
    }
    void Brake(int pressure)
    {
        cout << "CBZ Brake" << endl;
    }
    void Accelerate(int rate)
    {
        speed = rate;
        cout << "CBZ Accelerate" << endl;
    }
    void Refuel(){
        cout << "CBZ Refuel" << endl;
    }

    float GetCurrentSpeed()
    {
        return speed;
    }
};

class DummyBike : public Bike
{
    public:
    void Start()
    {
        cout << "Started" << endl;
    }
    void Brake(int pressure)
    {
        cout << "Brake" << endl;
    }
    void Accelerate(int rate)
    {
        speed = rate;
        cout << "Accelerate" << endl;
    }
    void Refuel(){
        cout << "Refuel" << endl;
    }

    float GetCurrentSpeed()
    {
        return speed;
    }
};

void DoBikeWork(Bike* bike)
{
    bike->Start();
    bike->Accelerate(10);
    bike->GetCurrentSpeed();
    bike->Refuel();
}

int main2()
{
    // DummyBike bike;
    // bike.Start();
    // bike.Accelerate(10);
    // bike.GetCurrentSpeed();
    // bike.Refuel();

    CbxBike* bike1 = new CbxBike();
    DoBikeWork(bike1);
    delete bike1;

    DummyBike* bike2 = new DummyBike();
    DoBikeWork(bike2);
    delete bike2;
       
    CbxBike bike;
    bike.Start();
    bike.Accelerate(10);
    bike.GetCurrentSpeed();
    bike.Refuel();
    return 0;
}

