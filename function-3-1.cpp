#include<iostream>
using namespace std;
void dangerous_temps(double vals[],double threshold, int length);
void dangerous_temps(double vals[],double threshold, int length)
{
    for (int i =0;i<length;i++)
    {
        if (vals[i]>threshold)
        {
            cout<<i<<":"<<vals[i]<<" ";
        }
        /*if (i!=length||i!=0)
        {
            cout<<" ";
        }
        */
    }
    cout<<endl;
}