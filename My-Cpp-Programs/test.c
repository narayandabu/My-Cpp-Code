#include <stdio.h>

int main(){
    int n, arr[n], i, count = 0;
    printf("enter n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }
    if (count > 1)
    {
        printf("the number of dupllicate nummber si an array is %d", count+1);
    }
    return 0;
}