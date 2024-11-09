#include <iostream>
using namespace std;

int main()
{
    int i, j, sum = 10;
    for (i = 0; i < 5; i++)
        if (i % 2)
            for (j = 0; j <= 3; sum += j, j++);
        else
            for (j = 3; j > 0; sum += j, j--);
    cout << sum;

}