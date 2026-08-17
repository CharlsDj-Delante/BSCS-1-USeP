#include<iostream>

using namespace std;

main()
{
	float machine,written,laboratory,quiz,participation,grade,participationgrade,quizgrade,laboratorygrade,writtengrade,machinegrade;
	string fname,lname,code;
	
	cout<<"STUDENT GRADE CALCULATOR"<<endl;
	cout<<"   "<<"/n enter your studet code"<<endl;
	cin>> code;
	cout<<"enter your first name: "<<endl;
	cin>> fname;
	cout<<"enter your last name: "<<endl;
	cin>> lname;
	cout<<"enter your machine problem exam score: "<<endl;
	cin>> machine;
	cout<<"enter your written exam score: "<<endl;
	cin>> written;
	cout<<"enter your laboratory score: "<<endl;
	cin>> laboratory;
	cout<<"enter your quiz score: "<<endl;
	cin>> quiz;
	cout<<"enter you class participation score: "<<endl;
	cin>> participation;
	
	machinegrade = machine*.25;
	writtengrade = written*.20;
	laboratorygrade = laboratory*.25;
	quizgrade = quiz*.15;
	participationgrade = participation*.15;
	grade = participationgrade + quizgrade + laboratorygrade + writtengrade + machinegrade;
	
	cout<<"YOUR GRADE IS: "<<grade<<endl;
	
	
	
	
	
	
	
	
}
