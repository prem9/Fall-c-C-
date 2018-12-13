//DateClass2.cpp
//Prem Agarwal 12/11/2018
// This program shows use of constructor for initializing class variables
//data members of this class int month, int day and int year
//assume that day and year are correctly entered, but if month is not in range of 1-12, set it to 1
//Provide get and set function of each data member. provide displayDate function mm/dd/yyyy
#include <iostream>
#include <string>
using namespace std;

class DateClass   {
    public:
        int month;
        int day;
        int year;
    DateClass (int aMonth, int aDay, int aYear){
    if (aMonth >= 1 && aMonth <= 12)
        month = aMonth;
    else
        month = 1; // set month = 1, if month is not between 1 and 12
    day = aDay;
    year = aYear;
    }
    void setMonth(int aMonth){
    if (aMonth >= 1 && aMonth <= 12)
        month = aMonth;
    else
        month = 1; // set month = 1, if month is not between 1 and 12
    }
    int getMonth() const {
    return month;
    }
    void setDay(int aDay){
        day = aDay;
    }
    int getDay() const {
    return day;
    }
    void setYear(int aYear){
        year = aYear;
    }
    int getYear() const {
    return year;
    }

    void displayDate() const
    {
        cout << getMonth()<<"/"<<getDay()<<"/"<<getYear();
        cout << "\nEnd of call to displayDate\n" ;
    }
};

int main()
{
     DateClass DC1(8,8,1988);
     //cout << DC1.month<<"/"<<DC1.day<<"/"<<DC1.year;
     DC1.displayDate();

     cout << "\n--------------------------------------\n";
     DateClass DC2(13,12,1988);
     DC2.displayDate();
     //cout << DC2.month<<"/"<<DC2.day<<"/"<<DC2.year;
     DC1.setMonth(14);
     DC1.displayDate();
     return 0;


}

