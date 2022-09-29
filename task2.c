#include <stdio.h>
#include <stdlib.h>

int main(){
  system("chcp 1251");
  system("cls");
  double arr[] = {-5, 4, -1, 9, 2, 0, 7, 8, -3};
  double res_1 = 0, res_2 = 0;
  double count = 0;
  int i, neg;
  
  // 1
  for (i = 0; i < 9; i++){
    count += arr[i];
  }
  count = count/9;
  printf("Mean: %lf\n", count);
  for (i = 0; i < 9; i++){
    if (arr[i] > count) res_1++;
  }
  printf("First result: %.0lf\n", res_1);
  
  // 2
  for (i = 0; i < 9; i++){
    if (arr[i] < 0) {
      neg = i;
      break;
    }
  }
    for (i = neg + 1; i < 9; i++) res_2 += abs(arr[i]);
  printf("Second result: %.0lf\n", res_2);
  system("pause");
}
