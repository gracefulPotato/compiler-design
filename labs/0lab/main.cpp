#include <iostream>
#include <cstring>
#include <cstdlib>
#include "month.hpp"
#include "year.hpp"
using namespace std;
int main()
{
    cout<<"\nWelcome to horoscope calculator!\n";
    cout<<"Enter your birthday (MM/DD/YYYY): ";
    string bday;
    cin >> bday;

    int day = atoi(bday.substr(3,2).c_str());
    int month = atoi(bday.substr(0,2).c_str());
    int year = atoi(bday.substr(6,4).c_str());

    star_zodiac(day, month);
    animal_zodiac(year);
    cout<<"Exiting.\n\n";
    return(0);
}
