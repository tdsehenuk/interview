#include <stdio.h>
#include <stdlib.h> 

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *create_node(int data);
void insert_node(Node **head, int data);
void print_list(Node *head);
void free_list(Node **head);
void delete_node(Node **head);


int main() {

    printf("\nWelcome to my program that uses linked lists!\n");

    Node *head = NULL;

    insert_node(&head, 10);
    insert_node(&head, 20);
    insert_node(&head, 30);

    print_list(head);  // Output: 10 -> 20 -> 30 -> NUL
    free_list(&head);
    print_list(head);
    return 0;
}


Node *create_node(int data) {
    Node *new_node = malloc(sizeof(Node));
    if(new_node == NULL) {
        printf("\nmemory allocation failed for new node");
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

    while(current != NULL) {
        printf("[%d]-> ", current->data);
        current = current->next;
    }
    printf("null");
}
void free_list(Node **head) {
    Node *current = *head;
    while(temp != NULL) {
        Node *temp = current;  
        current = current->next;
        free(temp);
    }
}

void delete_node(Node **head) {
;
}
