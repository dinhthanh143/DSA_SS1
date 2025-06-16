#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){

   return 0;
}
void printDouble(int n){
   int i = 1;
   while (i < n) {
      printf("%d\n", i);
      i *= 2;
   }
}

//độ phức tạp thời gian: O(log n)
