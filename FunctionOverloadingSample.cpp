//function overloading demp
//same function name and return type with  different parameters
//overloading does not work with changing the return type
#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a+b;
}
int Add(int a, int b, int c)
{
    return a+b+c;
}
int Add(int a, int b, int c, int d)
{
    return a+b+c+d;
}
int main1()
{
    cout << "Function with 2 parameters" << Add(1,2) << endl;
    cout << "Function with 3 parameters" << Add(1,2,3) << endl;
    return 0;
}