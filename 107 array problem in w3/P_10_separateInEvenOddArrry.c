#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n], odd[n], Odd = 0, Even = 0, even[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[Even] = arr[i];
            Even++;
        }

        if (arr[i] % 2 != 0)
        {

            odd[Odd] = arr[i];
            Odd++;
        }
    }
    for (i = 0; i < Even; i++)
    {

        printf("%d ", even[i]);
    }

    printf("\n");
    for (i = 0; i < Odd; i++)
    {

        printf("%d ", odd[i]);
    }

    return 0;
}