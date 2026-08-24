#include <iostream>

using namespace std;

main()
{
	float msales, mincome, percent;
	
	cout<<"what is your monthly sales: ";
	cin>>msales;
	
	if (msales >= 50000)
	{
		percent = msales * 0.16;	
		mincome = 375 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	else if (msales < 50000 and msales >= 40000)
	{
		percent = msales * 0.14;	
		mincome = 350 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	else if (msales < 40000 and msales >= 30000)
	{
		percent = msales * 0.12;	
		mincome = 325 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	else if (msales < 30000 and msales >= 20000)
	{
		percent = msales * 0.09;	
		mincome = 300 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	else if (msales < 20000 and msales>= 10000)
	{
		percent = msales * 0.05;	
		mincome = 250 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	if (msales < 10000)
	{
		percent = msales * 0.03;	
		mincome = 200 + percent;
		cout<<"your monthly income is "<<mincome;
	}
	
	
}
