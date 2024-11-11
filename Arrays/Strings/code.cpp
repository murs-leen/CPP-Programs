#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "Zahid Mursleen ";
    string name1 = "Muhammad ali";
    string str = name + " | " + name1;
    cout << str <<  endl;
    // input string
    string address;
    getline(cin,address); //cin, var, delimiter(on which specific character you want to stop)
    for(int i = 0; address[i] != '\0'; i++)
    {
    cout << address[i];
    }
    
    // For Each loop
    // for(char ch: address)
    // {
    //     cout << ch;
    // }
    cout << endl;
    return 0;
}