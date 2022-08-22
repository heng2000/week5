#include<iostream>
using namespace std;
extern int secondSmallestSum(int *numbers,int length) ;
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
    int result =secondSmallestSum(array,5);
    cout<<result<<endl;
    delete [] array;
    delete number;
    delete [] result;
    return 0;

}