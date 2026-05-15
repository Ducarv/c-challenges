#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int a[], int sizeA, int b[], int sizeB, int result[]) {
  int resultIndex = 0, i = 0, j = 0;

  while(i < sizeA && j < sizeB) {
    if(a[i] < b[j]) {
      result[resultIndex] = a[i];
      resultIndex++;
      i++;
    } else {
      result[resultIndex] = b[j];
      resultIndex++;
      j++;
    }
  }

  while(i < sizeA) {
    result[resultIndex] = a[i];
    i++;
    resultIndex++;
  }

  while(j < sizeB) {
    result[resultIndex] = b[j];
    j++;
    resultIndex++;
  }
}

int main() {
  int a[] = {1, 3, 5};
  int b[] = {2, 4, 6};
  int result[6];

  mergeSortedArrays(a, 3, b, 3, result);

  int sizeResult = sizeof(result) / sizeof(int);

  printf("[ ");
  for(int i = 0; i < sizeResult; i++) {
    printf("%d", result[i]);
  }
  printf(" ]\n");

  return 0;
}
