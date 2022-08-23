#include<iostream>
using namespace std;

extern void printNumbers(int *numbers,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int *readNumbers();
int main ()
{
    int* arr1 =readNumbers(); 
    int* arr2 =readNumbers();

    bool result;
    result =equalsArray(arr1,arr2,5);
    cout<<result<<endl;
    printNumbers(arr1,5);
    printNumbers(arr2,5);
    delete [] arr1;
    delete [] arr2;
    delete number;
    return 0;
}