#include<iostream>

using namespace std;

main()
{
	float hours;
	
	cout<<"how many hours of shade: ";
	cin>> hours;
	
	if (hours > 11 )
	{
		cout<<"shade graden";
		
	}
	else if (hours >= 1 and hours <= 11)
	{
		cout<<"in between graden";
	}
	else
	{
		cout<<"sunny garden";
	}
	
	
}
