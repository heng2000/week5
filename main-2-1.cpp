#include<iostream>
using namespace std;
extern string weekday_lookup(int day);
int main ()
{
    cout<<weekday_lookup(3)<<endl;
    return 0;
}