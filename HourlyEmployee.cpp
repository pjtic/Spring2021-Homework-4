#include <iostream>
#include <iomanip>
#include <string>
#include "HourlyEmployee.h"
using namespace std;

 HourlyEmployee::HourlyEmployee(long ID, const string &LST, const string &FST, const string &MID,int DCDE, int Thr,int wg)
 {
	 Dept_CDE = DCDE;
	 Name_FIRST = FST;
	 Dollar_Per_hour=wg;
	 Ovr_Tme=0;
	 Weeks_Payroll=0.0;
	 Name_MI = MID;
	 ID_NUM = ID;
	 Name_LAST = LST;
 	 Total_hrs=Thr;
 }


 void HourlyEmployee::Input_Hrly_Rate(int wg)
 {
	 Dollar_Per_hour=wg;
 }


 int HourlyEmployee::Fetch_Wkly_hrs()
 {
 	return Total_hrs;
 }

 void HourlyEmployee::Input_Hrs(int Thr)
 {
 	Total_hrs=Thr;

 }
 int HourlyEmployee::Fetch_Hrly_rate()
 {
 	return Dollar_Per_hour;
 }

 double HourlyEmployee::Calculate_Payroll()
 {
	 int work=40;
	 int Ovrtime_scalar=1.5;
	 if(Total_hrs>work)
	 {
	 
	 Ovr_Tme=Total_hrs-work; 
	
	 Weeks_Payroll=(Dollar_Per_hour*work)+(Ovrtime_scalar*Dollar_Per_hour*Ovr_Tme);
	
	 return Weeks_Payroll;
	
	 }
		 else
		 {
		 
			 Weeks_Payroll=(Total_hrs*Dollar_Per_hour);
		 
			 return Weeks_Payroll;
	 	 }
 }

void HourlyEmployee::Print_Emp_Hrly()
 {

 	 cout <<endl<< "Employee's Name: " << Fetch_LN() <<", " << Fetch_FN() << " " <<Fetch_MI() <<"." << endl;
	 cout << "Employee's Total Weekly Hours : " <<HourlyEmployee::Fetch_Wkly_hrs() <<endl;
	 cout << "Employee's Dept Code: " << Fetch_Dept_CDE () << endl;
	 cout << "Employee's Hourly Rate : " <<HourlyEmployee::Fetch_Hrly_rate() <<endl;
	 cout << "Employess's Check Amount : " <<HourlyEmployee::Calculate_Payroll() <<endl;
	 cout << "Employee's ID Number: " << Fetch_IDNUM() << endl;
 } 
