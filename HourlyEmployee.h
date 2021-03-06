#include <string>
#include "employee.h"

using namespace std;

class HourlyEmployee : public Employee
{
	public:
		HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, int=0,int=0);
	       
	
		double Weeks_Payroll;
		int Fetch_Wkly_hrs();
		int Fetch_Hrly_rate();
		double Calculate_Payroll();
		int Dollar_Per_hour;
		int Ovr_Tme;
		int Total_hrs;
		
		void Print_Emp_Hrly();
		void Input_Hrs(int);
		void Input_Hrly_Rate(int);
		
		
		
		

}; 
