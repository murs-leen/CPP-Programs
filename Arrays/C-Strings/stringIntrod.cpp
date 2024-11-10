#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // we need to add '\0' when we initialize the c strings like below
    char str[6] = {'z','a','h','i','d','\0'}; // sting literals(you can't change value)

    // we don't need to add null character at the end when we initilize the string with double
    // quotes.compiler explicitly add this null character
    char str1[6] = "mursl";
    int leng =  strlen(str1);
    cout << str << " " << leng << endl;
    return 0;
}