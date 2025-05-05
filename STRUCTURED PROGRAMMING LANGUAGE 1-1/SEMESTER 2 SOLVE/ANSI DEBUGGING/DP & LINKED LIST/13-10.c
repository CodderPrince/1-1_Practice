#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
  // Create a new linked list
  NDPTR head = NULL;

  // Add a new person to the linked list
  NDPTR new_node = malloc(sizeof(NODE));
  strcpy(new_node->person.name, "John Doe");
  new_node->person.age = 30;
  new_node->person.weight = 70.0;
  new_node->next = head;
  head = new_node;

  // Add another person to the linked list
  new_node = malloc(sizeof(NODE));
  strcpy(new_node->person.name, "Jane Doe");
  new_node->person.age = 25;
  new_node->person.weight = 60.0;
  new_node->next = head;
  head = new_node;

  // Print the linked list
  NDPTR current_node = head;
  while (current_node != NULL) {
    printf("%s (%d, %.1f)\n", current_node->person.name, current_node->person.age, current_node->person.weight);
    current_node = current_node->next;
  }

  // Free the linked list
  current_node = head;
  while (current_node != NULL) {
    NDPTR next_node = current_node->next;
    free(current_node);
    current_node = next_node;
  }

  return 0;
}