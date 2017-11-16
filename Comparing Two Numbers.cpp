#include <iostream>

using namespace std;

//This program compares two numbers and tells which one is greater, if they are very close together then it will also
//print out "The numbers are almost equal."

int main()
{
    double a, b = 0;
    while (cin >> a >> b){
        cout << a << '\t' << b << '\n';
        if(a > b){
            cout << "The smaller value is:" << b << '\n' << "The larger value is:" << a << '\n';
            if (a < b + 1.0/10000000)
                cout << "The numbers are almost equal" << '\n';}
        else if(a < b){
            cout << "The smaller value is:" << a << '\n' << "The larger value is:" << b << '\n';
            if (a + 1.0/10000000 > b)
                cout << "The numbers are almost equal" <<'\n';}
        else if(a == b)
            cout << "The numbers are equal" << '\n';
        }
    return 0;
}
