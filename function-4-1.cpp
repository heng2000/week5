#include<iostream>
using namespace std;

void printNumbers(int *numbers,int length) ;
int secondSmallestSum(int *numbers,int length) ;
int *readNumbers();

void printNumbers(int *numbers,int length) 
{
    for (int i =0;i<length;i++)
    {
        cout<<i<<" "<<numbers[i]<<endl;
    }
}
int secondSmallestSum(int *numbers,int length)
{
    int result [10][10] ={0};
    int return_arr[10] ={0};
    for (int i =0;i<length;i++)
    {
        for (int j =i;j<length;j++)
        {
            if (i==j)
            {
                result[i][j] =numbers[i];
            }
            
        }
    }
    for (int q =0;q<length;q++)
    {
        for(int w = q;w<length;w++)
        {
            result[q][w] =result[q][w-1]+numbers[w];
        }
    }
    return result[1][4];
}
int *readNumbers()
{
    int *number =new int ;
    cout<<"enter a unmber: ";
    cin>>*number;
    return number;
}