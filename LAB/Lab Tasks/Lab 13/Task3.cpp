#include <iostream>
using namespace std;
int main()
{
    const int S = 3;
    const int S1 = 5;
    int arr[S][S1] = {{0},{0},{0}};
    float avg = 0, sum = 0;
    int min = 0, max = 0, k = 0;
    cout << "Enter marks of 5 quizzes of student 1(sperated by space): " << endl;
    int i = 0;
        for (int j = 1; j < 5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][k] < arr[i][j])
                max = arr[i][j];
            if(arr[i][k] > arr[i][j])
                min = arr[i][j];
            k++;
            sum += arr[i][j];
        }
        avg = sum / 5;
        cout << "Average of student 1 is: " << avg << endl;
        cout << "Maximum of student 1 is: " << max << endl;
        cout << "Minimum of student 1 is: " << min << endl;
        sum = 0, avg = 0, max = 0, min = 0;
    cout << "Enter marks of 5 quizzes of student 2(sperated by space): " << endl;
    i = 1;
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(max < arr[i][j])
                max = arr[i][j];
            if(min > arr[i][j])
                min = arr[i][j];
            sum += arr[i][j];
        }
        avg = sum / 5;
        cout << "Average of student 2 is: " << avg << endl;
        cout << "Maximum of student 2 is: " << max << endl;
        cout << "Minimum of student 2 is: " << min << endl;
        sum = 0, avg = 0, max = 0, min = 0;

    cout << "Enter marks of 5 quizzes of student 3(sperated by space): " << endl;
    i = 2;
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if(max < arr[i][j])
                max = arr[i][j];
            if(min > arr[i][j])
                min = arr[i][j];
            sum += arr[i][j];
        }
        avg = sum / 5;
        cout << "Average of student 3 is: " << avg << endl;
        cout << "Maximum of student 3 is: " << max << endl;
        cout << "Minimum of student 3 is: " << min << endl;


    return 0;
}