/*File name: Chap4EX10.cpp
* Programmer: Arriana Maldonado
* Purpose: ask the user to enter the mouth 1-12 and the year
then display the number of days in that month
*/
#include <iostream>
using namespace std;
int main()
{
	int month, year;

	cout << "Enter a month (1-12): ";
		cin >> month;
	cout << "Enter a year: ";
		cin >> year;
		//gotta put all the months
		if (year % 4 != 0) {

			if (year % 100 == 0) {

				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
					cout << "There are 31 days in this month." << endl;
				}
				else if (month == 4 || month == 6 || month == 9 || month == 11) {
					cout << "There are 30 days in this month." << endl;
				}
				else if (month == 2) {
					cout << "There are 28 days in this month." << endl;
				}
			
				if (year % 400 == 0) {
					if (month == 2) {
						cout << "There are 29 days in this month." << endl;
					}

				}
		}
		
	
	return 0;
}
