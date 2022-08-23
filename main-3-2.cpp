#include<iostream>
using namespace std;
extern int *reverseArray(int *numbers1,int length);
extern void printNumbers(int *numbers,int length) ;
extern int *readNumbers();



int main ()
{
    int* array =readNumbers();
    int *result =reverseArray(array,5);
    printNumbers(result,5);
    delete [] array;
    delete number;
    delete [] result;
    return 0;
}