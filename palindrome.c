#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *word) {
  int wordLen = strlen(word);
  int endIndex = wordLen - 1;
  
  for(int index = 0; index != endIndex; index++) {
    if(word[index] == word[endIndex]) {
      endIndex--;
    } else {
      return false;
    }
  }

  return true;
}

int main() {
  char *testString = "radar";
  bool result = isPalindrome(testString);
  printf("%s\n", result ? "true" : "false");
  return 0;
}
