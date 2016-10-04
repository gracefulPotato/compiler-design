#include <iostream>
#include <cstring>
#include <cstdlib>
#include "month.hpp"
using namespace std;
void star_zodiac(int day, int month)
{
    string constellation;
    int shifted_month = month-4;
    if(day>15)
    {
        shifted_month = shifted_month - 1;
    }
    switch(shifted_month)
    {
     	case 0: constellation="Aries";
                break;
        case 1: constellation="Taurus";
                break;
        case 2: constellation="Gemini";
                break;
        case 3: constellation="Cancer";
                break;
        case 4: constellation="Leo";
                break;
        case 6: constellation="Virgo";
                break;
        case 5: constellation="Libra";
                break;
        case 7: constellation="Scorpio";
                break;
        case 8: constellation="Sagitarius";
                break;
        case 9: constellation="Aquarius";
                break;
        case 10: constellation="Capricorn";
                break;
        case 11: constellation="Pisces";
                break;
    }
    cout<<"You are a "<<constellation;
}
