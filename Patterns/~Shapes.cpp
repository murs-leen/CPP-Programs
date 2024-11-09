#include<iostream>
using namespace std;

int main()
{
    int i, j, num;
    cout << "Enter a number: ";
    cin >> num;

    // *        *
    // **      ** 
    // ***    ***
    // ****  ****
    // **********  

    // for(i = 1; i <= num; i++)
    // {
    //     for(j = 1; j<= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for(j = 1; j <= 2 * (num - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for(j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // *        
    // **       
    // ***    
    // ****  
    // *****
    // *****
    // **** 
    // ***    
    // **    
    // *        

    // for(i = 1; i <= num; i++)
    // {
    //     for(j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
        
    // }
    // for(i = num; i >= 1; i--)
    // {
    //     for(j = 0; j < i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // *        *        
    // **      **  
    // ***    ***
    // ****  ****
    // **********
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *

// upper side
    // for(i = 1; i <= num; i++)
    // {
    //     for(j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     for(j = 1; j <= 2 * (num - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for(j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // lower side

    // for(i = num; i >= 1; i--)
    // {
    //     for(j = i; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     for(j = 1; j <= 2 * (num - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for(j = i; j >= 1; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    //      @
    //     @ @ 
    //    @ @ @
    //   @ @ @ @

// for(i = 1; i <= num;  i++)
// {
//     for(j = 1; j <= num - i; j++)
//     {
//         cout << " ";
//     }
//     for(j = 1; j <= i; j++)
//     {
//         cout << "-@";
//     }
//     cout << endl;
// }










    return 0;
}