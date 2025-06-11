#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* create_node(int data) {
    Node *new_node = malloc(sizeof(Node));
    if (!new_node) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_end(Node **head, int data) {
    Node *new_node = create_node(data);
    if (!*head) {
        *head = new_node;
        return;
    }
    Node *current = *head;
    while (current->next) {
        current = current->next;
    }
    current->next = new_node;
}

void delete_node(Node **head, int data) {
    Node *current = *head, *prev = NULL;
    while (current && current->data != data) {
        prev = current;
        current = current->next;
    }
    if (!current) return;

    if (!prev) *head = current->next;
    else prev->next = current->next;

    free(current);
}

void print_list(Node *head) {
    Node *current = head;
    while (current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void free_list(Node *head) {
    while (head) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
int main() {
    Node *head = NULL;

    insert_end(&head, 10);
    insert_end(&head, 20);
    insert_end(&head, 30);
    print_list(head); // Should print: 10 -> 20 -> 30 -> NULL

    delete_node(&head, 20);
    print_list(head); // Should print: 10 -> 30 -> NULL

    free_list(head);
    return 0;
}