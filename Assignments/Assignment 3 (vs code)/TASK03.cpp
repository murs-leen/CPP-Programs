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
        int num, size;
        cout << "Enter your choice: " << endl;
        cin >> num;
        cout << "Enter the size: ";
        cin >> size;
        switch (num)
        {
        // case 1 (Filled square)
        case 1:
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
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if ((i == 0 || i == size - 1) || (j == 0 || j == size - 1))
                        arr[i][j] = '*';
                    else
                        arr[i][j] = ' ';
                }
            }

            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                    cout << arr[i][j];
                cout << endl;
            }

            //case 3: Right Triangle
        case 3:
            cout << "Select orientation" << endl;
            cout << "1. Top-Left" << endl;
            cout << "2. Top-Right" << endl;
            cout << "3. Bottom-Left" << endl;
            cout << "4. Bottom-Right" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;
            switch (choice)
            {
                case
            }



            break;
        default:
            break;
        }
    }
    return 0;
}