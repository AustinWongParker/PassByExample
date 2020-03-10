#include <iostream>

using namespace std;

void funct1(int a){ //pass-by-value
	a = 6; //now "a" is 6 only in funct1, but not in main or anywhere else
}
void funct2(int &a){ //pass-by-reference
	a = 7; //now "a" is 7 both in funct2, main and everywhere else it'll be used
}

int main()
{
	int a = 5;

	funct1(a);
	cout << endl << "A is currently " << a << endl << endl; //will output 5
	funct2(a);
	cout << endl << "A is currently " << a << endl << endl; //will output 7

	return 0;
}