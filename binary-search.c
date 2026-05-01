#include <stdio.h>

int binarySearch(int *arr, int arr_size, int number) {
  int left = 0;
  int mid = (arr_size - 1) / 2;
  int right = arr_size - 1;

  while(right >= left) {
    if(number == arr[mid]) {
      return mid;
    } else if(number < arr[mid]) {
      right = mid - 1;
      mid = (left + right) / 2;
    } else if(number > arr[mid]) {
      left = mid + 1;
      mid = (left + right) / 2;
    }
  }
  
  return -1;
}

int main() {
  int arr[7] = {1, 3, 5, 7, 9, 11, 13};
  int result = binarySearch(arr, 7, 6);
  printf("%d\n", result);
  return 0;
}
