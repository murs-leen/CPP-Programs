// 10 20 200 4000 800000....
// 1 5 2 15 3 25....
#include <stdio.h>
int main()
{
    int i = 1, j = 5, count = 0, n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("%d ", i);
    printf("%d ", j);
    while (i < n)
    {
        if (i != 1)
        {
            printf("%d ", i);
            j = j + 10;
            printf("%d ", j);
        }
        i++;
    }
} 