#include "polindromh.hpp"
int main()
{
	string bar;
	cout << "Enter the word or number ";
	cin >> bar;
	if(check_polindrom(bar)) {
	
		cout << "Word or number  is polindrom.";
	} 	else {
	
			cout << "Word or number is not polindrom";
		}
	return 0;
}
