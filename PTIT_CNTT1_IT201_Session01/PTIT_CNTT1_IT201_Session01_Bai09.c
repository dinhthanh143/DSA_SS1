#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void printMatrix(int rows, int cols, int arr[rows][cols]) {
   for (int i=0; i <rows; i++) {
      for (int j = 0; j<cols; j++) {
         printf("%d\t", arr[i][j]);
      }
      printf("\n");
   }
}
//độ phức tạp thời gian: O(n²), độ phức tạp không gian: O(n²)

void calDiagonal(int rows, int cols, int arr[rows][cols]) {
   int total = 0;
   for (int i=0; i <rows; i++) {
      total += arr[i][i];
   }
   printf("Tong duong cheo chinh la %d", total);
}
//độ phức tạp thời gian: O(n), độ phức tạp không gian: O(1)
int main(){
   int arr[3][3]={
      {1,2,3},
      {4,5,6},
      {7,8,9},
   };
   int rows = 3;
   int cols = 3;
   printMatrix(rows,cols,arr);
   calDiagonal(rows,cols,arr);
   return 0;
}
