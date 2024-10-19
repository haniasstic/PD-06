#include<iostream>
using namespace  std;
float cellularCompany(char service, string time, int minutes);
int main()
{
	char service;
	string time;
	int minutes;
	float output;
	cout << "Enter the service code (R/r for regular, P/p for premium): ";
	cin >> service;
	if(service=='r'|| service=='R'|| service=='P'|| service=='p'){
	    if(service=='p'|| service=='P')
	    {
	cout << "Enter time of the call (D/d for day, N/n for night): ";
	cin >> time;
	cout << "Enter the numbers of minutes: ";
	cin >> minutes;
	    }
	    else{
	cout << "Enter the number of minutes used: ";
	cin >> minutes;
	    }
	output= cellularCompany(service, time, minutes);
	cout << "Service type: "<< service <<endl;
	cout << "Total minutes Used: " <<minutes<< " minutes"<<endl;
	cout << "Amount due: $"<< output;
	}
	else
	cout << "error";
}
float cellularCompany(char service, string time, int minutes)
{
	float amount=0;
	float total;
	
	if(service=='R'||service=='r')
	{
		if(minutes>50)
		{
			minutes=minutes-50;
			total=0.20*minutes;
			amount=total+10.00;
		}
		else
		{
			amount=total+10.00;
		}
		

	}
	if(service=='P'||service=='p')
	{
		if(time=="day"|| time=="D")
		{
			minutes=minutes=75;
			total=0.10*minutes;
			amount=total+25.00;
		}
		else
		{
			amount=total+25.00;
		}
	}
	else if(time=="night"|| time=="N")
		{ 
		 if(minutes>100)
            {
                minutes=minutes-100;
                total=0.05*minutes;
                amount=total+25.00; 
            }
            else
            {
                amount=total+25.00; 
            }
            return amount;
}
}
