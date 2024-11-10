// C-Strings built-in functions

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // copying data of one string to other
    char str1[10] = "Zahid";
    char str2[35] = "FAST NUCES CFD";

    // To find lenght of c-string
    int leng = strlen(str1);
    cout << "Length of str1 = " << leng << endl;

    strcpy(str1, str2); // destination <- source
    cout << str1 << endl;

    // Comparing two strings
    char strCamp1[16] = "Zahid Mursleen ";
    char strCamp2[] = "Fast NU";
    int res = strcmp(strCamp1, strCamp2);
    cout << res << endl;


    // To concatinate strings
    strcat(strCamp1,strCamp2); 
    cout << "Total string: " << strCamp1 << endl;
    return 0;
}