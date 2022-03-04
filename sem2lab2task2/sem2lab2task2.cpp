#include <iostream>
#include <bitset>
using namespace std;
#define input(type, variable) type variable ; cin >> variable
#define powerfinder(num1 , num2) (num1*(2<<(num2-1)))
int main()
{
    cout << "Enter 2 Numbers :" << endl;
    input(int, num1);
    input(int, num2);
    cout << powerfinder(num1, num2);
}

