#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int arr[5]={1,10,8,2,7};
   for (int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++) {
      for (int j = i+1; j<sizeof(arr)/sizeof(arr[0]); j++) {
         if (arr[j]<arr[i]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }
   for (int i = 0; i < 5; i++) {
      printf("%d\n", arr[i]);
   }
   return 0;
}
//độ phức tạp thời gian: O(n²)
