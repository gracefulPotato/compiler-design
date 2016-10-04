#include <iostream>
#include <cstdlib>
#include <cstring>
#include "month.hpp"
using namespace std;
void animal_zodiac(int year)
{ 
    string animal;
    int proc_year = year % 12;
    switch(proc_year)
    {
        case 0: animal="Monkey";
                break;
        case 1: animal="Rooster";
                break;
        case 2: animal="Dog";
                break;
        case 3: animal="Pig";
                break;
        case 4: animal="Rat";
                break;
        case 6: animal="Tiger";
                break;
        case 5: animal="Ox";
                break;
        case 7: animal="Rabbit";
                break;
        case 8: animal="Dragon";
                break;
        case 9: animal="Snake";
                break;
        case 10: animal="Horse";
                break;
        case 11: animal="Sheep";
                break;
    }
    cout<<" and a "<<animal<<"!\n";
}
