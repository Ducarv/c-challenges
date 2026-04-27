#include <stdio.h>

int main() {
  int arr[5] = {0, 1, 0, 3, 12};
  
  int zeroElementPosition = 0;

  for(int index = 0; index < 5; index++) {
    if(arr[index] > 0) {
      arr[zeroElementPosition] = arr[index];
      zeroElementPosition++;
    }
  }

  for(int i = zeroElementPosition; i < 5; i++) {
    arr[i] = 0;
  }

  for(int i = 0; i < 5; i++) {
    printf("%d", arr[i]);
  }

  printf("\n");

  return 0;
}
