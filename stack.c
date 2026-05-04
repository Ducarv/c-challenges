#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head = NULL;

void push(int value) {
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->value = value;
  newNode->next = head;
  
  head = newNode;
}

int pop() {
  if(head == NULL) {
    return -1;
  }

  int value = head->value;
  struct Node *next = head->next;

  free(head);

  head = next;
  
  printf("%d\n", value);

  return value;
}

void print() {
  struct Node *current = head;
  while(current != NULL) {
    printf("%d -> ", current->value);
    current = current->next;
  } 
    
  printf("NULL\n");
}

int main() {
  push(1);
  push(2);
  push(3);

  print();

  pop();

  print();

  return 0;
}
