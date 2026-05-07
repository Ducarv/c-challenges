#include <stdio.h>
#include <string.h>

int main() {
  
  char *words[] = {"Fizz", "Buzz", "FizzBuzz", "Fizz"};

  int result[4];
  int resultCounter = 0;

  int threeCounter = 1, fiveCounter = 1, fifteenCounter = 1;
  for(int i = 0; i < (sizeof(words) / sizeof(words[0])); i++) {
    if(strcmp(words[i], "Fizz") == 0) {
      while(threeCounter % 3 != 0) {
        threeCounter++;
      }
      
      result[resultCounter] = threeCounter;
      resultCounter++;
      threeCounter++;
    } else if(strcmp(words[i], "Buzz") == 0) {
      while(fiveCounter % 5 != 0) {
        fiveCounter++;
      }

      result[resultCounter] = fiveCounter;
      resultCounter++;
      fiveCounter++;
    } else if(strcmp(words[i], "FizzBuzz") == 0) {
      while(fifteenCounter % 15 != 0) {
        fifteenCounter++;
      }

      result[resultCounter] = fifteenCounter;
      resultCounter++;
      fifteenCounter++;
    }
  }

  printf("[");
  for(int i = 0; i < 4; i++) {
    printf(" %d ", result[i]); 
  }
  printf("]\n");

  return 0;
}
