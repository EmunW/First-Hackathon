#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

//Print the squares from 1 to 100,

    double square(int x)
    {
        int s = 0;
        for (int i = 0; i < x; i++)
            s +=x;         //Or you can just type return x*x;
        return s;
    }

    void print_square(int v)
    {
        cout << v << '\t' << v*v << '\n';
    }

int main()
{

    cout << square (2) << '\n';
    cout << square (5) << '\n';
    for (int i=0; i<100; i++) print_square(i);
    return 0;
}
