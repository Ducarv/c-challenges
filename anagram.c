#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char *firstWord, char *secondWord) {
  if(strlen(firstWord) != strlen(secondWord)) {
    return false;
  }

  int firstWordCounterArr[26] = {0}, secondWordCounterArr[26] = {0};

  for(int i = 0; i < strlen(firstWord); i++) {
    firstWordCounterArr[firstWord[i] - 'a']++;
    secondWordCounterArr[secondWord[i] - 'a']++;
  };

  for(int i = 0; i < 26; i++) {
    if(firstWordCounterArr[i] != secondWordCounterArr[i]) {
      return false;
    }
  }

  return true;
}

int main() {

  bool result = isAnagram("hello", "world");
  printf("%s\n", result ? "true" : "false");
  return 0;
}
