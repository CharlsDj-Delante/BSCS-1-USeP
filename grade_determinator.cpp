#include <iostream>

using namespace std;


void determinator (int grade){
		if (grade == 1 )
		{
			cout<<" 1            98-100             excellent          passed"<<endl;
		}
		if (grade == 1.25 )
		{
			cout<<" 1.25         95-97             outstanding         passed"<<endl;
		}
		if (grade == 1.50 )
		{
			cout<<" 1.50         92-94              verygood           passed"<<endl;
		} 
		if (grade == 1.75 )
		{
			cout<<" 1.75         89-91              verysatisfaction   passed"<<endl;
		}
		if (grade == 2)
		{
			cout<<" 2            86-88              quite good         passed";<<endl;
		}
		if (grade == 2.25 )
		{
			cout<<" 2.25         83-85              good               passed"<<endl;
		}
		if (grade == 2.5 )
		{
			cout<<" 2.5          80-82             satisfactory        passed"<<endl;
		}
		if (grade == 2.75 )
		{
			cout<<" 2.75         77-79             moderatelysatisfa.. passed"<<endl;
		}
		if (grade == 3 )
		{
			cout<<" 3            75-76             passing             passed"<<endl;
		}
		if (grade == 5 )
		{
			cout<<" 5            below 75          failure             failed "<<endl;
		}
	}
	
main()
{
	int g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,grade;
	
	cout<<"GRADE 1-5"<<endl;
	cout<<"give me your grade: ";
	cin>>g1;
	cout<<"give me another grade: ";
	cin>>g2;
	cout<<"give me another grade: ";
	cin>>g3;
	cout<<"give me another grade: ";
	cin>>g4;
	cout<<"give me another grade: ";
	cin>>g5;
	cout<<"give me another grade: ";
	cin>>g6;
	cout<<"give me another grade: ";
	cin>>g7;
	cout<<"give me another grade: ";
	cin>>g8;
	cout<<"give me another grade: ";
	cin>>g9;
	cout<<"give me another grade: ";
	cin>>g10;
	cout<<"=================================================================="<<endl;
	cout<<"GRADE        EQUIVALENCE        DESCRIPTRION        REMARK"<<endl;
	
	
	grade = g1;
	determinator(grade);
	grade = g2;
	determinator(grade);
	grade = g3;
	determinator(grade);
	grade = g4;
	determinator(grade);
	grade = g5;
	determinator(grade);
	grade = g6;
	determinator(grade);
	grade = g7;
	determinator(grade);
	grade = g8;
	determinator(grade);
	grade = g9;
	determinator(grade);
	grade = g10;
	determinator(grade);
	
	
	
}
