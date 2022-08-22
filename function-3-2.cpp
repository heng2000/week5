#include<iostream>
using namespace std;

void printNumbers(int *numbers,int length) ;
bool equalsArray(int *numbers1,int *numbers2,int length) ;
int *reverseArray(int *numbers1,int length) ;


void printNumbers(int *numbers,int length) 
{
    for (int i =0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<endl;
    }
}


bool equalsArray(int *numbers1,int *numbers2,int length)
{
    if (length<1)
    {
        return 0;
    }
    bool result  =1;
    for (int i =0;i<length;i++)
    {
        if (result)
        {
            if (numbers1[i]==numbers2[i])
            {
                continue;
            }else{
                result =0;
            }
        }
    }
    return result;
}

int *reverseArray(int *numbers1,int length) 
{
    if (length<0)
    {
        return 0;
    }
    int *reversed_arr =new int [length];
    for (int i =0;i<length;i++)
    {
        reversed_arr[i] =numbers1[length-i];
    }
    return reversed_arr;

}