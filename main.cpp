#include <iostream>
#include <string>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "employee.h"

using namespace std;

int main()
{
//	Employee Se1, Se2;
	SalariedEmployee  Salary_1(001,"Jones", "Marvin", "D", 22,500000,1);
	SalariedEmployee  Salary_2(002, "Mahomes", "Patrick", "B", 22,1250000,0.50);
	HourlyEmployee Hourly_1(003, "Rothfuss", "Patrick", "NMI", 14,33,11);
	HourlyEmployee Hourly_2(004,"Sanderson","Brandon", "M", 04,52,9);

	Salary_1.SalariedPrint();
	Salary_2.SalariedPrint();
	Hourly_1.Print_Emp_Hrly();
	Hourly_2.Print_Emp_Hrly();

	return 0;



}	
