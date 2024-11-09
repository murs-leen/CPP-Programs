#include<iostream>
using namespace std;
int main()
{
    int i, j,num;

    cout << "Enter a number:";
    cin >> num;
    num *= 2;
    for(i = 1; i <= num; i += 2 ){
        for(j = 1; j <= (num - i)/2; j++)
        {
            cout << " ";
        }
        for(j = 1; j <= i; j++)
        {
            if(i > 1 && i < num-1 && j > 1 && j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    // for(i = 1; i <= num; i ++)
    // {
    //     for(j = 1; j <= num - i; j ++)
    //     {
    //         cout << " ";
    //     }
    //     for(j = 1; j <= i; j++)
    //     {
    //         if(i > 1 && i < num && j > 1)
    //             cout << " ";
    //         else    
    //             cout << "*";
    //     }
    //     for(j = 1; j <= i - 1; j++ )
    //     {
    //         if(i > 2 && i < num && j <= i-2) 
    //             cout << " ";
    //         else    
    //             cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}