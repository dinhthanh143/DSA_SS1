#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int arr[10] = {1,2,4,2,1,3,5,5,7,4};

   //cach 1: độ phức tạp thời gian: O(n²)
   for (int i =0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      int count = 0;
         for (int j = 0; j<sizeof(arr)/sizeof(arr[0]); j++) {
            if (arr[j] == arr[i]) {
              count++;
            }
         }
      if (count > 1) {
         printf("%d la phan tu bi trung lap \n", arr[i]);
      }else {
         printf("%d la phan tu khong bi trung lap \n", arr[i]);
      }
   }


   //cach 2: độ phức tạp thời gian: O(n+max)

   int max = arr[0];
   for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      if (arr[i]>max) {
         max = arr[i];
      }
   }
   int arr2[max+1];
   for ( int i =0; i<=sizeof(arr2)/sizeof(arr2[0]); i++) {
      arr2[i]=0;
   }

   for (int i =0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      arr2[arr[i]]++;
   }

   for (int i =0; i<=sizeof(arr2)/sizeof(arr2[0]); i++) {
      if (arr2[i]>0) {
         if (arr2[i]>1) {
            printf("phan tu %d la phan tu trung lap\n", i);
         }else {
            printf("phan tu %d la phan tu khong trung lap\n", i);
         }
      }
   }
   return 0;
}


