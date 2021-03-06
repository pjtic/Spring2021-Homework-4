/* employee.h	*/

#ifndef EMPLOYEE
#define EMPLOYEE
#include <string>

using namespace std;


class Employee
{
	public:
	  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  
		  void Insert_IDNUM (const long );	
		  long Fetch_IDNUM () const;	

		  void Last_NAME_ENC (const string &);	
		  string Fetch_LN () const;	

		  void First_NAME_ENC (const string &);	
		  string Fetch_FN () const;

		  void Mid_INTL_ENC (const string &);
		  string Fetch_MI () const;

		  void DPT_CODE_ENC (const int);		
		  int Fetch_Dept_CDE() const;

		  void printEmployee ();			
 
  
  
	public:
		  long  ID_NUM;		
		  string Name_LAST;		
		  string Name_FIRST;		
		  string Name_MI;	
		  int Dept_CDE;		
};

#endif
