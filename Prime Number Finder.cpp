#include "std_lib_facilities.h"

using namespace std;

//Finds the number of primes to the nth value.

vector<int> prime;
bool is_prime(int n)
{
    for(int p = 0; p<prime.size(); p++)
        if (n%prime[p]==0) return false;
    return true;
}

int main()
{
    int n;
    int maximum;
    cout << "Enter the maximum value.\n";
    cin >> maximum;
    cout << "Enter the amount of primes you want to find.\n";
    cin >> n;
    prime.push_back(2);
    for(int i=3; i<=maximum; i++){
        if(is_prime(i)) prime.push_back(i); //Add prime to the vector.
    }
    cout << "Primes: ";
    for (int p = 0; p<n; p++)       //Find the first n primes.
        if(p < prime.size())
        cout << prime[p] << '\n';
    return 0;
}
