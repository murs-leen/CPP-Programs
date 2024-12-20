#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    cout << str << endl;
    int st = 0, ed = str.length() - 1;
    int i = 0;
    while(i < str.length()/2){
        swap(str[st++] , str[ed--]);
        i++;
    }
    cout << "Reversed: " << str <<endl;
    cout << "Lenght: " << str.length() << endl;

    i =  0,st = 0, ed = 0;
    while (i < str.length())
    {
        if(str[i] == ' ' || i == str.length() - 1)
        {
            if(i == str.length() - 1)
                ed = i;
            else
                ed = i-1;
            while(st < ed)
            {
                swap(str[st++],str[ed--]);
            }
            st = i + 1;
        }
        i++;
    }
    
    cout << "Reversed: " << str <<endl;

}