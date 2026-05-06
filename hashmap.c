#include <stdio.h>
#include <stdlib.h>

int main() {
  int key[100];
  int value[100];

  int arr[] = {2, 7, 11, 15};
  int size = sizeof(arr) / sizeof(arr[0]);

  int target = 26;

  int counter = 0;

  int resultArr[2] = { -1, -1 };

  for(int i = 0; i < size; i++) {
    int complement = target - arr[i];

    for(int j = 0; j <= counter; j++) {
      if(key[j] == complement) {
        resultArr[0] = value[j];
        resultArr[1] = i;
      }
    }

    key[i] = arr[i];
    value[i] = i;
    counter++;
  }

  printf("[%d, %d]\n", resultArr[0], resultArr[1]);

  return 0;
}
