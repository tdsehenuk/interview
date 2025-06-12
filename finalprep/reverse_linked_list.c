#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int data);
void insert_node(Node **head, int data);
void print_list(Node *head);
void delete_node();
void reverse_list(Node **head);
void free_list();

int main() {

    Node *head = NULL;
    insert_node(&head, 10);
    insert_node(&head, 20);
    insert_node(&head, 30);
    insert_node(&head, 40);
    print_list(head);
    reverse_list(&head);
    print_list(head);
    return 0;
}

Node *create_node(int data) {
    Node *new_node = malloc(sizeof(Node));

    if(!new_node) {
        printf("memory failed");
        return NULL;
    }

    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_node(Node **head, int data) {
    Node *new_node = create_node(data);
    if(*head == NULL) {
        *head = new_node;
        return;
    }

    Node *current = *head;
    while(current->next != NULL) {
        current = current->next;
    }
     
    current->next = new_node;
}

void print_list(Node *head) {
    Node *current = head;
    while(current) {
        printf("[%d]->", current->data);
        current = current->next;
    }
    printf("NULL");
}

void reverse_list(Node **head) {
    Node *current = *head;
    Node *previous = NULL;
    Node *next = NULL;

    while (current != NULL) {
        next = current->next;     // save next node
        current->next = previous; // reverse pointer
        previous = current;       // move previous forward
        current = next;           // move current forward
    }

    *head = previous; // new head is the last node processed
}
