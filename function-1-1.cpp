#include<iostream>
using namespace std;

void printNumbers(int *numbers,int length) ;
void printNumbers(int *numbers,int length) 
{
    for (int i =0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<endl;
    }
}