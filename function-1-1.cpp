#include<iostream>
using namespace std;

void printNumbers(int *numbers,int length) ;
int *readNumbers();
void printNumbers(int *numbers,int length) 
{
    for (int i =0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<endl;
    }
}
int *readNumbers()
{
    int *number =new int[10] ;
    for(int i =0;i<10;i++)
    {
        cin>>number[i];
    }
    return number;
}