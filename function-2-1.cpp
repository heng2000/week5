#include<iostream>
#include<string>
using namespace std;
string weekday_lookup(int day);
string weekday_lookup(int day)
{
    switch (day)
    {
    case 1:
        return "monday";
        break;
    case 2:
        return "Tuesday";
    case 3:
        return "Wednesday";
    case 4:
        return "Thursday";
    case 5:
        return "Friday";
    case 6:
        return "Saturday";
    case 7:
        return "Sunday";
    default:
        return "invalid day";
        break;
    }
}
