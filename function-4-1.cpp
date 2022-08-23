#include<iostream>
using namespace std;

int secondSmallestSum(int *numbers,int length) ;
int *readNumbers();
int secondSmallestSum(int *numbers,int length)
{
    int result [10][10] ={0};
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

    int sort_array[20] ={0};
    int sort_array_index =0;
    for (int e =0;e<length;e++)
    {
        for (int r =0;r<length;r++)
        {
            sort_array[sort_array_index]=result[e][r];
            sort_array_index++;
        }
    }

    for (int t =0;t<sort_array_index;t++)
    {
        for (int y =0;y<sort_array_index;y++)
        {
            if (sort_array[t]<sort_array[y])
            {
                int temp =0;
                temp =sort_array[y];
                sort_array[y] =sort_array[t];
                sort_array[t] =temp;
            }
        }
    }

    for (int a =0;a<sort_array_index;a++)
    {
        cout<<sort_array[a]<<" ";
    }

    cout<<endl;

    return sort_array[19];
}
int *readNumbers()
{
    int *number =new int ;
    cin>>*number;
    return number;
}