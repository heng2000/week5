#include<iostream>
using namespace std;

extern void printNumbers(int *numbers,int length) ;
extern int *readNumbers();


int main ()
{
    int* array =readNumbers();

    printNumbers(array,10);
    delete [] array;
    return 0;
}