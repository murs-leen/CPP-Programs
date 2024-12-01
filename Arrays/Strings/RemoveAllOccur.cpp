#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "abcabbcabc";
    string str2;
    getline(cin,str2);
    while(str1.find(str2) < str1.length())
    {
        str1.erase(str1.find(str2),str2.length());  
        cout << str1 << " "; 
    }
    cout << "Modified string = " << str1;
    return 0;
}