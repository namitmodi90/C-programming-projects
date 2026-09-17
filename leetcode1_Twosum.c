#include <stdio.h>
 int main() {
 int num[] = {1,2,3,5,6,13,23};
 int target = 8, n=7, sum;
 for (int i =0; i<n; i++){
    for(int j =i+1; j<n; j++){
        sum = num[i] + num[j];
      if (sum == target){
        printf("(%d,%d)\n", i, j);
      }
    }
    
 }
 
 return 0;
 }