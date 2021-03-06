/* employee.cpp*/


#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;



Employee::Employee(long ID, const string &LST, const string &FST, const string &MID, int DCDE)
{

  	ID_NUM = ID;
  	Name_LAST = LST;
  	Name_FIRST = FST;
  	Name_MI = MID;
  	Dept_CDE = DCDE;
}



	void Employee:: Insert_IDNUM (const long  ID)
	{
	 	 ID_NUM = ID;
	}

	long Employee:: Fetch_IDNUM () const			
	{
		  return ID_NUM;
	}


	void Employee:: Last_NAME_ENC (const string &LST)	
	{
		  Name_LAST = LST;
	}


	string Employee:: Fetch_LN () const	
	{
		  return Name_LAST;
	}
 
 
	void Employee:: First_NAME_ENC (const string &FST)	
	{
		  Name_FIRST = FST;
	}


	string Employee:: Fetch_FN () const			
	{
		  return Name_FIRST;
	}


	void Employee:: Mid_INTL_ENC (const string &MID)	
	{
		  Name_MI = MID;
	}


	string Employee:: Fetch_MI () const	
	{
		  return Name_MI;
	}


	void Employee::DPT_CODE_ENC (const int DCDE)		
	{
		  Dept_CDE = DCDE;
	}


	int Employee:: Fetch_Dept_CDE () const				
	{
		  return Dept_CDE;
	}


	void Employee:: printEmployee ()			
	{
		  cout << endl;
		  cout << "Employee ID Number: " << Fetch_IDNUM() << endl;
		  cout << "Name: " << Fetch_LN() <<", " << Fetch_FN() << " " <<Fetch_MI() <<"." << endl;
		  cout << "Dept Code: " << Fetch_Dept_CDE() << endl;  
	}

