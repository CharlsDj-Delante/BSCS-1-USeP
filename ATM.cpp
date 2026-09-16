#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int money,option,outside_money;
	
	money = 1000;
	option = 0;
	while ( option != 4)
	{
		system("cls"); 
		cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
		cout<<"balance: "<<money<<endl;
		cout<<"options 1 : check balance"<<endl;
		cout<<"options 2 : deposit money"<<endl;
		cout<<"options 3 : withdraw money"<<endl;
		cout<<"options 4 : exit"<<endl;
		cout<<"what to do 1 to 4: ";
		cin>>option;

		switch(cin>>option)
			{
				case 1: 
					system("cls"); 
					cout<<"YOUR BALANCE IS: "<<money<<endl;
					cout<<"1 to continue: ";
					cin>>option;
					break;
				case 2:
					system("cls"); 
					cout<<"how much money you gonna deposit: ";
					cin>>outside_money;
					money = money += outside_money;
					outside_money = 0;
					break; 
							
				case 3:
					system("cls"); 
					cout<<"how much money you gonna withdraw: ";
					cin>>outside_money;
					money = money -= outside_money;
					outside_money = 0;
					break;
							
		
					
			}
				
		
				
		
	}
	
			
	
}
