#include <iostream>
#include <string>
using namespace std;

int main()
{
    float tempF, tempC;
    cout <<"Temperatura em Fahrenheit: ";
    cin >> tempF;
    tempC=(tempF-32)/1.8;
    cout << "Temperatura em graus Celsius: " << tempC;
}
