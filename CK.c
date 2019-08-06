#include <stdio.h>

int main()
{
    int fib1 = 1, fib2 = 1, fib3, num, count = 0;
    scanf("%d", &num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 3; /* fib1 and fib2 are already used */
    while (count <= num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}
