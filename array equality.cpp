#include <iostream>
using namespace std;
int main()
{
	int  array_one[5], array_two[5], no_match = 0, match = 0;
	char con = 'Y';
	do {
		cout << "Enter number for array 1: ";
		for (int i = 0; i < 5; i++)
		{
			cin >> array_one[i];
		}
		cout << "Enter number for array 2: ";
		for (int i = 0; i < 5; i++)
		{
			cin >> array_two[i];
		}
		for (int i = 0; i < 5; i++) {
			if (array_one[i] == array_two[i]) {
				match++;
			}
			else {
				no_match++;
			}
		}
		if (match == 5) {
			cout << "equal";
			con='N';
		}
		else {
			cout << "no match";
			cout << "\ndo you want to continue : ";
			cin >> con;
		}
	}while (con !='N' && con != 'n');
}