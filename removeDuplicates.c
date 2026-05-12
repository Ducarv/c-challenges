#include <stdio.h>

int removeDuplicates(int nums[], int size) {
  if(size == 0) {
    return 0;
  }

  int write = 1;

  for(int read = 1; read < size; read++) {
    if(nums[read] != nums[write - 1]) {
      nums[write] = nums[read];
      write++;
    }
  }

  return write;
}

int main() {
  int nums[] = {0, 0, 1, 1, 1, 2, 2, 3};
  int size = 8;
  int result = removeDuplicates(nums, size);

  printf("[ ");
  for(int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
  }
  printf("]\n");

  printf("%d\n", result);

  
  return 0;
}
