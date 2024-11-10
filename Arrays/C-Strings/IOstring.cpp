#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // input in c-string usign cin.getline(variableName, Size, delimiter)
    // => delimiter: on which specific character you want to stop input string
    char str[10];
    cout << "Enter a char string: ";
    cin.getline(str,10);
    cout << str << endl;

    // counting lenght using loop
    int leng = 0;
    for(int i = 0; str[i] != '\0'; i++)
        leng++;
    cout << "Lenght = " << leng;
} 