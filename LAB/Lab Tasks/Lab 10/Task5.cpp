#include<iostream>
using namespace std;
	int main() {
		float hours, dailyTotalHours = 0, weeklyTotalHours = 0;
		int sessions;

		for (int day = 1; day <= 7; day++) {
			cout << "Day: " << day << endl;
			cout << "Enter the number of study sessions: ";
			cin >> sessions;
			if (cin.fail() || sessions < 0) {
				cout << "Invalid input!";
				system("pause");
				return 0;
			}
			
			 //  study session for the current day
			for (int i = 1; i <= sessions; i++) {
				cout << "Enter hours for session" << i << ":";
				cin >> hours;
				if (cin.fail() || hours < 0) {
					cout << "Invalid input!";
					system("pause");
					return 0;
				}
				dailyTotalHours += hours;  // Add hours to the dailyTotal
			}
			cout << endl;
			cout << "  Total hours studied on Day: " << day << " is "<< dailyTotalHours << " hours" << endl;
			cout << endl;

			//Total study hours of the week
			weeklyTotalHours += dailyTotalHours;
			dailyTotalHours = 0; //reset current day study hours to 0 
		}

		// Display the total hours for the week
		cout << "\nTotal study hours for the week: " << weeklyTotalHours << " hours" << endl;
		system("pause");
		return 0;
	}