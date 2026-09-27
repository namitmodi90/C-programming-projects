#include<stdio.h>

int main(){
int n, digit, digitcube = 0, original;
printf("enter a number\n");
scanf("%d", &n);
original = n;
while(n != 0){
    digit = n % 10;
     digitcube = digitcube + (digit * digit * digit);
     n = n / 10;
}
if (digitcube == original){
    printf("it is a armstrong number\n");
}else {
    printf("it is not a armstrong number\n");
}
return 0;
}