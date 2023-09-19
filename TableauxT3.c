#include <stdio.h>
#include <stdlib.h>

int main(){

    int tableaux[10];
    int l, swap;
    l = sizeof(tableaux) / sizeof(tableaux[0]);

    for(int i = 0; i < l; i++){
        printf("Enter the %d number: ", i + 1);
        scanf("%d", &tableaux[i]);
    }


    swap = 0;

    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (tableaux[i] < tableaux[j])
            {

                swap = tableaux[i];
                tableaux[i] = tableaux[j];
                tableaux[j] = swap;
            }
        }
    }

    for (int i = 0; i < l; i++)
    {
        printf("%d =  %d\n", i, tableaux[i]);
    }
    return 0;




}
