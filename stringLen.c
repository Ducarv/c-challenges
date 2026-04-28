#include <stdio.h>

int strLen(char str[]) {
  int index = 0;
  while(str[index] != '\0') {
    index++;
  }

  int len = index;
  return len;
}

int main() {
  char *string = "Engineer";
  int result = strLen(string);
  printf("%d", result);
  return 0;
}
