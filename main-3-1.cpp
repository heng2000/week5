#include<iostream>
using namespace std;

extern void printNumbers(int *numbers,int length) ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int *readNumbers()
{
    int *number =new int ;
    cout<<"enter a unmber: ";
    cin>>*number;
    return number;
}

int main ()
{
    int *arr1 =new int [5];
    int *arr2 =new int [5];
    int *number =new int ;
    for (int i =0;i<5;i++)
    {
        number =readNumbers();
        arr1[i] =*number;
    }
        
    for (int j =0;j<5;j++)
    {
        number =readNumbers();
        arr2[j] =*number;
    }

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