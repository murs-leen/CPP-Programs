#include<iostream>
using namespace std;
int main()
{
    const int S = 5;
    int arr1[S] = {0};
    int arr2[S] = {0};
    int i, j, marks;
    cout << "Enter the marks of 5 students for two quizzes\n";

    // marks for quiz 1
    for(i = 0; i < S; i ++)
    {
        cout <<"Enter marks of student " << i + 1 << " for quiz 1 :";
        cin >> marks;
        arr1[i] = marks;
    }
    cout << endl;

    // marks for quiz 2
    for(j = 0; j < S; j++)
    {
        cout <<"Enter marks of student " << j + 1 << " for quiz 2 :";
        cin >> marks;
        arr2[j] = marks;
    }
    cout << endl;
    for(j = 0; j < S; j++)
    {
        if(arr1[j] < arr2[j])
        {
            cout << "Student: " << j + 1 << endl;
            cout << "Performance improved." << endl;
        }

        else if(arr1[j] > arr2[j])
        {
            cout << "Student: " << j + 1 << endl;
            cout << "Performance declined." << endl;;
        }
        else if(arr1[j] == arr2[j])
        {
            cout << "Student: " << j + 1 << endl;
            cout << "Performance remain the same."<< endl;
        }
    }
    return 0;
}