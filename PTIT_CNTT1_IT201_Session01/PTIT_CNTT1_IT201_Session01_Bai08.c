#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int arr[10] = {1,2,1,2,1,3,5,5,7,4};
   int maxCount = 0;
   int index;
   int i = 0;
   for (i =0; i<sizeof(arr)/sizeof(arr[0]); i++) {
      int check = 0;
      for(int j = 0; j<i; j++) {
      if(arr[j] == arr[i]){
         check++;
         break;
         }
      }
      if(check != 0){
         continue;
      }
      int count = 0;
      for (int j = 0; j<sizeof(arr)/sizeof(arr[0]); j++) {
         if (i==0 && arr[j] == arr[i]) {
            maxCount++;
            index = i;
         }else if (arr[j] == arr[i]) {
            count++;
         }
      }
      if (count > maxCount) {
         maxCount = count;
         index = i;
      }
   }
   printf("%d la phan tu xuat hien nhieu nhat", arr[index]);
   return 0;
}

//độ phức tạp thời gian: O(n²)
