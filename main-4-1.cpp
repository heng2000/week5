#include<iostream>
using namespace std;
extern int secondSmallestSum(int *numbers,int length) ;
extern int *readNumbers();
int main ()
{
    int* array =readNumbers();
    int result =secondSmallestSum(array,5);
    cout<<result<<endl;
    delete [] array;
    return 0;

}