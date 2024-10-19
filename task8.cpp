#include<iostream>
using namespace std;
int calculateVolleyBall(string year, int holidays, int homeTownWeekends);
int main()
{
    string year;
    int holidays,homeTownWeekends;
    float output;
    cout << "Enter the year's type (leap or normal): ";
    cin >> year;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the weekends spent at hometown:";
    cin >> homeTownWeekends;
    output= calculateVolleyBall(year, holidays, homeTownWeekends);
    cout << output;
}
int calculateVolleyBall(string year, int holidays, int homeTownWeekends)
{
    float  weekendsAtSofia,daysNotWorking,volleyBall,playingHolidays,sum=0;
    weekendsAtSofia=48-homeTownWeekends;
    daysNotWorking=weekendsAtSofia*3/4;
    playingHolidays=holidays*2/3;
    sum=weekendsAtSofia+daysNotWorking+playingHolidays;
    if(year=="noraml")
    {
        volleyBall=sum;
    }
    else
    {
        volleyBall=sum+(sum*0.15);
    }
    return volleyBall;
}
