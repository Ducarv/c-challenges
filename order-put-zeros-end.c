#include <stdio.h>

void moveZeros(int arr[], int size) {
  int greaterThenZeroElements = 0;

  for(int i = 0; i < size; i++) {
    if(arr[i] > 0) {
      arr[greaterThenZeroElements] = arr[i];
      greaterThenZeroElements++;
    }
  }

  for(int i = greaterThenZeroElements; i < size; i++) {
    arr[i] = 0;
  }
}

int main() {
  int arr[5] = {0, 1, 0, 3, 12};

  moveZeros(arr, 5);

  for(int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }

  printf("\n");

  return 0;
}
