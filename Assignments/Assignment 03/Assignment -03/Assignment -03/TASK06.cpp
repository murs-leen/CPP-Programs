#include <iostream>
using namespace std;
int main()
{
    const int rows = 20;
    const int cols = 20;
    char arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = '\0';
        }
    }
    bool flag = true;
    while (flag)
    {
        cout << endl;
        cout << "1. Filled square of * " << endl;
        cout << "2. Hollo square of *" << endl;
        cout << "3. Right Triangle of *" << endl;
        cout << "0. Exit" << endl;
        int num, size, spaceCount;
        cout << "Enter your choice: ";
        cin >> num;
        switch (num)
        {
        case 0:
            flag = false;
            break;
        default:
            cout << "\nInvalid input....." << endl;
            break;
            // case 1 (Filled square)
        case 1:
            cout << "\nEnter the size: ";
            cin >> size;
            cout << "\n(Filled Square)" << endl;
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                    arr[i][j] = '*';
            }
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                    cout << arr[i][j];
                cout << endl;
            }
            break;

            // case 2: Hollow Square
        case 2:
            cout << "\nEnter the size: ";
            cin >> size;
            cout << "\n(Hollow Square)" << endl;
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if ((i == 0 || i == size - 1) || (j == 0 || j == size - 1))
                    {
                        arr[i][j] = '*';
                        cout << arr[i][j];
                    }
                    else
                    {
                        arr[i][j] = ' ';
                        cout << arr[i][j];
                    }
                }
                cout << endl;
            }
            break;

            //case 3: Right Triangle
        case 3:
            cout << "\nEnter the size: ";
            cin >> size;
            cout << "\nSelect orientation" << endl;
            cout << "1. Top-Left" << endl;
            cout << "2. Top-Right" << endl;
            cout << "3. Bottom-Left" << endl;
            cout << "4. Bottom-Right" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;
            switch (choice)
            {
                //Top-Left
            case 1:
                cout << "\n(Right Triangle - Top-Left)" << endl;
                for (int i = size; i >= 1; i--)
                {
                    for (int j = i; j >= 1; j--)
                    {
                        arr[i][j] = '*';
                        cout << arr[i][j];
                    }
                    cout << endl;
                }
                break;
            case 2:
                //Top-Right
                spaceCount = 0;
                cout << "\n(Right Triangle - Top-Right)" << endl;
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < spaceCount; j++)
                    {
                        arr[i][j] = ' ';
                        cout << arr[i][j];
                    }
                    for (int j = spaceCount; j < size; j++)
                    {
                        arr[i][j] = '*';
                        cout << arr[i][j];
                    }
                    cout << endl;
                    spaceCount++;
                }
                break;
            case 3:
                //Bottom-Left
                cout << "\n(Right Triangle - Bottom-Left)" << endl;
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        arr[i][j] = '*';
                        cout << arr[i][j];
                    }
                    cout << endl;
                }
                break;
            case 4:
                //Bottom-Right 
                cout << "\n(Right Triangle - Bottom-Right)" << endl;
                spaceCount = size - 1;
                for (int i = 0; i < size; i++)
                {
                    for (int j = 0; j < spaceCount; j++)
                    {
                        arr[i][j] = ' ';
                        cout << arr[i][j];
                    }
                    for (int j = spaceCount; j < size; j++)
                    {
                        arr[i][j] = '*';
                        cout << arr[i][j];
                    }
                    spaceCount--;
                    cout << endl;
                }
                break;
            }
        }
    }
    cout << "GoodBye..(:" << endl;
    return 0;
}