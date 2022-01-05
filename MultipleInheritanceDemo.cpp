#include <iostream>
using namespace std;

class Robot
{
    public:
    void Reboot()
    {
        cout << "Robot reboot" << endl;
    }
};

class Human
{
    public:
    void Breathe()
    {
        cout << "Human breathing" << endl;
    }
};

// Android is a creature which is half human and half robot
class Android : public Robot, public Human
{
    public:
    void ShowStatus()
    {
        cout << "Android Status: ALL FINE" << endl;
    }
};

int main4()
{
    Android a;
    a.Breathe();
    a.Reboot();
    a.ShowStatus();

    return 0;
}