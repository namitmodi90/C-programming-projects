#include<stdio.h>
int main(){
 int i, j, c;
 printf("Enter the number\n");
 scanf("%d", &c);
 for(i=1; i<=c; i++){
    for(j=1; j<=c-i; j++){
        printf(" ");
    }
    for(j=1; j<=i; j++){
        printf("* ");
    }
    printf("\n");
 }
return 0;
}