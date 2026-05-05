#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[] = {2, 7, 11, 15};
  int target = 26;

  int resultArr[2];

  for(int i = 0; i < 4; i++) {
    for(int j = i + 1; j < 4; j++) {
      if(arr[i] + arr[j] == target) {
        resultArr[0] = i;
        resultArr[1] = j;
      }
    }
  }

  printf("[ %d, %d ]\n", resultArr[0], resultArr[1]);

  return 0;
}
