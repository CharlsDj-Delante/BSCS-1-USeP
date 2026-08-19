#include <iostream>

using namespace std;

main () 
{
	
	float wind;
	
	cout<<"THE BREEZE CLASSIFICATOR"<<endl;
	cout<<"ENTER THE WINDSPEED: ";
	cin>> wind;
	
	if (wind<6)
	{
		cout<<"WIND DESCRIPTION: CALM";
	}
	else if (wind >= 6 and wind <= 11 )
	{
		cout<<"WIND DESCRIPTION: LIGHT BREEZE";
	}
	else if (wind >= 12 and wind <= 19 )
	{
		cout<<"WIND DESCRIPTION: GENTLE BREEZE";
	}
	else if (wind >= 20 and wind <= 29 )
	{
		cout<<"WIND DESCRIPTION: MODERATE BREEZE";
	}
	else if (wind >= 30 and wind <= 38 )
	{
		cout<<"WIND DESCRIPTION: FRESH BREEZE";
	}
	else if (wind > 39 )
	{
		cout<<"WIND DESCRIPTION: STRONG BREEZE";
	}
	
}
