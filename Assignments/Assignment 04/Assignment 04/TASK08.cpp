//#include <iostream>
//using namespace std;
//
//bool isLeapYear(int year);
//int dayOfYear(int month, int day, int year);
//int main() {
//    int month, day, year;
//    cout << "Enter the date in the format month-day-year (e.g., 12-25-2006): ";
//    cin >> month >> day >> year;
//
//    if (month < 1 || month > 12 || day < 1 || day > 31) {
//        cout << "Invalid date. Please check the month and day values." << endl;
//        return 1;
//    }
//
//    if ((month == 2 && day > (isLeapYear(year) ? 29 : 28)) ||
//        (month == 4 || month == 6 || month == 9 || month == 11) && day > 30 ||
//        (month != 2 && month != 4 && month != 6 && month != 9 && month != 11 && day > 31)) {
//        cout << "Invalid date. Please check the day value for the given month." << endl;
//        return 1;
//    }
//    int dayNumber = dayOfYear(month, day, year);
//    cout << "The day number of the year is: " << dayNumber << endl;
//
//    return 0;
//}
//
//bool isLeapYear(int year) {
//    if (year % 400 == 0) {
//        return true;
//    }
//    if (year % 100 == 0) {
//        return false;
//    }
//    if (year % 4 == 0) {
//        return true;
//    }
//    return false;
//}
//
//int dayOfYear(int month, int day, int year)
//{
//    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    if (isLeapYear(year)) {
//        daysInMonth[1] = 29;
//    }
//    int dayNumber = 0;
//    for (int i = 0; i < month - 1; i++) {
//        dayNumber += daysInMonth[i];
//    }
//    dayNumber += day;
//
//    return dayNumber;
//}