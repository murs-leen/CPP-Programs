#include <iostream>
#include <string>
using namespace std;
bool isAlphaNum(char a);
bool isAlphaNum(char a)
{
    if ((a >= '0' && a <= '9') || (tolower(a) >= 'a' && tolower(a) <= 'z'))
        return true;
    return false;
}
int main()
{
    string str;
    bool isPalindrome = true;
    getline(cin, str);
    int st = 0, ed = str.length() - 1;
    while (st < ed){
        if (!isAlphaNum(str[st])){
            st++;
            continue;
        }
        if (!isAlphaNum(str[ed])){
            ed--;
            continue;
        }
        if (str[st] != str[ed]){
            isPalindrome = false;
            break;
        }
        str[st] = str[ed];
        st++;
        ed--;
    }
    if (isPalindrome)
        cout << str << " is a valid palindrome string." << endl;
    else
        cout << str << " is not a valid  palindrome string." << endl;
    return 0;
}