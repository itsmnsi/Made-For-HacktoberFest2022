#include <stdio.h>
int main()
{
    int i, j, count, temp, list[20];
    //Input
    printf("How many numbers do you want to sort");
    scanf("%d", &count);

    printf("Enter %d elements: ", count);
    for(i = 0; i < count; i++)
    {
        scanf("%d", &list[i]);
    }
    //
    for(i = 0; i < count; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("Sorted elements: ", temp);
    for(i = 0; i < count; i++)
    {
        printf("%d ", list[i]);
    }
    return 0;
}