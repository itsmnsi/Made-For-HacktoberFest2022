//         *
//       *   *
//     *   *   *
// *   *     *    *

#include <stdio.h>

int main()
{
    int n,k=0;
    printf("Enter your row number :\n");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("\t");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}