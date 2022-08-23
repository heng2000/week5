#include<iostream>
using namespace std;

void printNumbers(int *numbers,int length) ;
bool equalsArray(int *numbers1,int *numbers2,int length) ;


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

int *readNumbers()
{
    int *number =new int ;
    cin>>*number;
    return number;
}