#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

//Practice with some functions.

int area(int length, int width) //Return -1 to indicate bad argument.
{
    if (length<=0 || width<=0) return -1;
    return length * width;
}

int framed_area(int length, int width)
{
    const int frame_width = 2;
    if(length-frame_width<=0 || width-frame_width<=0)
        error("non-positive area() argument called by framed_area()");
        return area(length-frame_width, width-frame_width);
}

int main()
{
int x;
int y;
int z;
while(cin >> x && cin >> y && cin >> z){
    int area1 = area(x,y);
    if (area1 <=0) error("non-positive area");
    int area2 = framed_area(x,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;
    cout << area1 << '\n' << area2 << '\n' << area3 << '\n' << ratio << '\n';   //Checking for errors.
    }
}
