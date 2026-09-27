#include<stdio.h>

int main(){
    int rows, i, j;
    printf("enter rows\n");
    scanf("%d", &rows);
    for (  i = 1; i <= rows; i++){
        for (  j = 1; j<= 2*(rows-i); j++){
            printf(" ");
        }
        for ( j = 1; j<= 2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}