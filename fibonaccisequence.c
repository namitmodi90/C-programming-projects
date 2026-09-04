#include<stdio.h>

int main(){
    int n, i, first=0, second=1, next;
   printf("Enter number of terms : \n");
    scanf("%d", &n);
    printf("Fibonacci Sequence : \n");
    for(i=0; i<n; i++){
        if(i==0){
            printf("%d\n", first);
        }
        else if(i==1){
            printf("%d\n", second);
        }
        else{
            next= first + second;
            printf("%d\n", next);
            first= second;
            second= next;
        }
    }


return 0;
}