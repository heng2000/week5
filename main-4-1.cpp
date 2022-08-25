#include<iostream>
using namespace std;
extern int* matrix_min_max(int **vals,int num_rows, int num_cols);
int main ()
{
    int row1[] ={10,15,99};
    int row2[] ={100,5,73};
    int row3[] ={23,56,1};
    int *vals[] ={row1,row2,row3};
    int nrows =3;
    int ncols =3;
    int *mm = matrix_min_max(vals,nrows,ncols);
    cout<<mm[0]<<" "<<mm[1]<<endl;
    return 0;
}