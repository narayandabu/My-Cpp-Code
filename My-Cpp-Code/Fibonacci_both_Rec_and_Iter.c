#include <stdio.h>

int fibonacci_Recursive(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }

    return fibonacci_Recursive(n - 1) + fibonacci_Recursive(n - 2);
}
int fibonacci_Iterative(int n)
{

    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {

        int a = 0, b = 1;
        int final = a + b;
        for (int i = 3; i < n; i++)
        {
            a = b;
            b = final;
            final = a + b;
        }
        return final;
    }
}

int main()
{
    int n;
    int exit;
    int method;
    printf("The nth Number of the fibonacci series you want to print:- \n");
    scanf("%d", &n);
    printf("Enter which method you want to print with, '0' for recursion and '1'for iterative:- \n");
    scanf("%d", &method);
    if (method == 0)
    {
        printf("%d\n", fibonacci_Recursive(n));
    }
    else if (method == 1)
    {
        printf("%d\n", fibonacci_Iterative(n));
    }

    scanf("%d", &exit);
    return 0;
}
