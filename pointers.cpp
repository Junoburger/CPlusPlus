#include <iostream> 

using namespace std; 

int main()
{
	int v1= 0;
	int *p1;
	p1 = &v1;
	cout << v1 << " and pointer is " << *p1 << endl;
	*p1 = 42;
	cout << v1 << " and pointer is " << *p1 << endl;

	string ref1 = "Word";
	string *pointer1;
	pointer1 = &ref1;
	cout << ref1 << " ref and pointer " << *pointer1 << endl;
	*pointer1 = "New Word";
	cout << ref1 << " ref and pointer " << *pointer1 << endl;

}
