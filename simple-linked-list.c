#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int newValue) {
  struct Node *newNode = malloc(sizeof(struct Node));
  newNode->value = newValue;
  newNode->next = NULL;
  
  if(head == NULL) {
    head = newNode;
  } else {
    struct Node *current = head;
    while(current->next != NULL) {
      current = current->next;
    }

    current->next = newNode;
  }
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
  insert(150);
  insert(10);
  insert(20);
  insert(5);

  print();

  return 0;
}
