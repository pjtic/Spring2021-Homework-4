#include <iostream>
#include <iomanip>
#include <string>
#include "SalariedEmployee.h"

using namespace std;

 SalariedEmployee::SalariedEmployee(long ID, const string &LST, const string &FST, const string &MID,int DCDE, int SWG,float workFrac )
 {
	 
 	Dept_CDE = DCDE;
 	Name_LAST= LST;
 	Name_FIRST = FST;
 	ID_NUM = ID;
 	Name_MI = MID;
	Percent_Worked=workFrac;
 	month_Sal = SWG;


 }

int SalariedEmployee::Sal_fetch()
 {
 	return month_Sal;
 }
double SalariedEmployee::sal_Calculate()
 {
 
	month_Sal=month_Sal*Percent_Worked;

	return month_Sal;
 }

void SalariedEmployee::Salary_Bracket(int SWG)
 {
 	month_Sal=SWG;
 }
void SalariedEmployee::SalariedPrint ()
{
	  
	  cout <<endl<< "Name of Employee: " << Fetch_LN() <<", " << Fetch_FN() << " " <<Fetch_MI() <<"." << endl;
	  cout << "Employee's ID Number: " << Fetch_IDNUM() << endl;
	  cout << "Dept Code: " << Fetch_Dept_CDE () << endl; 
	  cout << "Base Salary , Percentage Worked: " <<month_Sal<<","<< 100*Percent_Worked << "%"<<endl;
	  cout << "Employee's Pay: "<< SalariedEmployee::sal_Calculate()<<endl;  
}
