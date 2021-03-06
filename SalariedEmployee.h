#include <string>
#include "employee.h"

using namespace std;

class SalariedEmployee:public Employee
{
	public:
		SalariedEmployee(long =0, const string & ="", const string & = "", const string & = "", int =0, int = 0,float=0);

		int Sal_fetch();
		int month_Sal;
		void SalariedPrint();
		float Percent_Worked;
		void Salary_Bracket(int);
		double sal_Calculate();
	


};
