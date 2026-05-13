#include <stdio.h>

int maximumSubarray(int array[], int size) {
  int currentSum = array[0], bestSum = array[0];

  for(int i = 1; i < size; i++) {
    if(currentSum + array[i] >= array[i]) {
      currentSum = currentSum + array[i];
    } else {
      currentSum = array[i];
    }

    if(currentSum > bestSum) {
      bestSum = currentSum;
    }
  }

  return bestSum;
}

int main() {
  int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  printf("%d\n", maximumSubarray(a, 9));
  // retorn 6

  int b[] = {1};
  printf("%d\n", maximumSubarray(b, 1));
  // retorn 1

  int c[] = {5, 4, -1, 7, 8};
  printf("%d\n", maximumSubarray(c, 5));
  // retorn 23

  int d[] = {-3, -2, -5};
  printf("%d\n", maximumSubarray(d, 3));
  // retorn -2
  return 0;
}
