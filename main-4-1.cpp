#include<iostream>
using namespace std;
extern int secondSmallestSum(int *numbers,int length) ;
int main ()
{
    int *array=new int [5];
    for (int i =0;i<5;i++)
    {
        array[i] =i+1;
    }
    int result =secondSmallestSum(array,5);
    cout<<result<<endl;
    return 0;

}