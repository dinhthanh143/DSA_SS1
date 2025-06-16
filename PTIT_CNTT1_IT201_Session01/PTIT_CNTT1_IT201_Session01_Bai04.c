#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//cách 1: độ phức tạp khong gian: O(1)
int calTotalFromOne(int n){
   int total = 0;
   int i = 1;
   while (i <= n) {
      total += i;
      i++;
   }
   return total;
}
//cách 2: độ phức tạp khong gian: O(1)
int optimalCalTotalFromOne(int n){
   return n * (n+1)/2;
}
int main(){
   int n = 5;
   int total = calTotalFromOne(n);
   printf("%d\n", total);
   int total2 = optimalCalTotalFromOne(n);
   printf("%d", total2);
   return 0;
}

