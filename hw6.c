#include <stdio.h>
int main(void)
{
    int arr[5];
    int i;
    int j = 0;
    int k = 0;
    int Odd[5];
    int Even[5];
    for (i = 0; i < 5; i++)
    {
        printf("Please input five integers: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            Odd[j] = arr[i];
            j += 1;
        }
        if (arr[i] % 2 == 0)
        {
            Even[k] = arr[i];
            k += 1;
        }
    }
    printf("Odd numbers: ");
    for (i = 0; i < j; i++)
        printf("%d ", Odd[i]);
    printf("\n");
    printf("Even numbers: ");
    for (i = 0; i < k; i++)
        printf("%d ", Even[i]);
    printf("\n");
}