#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tableaux[10];




    printf("------Enter 10 integers------\n\n\n");
    for(int i = 0; i < 10; i++)
    {
        printf("Enter %d number here: ", i + 1);
        scanf("%d", &tableaux[i]);

    }

    int max = tableaux[0];
    for(int j = 1; j < 10; j++)
    {
        if(max < tableaux[j])
        {
            max = tableaux[j];
        }
    }
    int min = tableaux[0];

    for(int y = 1; y < 10; y++)
    {
        if(min > tableaux[y])
        {
            min = tableaux[y];
        }
    }



    printf("The max is: %d\n", max);
    printf("The min is: %d", min);
}
