#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head = NULL;

void push(char symbol) {
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->value = symbol;
  newNode->next = head;

  head = newNode;
}

char pop() {
  if(head == NULL) {
    return '\0';
  }

  struct Node *temp = head;
  char value = temp->value;
  head = head->next;
  free(temp);
  return value;
}


bool isValid(char *string) {
  for(int i = 0; i < strlen(string); i++) {
    char current = string[i];

    if(current == '(' || current == '{' || current == '[') {
      push(string[i]);
    } else {
      char top = pop();

      if(current == ')' && top != '(') {
        return false;
      }

      if(current == '}' && top != '{') {
        return false;
      }

      if(current == ']' && top != '[') {
        return false;
      }
    }
  }

  return head == NULL;
}

int main() {
  bool result =  isValid("([)]");
  printf("%s\n", result ? "true" : "false");
  return 0;
}
