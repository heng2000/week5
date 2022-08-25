#include<iostream>
using namespace std;
extern int* create_integers(int num_vals);
extern void display_int_array(int *vals, int num_vals);
int main ()
{
    int *result = create_integers(5);
    display_int_array(result,5);
    return 0;
}