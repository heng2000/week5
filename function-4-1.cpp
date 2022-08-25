#include<iostream>
using namespace std;

int* matrix_min_max(int **vals,int num_rows, int num_cols);
int* matrix_min_max(int **vals,int num_rows, int num_cols)
{
    int *returned_array =new int [2];
    int *(*p) =vals;
    int min =101;
    int max =0;
    for(p =vals;p!=vals+num_rows;p++)
    {
        for (int*q =*p;q!=*p+num_cols;q++)
        {
            if (*q>max)
            {
                max =*q;
            }
            if(*q<min)
            {
                min =*q;
            }
        }
    }

    returned_array[0] =min;
    returned_array[1] =max;
    return returned_array;
}