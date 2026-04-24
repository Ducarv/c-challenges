#include <stdio.h>

int main() {
  int arr[6] = {12, 35, 1, 10, 34, 99};
  int bigger = arr[0];

  for(int index = 0; index < 6; index++) {
    if(arr[index] > bigger) {
      bigger = arr[index];
    }
  }

  printf("%d", bigger);
  printf("\n");

  return 0;
}
