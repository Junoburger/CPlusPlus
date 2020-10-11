#include <iostream> 

using namespace std; 
 

struct students
{
	string name;
	float GPA;
};

int main() 
{

	students Teacher;
	Teacher.name = "Dr. Dre";
	students firstPeriod[10];
	firstPeriod[0].name = "Yoda";
	firstPeriod[0].GPA = 4.0;

	cout << firstPeriod[0].name << endl;
    
}



