#include<iostream>

using namespace std;

main()
{
	float machine,written,laboratory,quiz,participation,grade,participationgrade,quizgrade,laboratorygrade,writtengrade,machinegrade;
	string fname,lname,code;
	
	
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"STUDENT GRADE CALCULATOR"<<endl;
	cout<<"enter your studet code: ";
	cin>> code;
	cout<<"enter your first name: ";
	cin>> fname;
	cout<<"enter your last name: ";
	cin>> lname;
	cout<<"enter your machine problem exam score: ";
	cin>> machine;
	cout<<"enter your written exam score: ";
	cin>> written;
	cout<<"enter your laboratory score: ";
	cin>> laboratory;
	cout<<"enter your quiz score: ";
	cin>> quiz;
	cout<<"enter you class participation score: ";
	cin>> participation;
	
	machinegrade = machine*.25;
	writtengrade = written*.20;
	laboratorygrade = laboratory*.25;
	quizgrade = quiz*.15;
	participationgrade = participation*.15;
	grade = participationgrade + quizgrade + laboratorygrade + writtengrade + machinegrade;
	
	
	cout<<"your grade: "<<grade<<endl;
	
	if (grade >= 75)
	{
		cout<<"the grade: "<< grade <<" is passed"<<endl;	
	}
	else
	{
		
		cout<<"the grade: "<< grade<<" is failed"<<endl;
	}
	
	
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"STUDENT GRADE CALCULATOR"<<endl;
	cout<<"enter your studet code: ";
	cin>> code;
	cout<<"enter your first name: ";
	cin>> fname;
	cout<<"enter your last name: ";
	cin>> lname;
	cout<<"enter your machine problem exam score: ";
	cin>> machine;
	cout<<"enter your written exam score: ";
	cin>> written;
	cout<<"enter your laboratory score: ";
	cin>> laboratory;
	cout<<"enter your quiz score: ";
	cin>> quiz;
	cout<<"enter you class participation score: ";
	cin>> participation;
	
	machinegrade = machine*.25;
	writtengrade = written*.20;
	laboratorygrade = laboratory*.25;
	quizgrade = quiz*.15;
	participationgrade = participation*.15;
	grade = participationgrade + quizgrade + laboratorygrade + writtengrade + machinegrade;
	
	
	cout<<"your grade: "<<grade<<endl;
	
	if (grade >= 75)
	{
		cout<<"the grade: "<< grade <<" is passed"<<endl;	
	}
	else
	{
		
		cout<<"the grade: "<< grade<<" is failed"<<endl;
	}
	
	
	cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
	cout<<"STUDENT GRADE CALCULATOR"<<endl;
	cout<<"enter your studet code: ";
	cin>> code;
	cout<<"enter your first name: ";
	cin>> fname;
	cout<<"enter your last name: ";
	cin>> lname;
	cout<<"enter your machine problem exam score: ";
	cin>> machine;
	cout<<"enter your written exam score: ";
	cin>> written;
	cout<<"enter your laboratory score: ";
	cin>> laboratory;
	cout<<"enter your quiz score: ";
	cin>> quiz;
	cout<<"enter you class participation score: ";
	cin>> participation;
	
	machinegrade = machine*.25;
	writtengrade = written*.20;
	laboratorygrade = laboratory*.25;
	quizgrade = quiz*.15;
	participationgrade = participation*.15;
	grade = participationgrade + quizgrade + laboratorygrade + writtengrade + machinegrade;
	
	
	cout<<"your grade: "<<grade<<endl;
	
	if (grade >= 75)
	{
		cout<<"the grade: "<< grade <<" is passed"<<endl;	
	}
	else
	{
		
		cout<<"the grade: "<< grade<<" is failed"<<endl;
	}
	
	
	
		
}
