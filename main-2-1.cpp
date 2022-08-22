#include<iostream>
using namespace std;
extern void hexDigits(int *numbers,int length);
extern int *readNumbers();

int main ()
{
    int* array =new int [5];
    int *number =new int ;
    for (int i =0;i<5;i++)
    {
        number =readNumbers();
        array[i] =*number;
    }
    hexDigits(array,5);
    delete [] array;
    return 0;
}