#include <stdio.h>

int main() {
  int input[5] = {5, 2, 9, 1, 5};
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      if(input[j] > input[j + 1]) {
        int temp = input[j];
        input[j] = input[j + 1];
        input[j + 1] = temp;
      }
    }
  } 

  for(int i = 0; i < 5; i++) {
    printf("%d", input[i]);
  }

  return 0;
}
