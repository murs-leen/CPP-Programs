#include <stdio.h>
int main()
{
    int curr, pre = 10, i = 1, num,nxt;
    printf("Enter number:");
    scanf("%d", &num);
    printf("%d ", pre); // 10
    curr = pre * 2;
    printf("%d ", curr); // 20
    while (i <= num)
    {
        nxt = curr * pre;
        printf("%d ", nxt);
        pre = curr;
        curr = nxt;
        i++;
    }
  
}