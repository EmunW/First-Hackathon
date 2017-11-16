#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Take in a bunch of distances and adds them all together before converting them to meters at the end.
//The code also records the smallest and largest individual number and measurements.
//At the end it lists out all of the measurements from least to greatest in meters.

int main()
{
    const double cm_per_inch = 2.54;
    const double cm_per_meter = 100;
    const double inch_per_feet = 12;
    double value;
    double smallest = 0;
    double largest = 0;
    double converted_value;
    double converted_smallest = 0;
    double converted_largest = 0;
    double smallest_value;
    double largest_value;
    double converted_sum = 0;
    string unit = "";
    string smallest_unit = "";
    string largest_unit = "";
    vector<double> list;

    cout << "Enter a measurement and a unit(cm, in, m, ft) or type \"Exit\" to stop. \n";

    while (cin >> value >> unit){
        if (unit != "cm" && unit != "in" && unit != "m" && unit != "ft"){
            cout << "We don't convert " << unit << '\n' << '\n';
        }
        else {if (unit == "cm"){
            converted_value = value;
        }
        else if (unit == "in"){
            converted_value = value * cm_per_inch;
        }
        else if (unit == "m"){
            converted_value = value * cm_per_meter;
        }
        else if (unit == "ft"){
            converted_value = value * inch_per_feet * cm_per_inch;
        }
        if (smallest == 0 && largest == 0){
            smallest = value;
            largest = value;
            cout << smallest << " is the smallest value so far. \n"
            << largest << " is the largest value so far. \n";
        }
        else if (value < smallest){
            smallest = value;
            cout << smallest << " is the smallest value so far. \n"
            << largest << " is still the largest value. \n";
        }
        else if (value > largest){
            largest = value;
            cout << smallest << " is still the smallest value. \n"
            << largest << " is the largest value so far. \n";
        }
        else if (value >= smallest && value <= largest){
            cout << smallest << " is still the smallest value. \n"
            << largest << " is still the largest value. \n";
        }
        if (converted_smallest == 0 && converted_largest == 0){
            converted_smallest = converted_value;
            converted_largest = converted_value;
            smallest_unit = unit;
            largest_unit = unit;
            smallest_value = value;
            largest_value = value;
            cout << smallest_value << smallest_unit << " is the smallest measurement so far. \n"
            << largest_value << largest_unit << " is the largest measurement so far. \n" << '\n';
        }
        else if(converted_value < converted_smallest){
            converted_smallest = converted_value;
            smallest_value = value;
            smallest_unit = unit;
            cout << smallest_value << smallest_unit << " is the smallest measurement so far. \n"
            << largest_value << largest_unit << " is still the largest measurement. \n" << '\n' ;
        }
        else if(converted_value > converted_largest){
            converted_largest = converted_value;
            largest_value = value;
            largest_unit = unit;
            cout << smallest_value << smallest_unit << " is still the smallest measurement. \n"
            << largest_value << largest_unit << " is the largest measurement so far. \n" << '\n';
        }
        else if(converted_value >= converted_smallest && converted_value <= converted_largest){
            cout << smallest_value << smallest_unit << " is still the smallest measurement. \n"
            << largest_value << largest_unit << " is still the largest measurement. \n" << '\n';
        if(unit == "Exit"){
            break;
        }
        }}
        converted_sum += converted_value/100;
        list.push_back(converted_value/100);
    }
        cout << "The sum of all previous measurements is " << converted_sum << "m \n";
        sort(list.begin(), list.end());
        for (int i=0; i < list.size(); i++){
            cout << list[i] << "m ";
        }
    return 0;
}
