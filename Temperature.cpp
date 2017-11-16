#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//Temperature data.

using namespace std;

int main()
{
    vector <double> temps;      //temps for temperature.
    double temp;
    int y = 0;
    while(cin >> temp){
        temps.push_back(temp);
        if (temp < 0){
            y++;               //Counts negative values.
    }
    }
    double sum = 0;
    for (int i=0; i<temps.size(); i++)  //Solves for average temperature.
        sum += temps[i];
    cout << "Average temperature: " << sum/temps.size() << '\n';
    sort(temps.begin(),temps.end());    //Sorts vector temps from beginning to end.
    if(temps.size()%2 == 0){    //Do this if there are an even number of inputs.
        cout << "Median temperature: " << ((temps[temps.size()/2 - 1]) + (temps[temps.size()/2]))/2<< '\n';
    }
    else cout << "Median temperature: " << temps[temps.size()/2] << '\n';   //Do this if there are an odd number of inputs.
    cout << "Minimum temperature: " << temps[0] << '\n';
    cout << "Maximum temperature: " << temps[temps.size()-1] << '\n';
    cout << "Number of negative values is: " << y << '\n';
    cout << "Number of inputs: " << temps.size() << '\n';
    return 0;
}
