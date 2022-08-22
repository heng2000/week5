#include<iostream>
using namespace std;
extern void hexDigits(int *numbers,int length);
int main ()
{
    int *array =new int [5];
    for (int i =0;i<5;i++)
    {
        cout<<"enter a number; ";
        cin>>array[i];
    }
    hexDigits(array,5);
    delete [] array;
    return 0;
}