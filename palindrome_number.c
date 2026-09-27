#include<stdio.h>

int main(){
    int num, digit, reverse = 0, original;
    printf("Enter a number\n");
    scanf("%d", &num);
     original = num;

    while(num != 0){
        digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    }

    if(original == reverse){
        printf("palindrome number\n");
    }else {
        printf("not a palindrome number\n");
    }

    

return 0;
}