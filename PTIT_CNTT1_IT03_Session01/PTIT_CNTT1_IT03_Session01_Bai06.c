#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int arr[10] = {1,2,4,2,1,3,1,5,7,4};
   int num = 1;
   int count = 0;
   for (int i =0; i<sizeof(arr)/sizeof(arr[0]); i++) {
         if (arr[i] == num) {
            count++;
         }
   }
    printf("so %d xuat hien %d lan trong mang", num,count);

   return 0;
}

//độ phức tạp thời gian: O(n)
