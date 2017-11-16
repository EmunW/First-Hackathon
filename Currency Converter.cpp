#include <iostream>

using namespace std;

//Converts measurements and money.

int main()
{
/*    int a = 0;
    a++;        //Same as ++a
    cout << a << '\n';
    const double cm_per_inch = 2.54;
    double length = 0;
    char unit = ' ';
    cout << "Enter the length in either centimeters or inches(c or i):\n";
    cin >> length >> unit;
    switch (unit){
    case 'i':
        cout << length << " in is equal to " << length * cm_per_inch << " cm \n";
        break;
    case 'c':
        cout << length << " cm is equal to " << length / cm_per_inch << " in \n";
        break;
    default:
        cout << "I do not know the unit called " << unit << '\n';
    }
*/
    const double yen_per_dollar = 111.41;  //March 3rd, 2016
    const double euro_per_dollar = 0.89;
    const double pounds_per_dollar = 0.69;
    double money = 0;
    string currency = " ";
    cout << "Enter the amount of money and currency (dollar, yen, euro, pound)";
    cin >> money >> currency;
    if (currency == "dollar")   //Using if statements because switch must be an integer, character, enumeration (int, char, enum) so string does not work.
                                //I could change the strings into char but i wanted the full currency name.
        cout << money << " dollar(s) is equal to \n" << money * yen_per_dollar << " yen \n" << money * euro_per_dollar << " euro \n" << money * pounds_per_dollar << " pound(s) \n";
    else if (currency == "yen")
        cout << money << " yen is equal to " << money / yen_per_dollar << " dollar(s)";
    else if (currency == "euro")
        cout << money << " euro is equal to " << money / euro_per_dollar << " dollar(s)";
    else if (currency == "pound")
        cout << money << " pound(s) is equal to " << money / pounds_per_dollar << " dollar(s)";
    else
        cout << "This calculator does not convert " << currency;


    return 0;
}
