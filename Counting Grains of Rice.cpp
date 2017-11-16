#include <iostream>
#include <vector>
#include <math.h>       //This folder needed for exponent.
using namespace std;

//Rice will be added in a square. For example a 2x2 square of rice means there are 4 grains,
//A 3x3 square of rice means there are 9 grains, and so on until it becomes a 64x64 square.

int main()
{
    vector<int> square_number;
    double sum = 0;
    for (double i=0; i<=64; i++){
        square_number.push_back(i);
        cout << square_number[i] << '\t' << pow(2, i) << '\n';       //Finds the answer to 2 to the power of i.
        sum = sum + pow(2, i);
        if(sum >= 1000 && sum <= 2000){
            cout << "The sum of the grains of rice will exceed 1000 at square number " << i << ". \n";
        }
        else if(sum >=1000000 && sum <= 2000000){
            cout << "The sum of the grains of rice will exceed 1000000 at square number " << i << ". \n";
        }
        else if(sum >=1000000000 && sum <=2000000000){
            cout << "The sum of the grains of rice will exceed 1000000000 at square number " << i << ". \n";
        }
    }
    return 0;
}
