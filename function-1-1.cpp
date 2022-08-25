#include<iostream>
using namespace std;
int* create_integers(int num_vals);
void display_int_array(int *vals, int num_vals);
int* create_integers(int num_vals)
{
    int *array=new int [num_vals];
    for (int i =0;i<num_vals;i++)
    {
        array[i] =i;
    }
    return array;
}

void display_int_array(int *vals, int num_vals)
{
    for (int i =0;i<num_vals;i++)
    {
        cout<<vals[i]<<" ";
    }
    cout<<endl;
}