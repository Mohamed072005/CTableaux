#include <stdio.h>
#include <stdlib.h>

int main(){

    int tableaux[10];
    int max = tableaux[0];

    printf("------Enter 10 integers------\n\n\n");
    for(int i = 0; i < 10; i++){
        printf("Enter %d number here: ", i + 1);
        scanf("%d", &tableaux[i]);

    }
    for(int j = 1; j < 10; j++){
        if(max < tableaux[j]){
            max = tableaux[j];
        }

    }
    printf("The max is: %d", max);
}
