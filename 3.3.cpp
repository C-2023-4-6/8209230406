#include<iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
    cout << "----------------------------------------------------" << endl;

    for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
        double fahrenheit = c_to_f(celsius);
        cout << fixed << setprecision(1) << setw(7) << celsius << "       "
            << setw(9) << fahrenheit << "        |   ";

        fahrenheit = (celsius - 30.0) * 10.0 + 80.0;
        celsius = f_to_c(fahrenheit);
       cout << setw(7) << fahrenheit << "            "
            << setprecision(2) << setw(7) << celsius << std::endl;
    }

    return 0;





}