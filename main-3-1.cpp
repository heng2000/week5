#include<iostream>
using namespace std;
extern void dangerous_temps(double vals[],double threshold, int length);

int main ()
{
    double array[] ={10,70.5,75.5,20.0,91.8};
    dangerous_temps(array,60,5);
    return 0;
}
