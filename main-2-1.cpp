#include<iostream>
using namespace std;
extern void hexDigits(int *numbers,int length);
extern int *readNumbers();

int main ()
{
    int* array =readNumbers();
    hexDigits(array,5);
    delete [] array;
    return 0;
}