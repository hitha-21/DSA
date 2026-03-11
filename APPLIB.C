#include <stdio.h>
#include <stdlib.h>

struct Node {
    int bookID;
    struct Node* next;
};

void insert_at_beginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->bookID = data;
    newNode->next = *head;
    *head = newNode;
    printf("High-priority book %d added at beginning.\n", data);
}

void insert_at_end(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->bookID = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Normal book %d added at end.\n", data);
}


void delete_node(struct Node** head, int data) {
    struct Node *temp = *head, *prev = NULL;

   
    if (temp != NULL && temp->bookID == data) {
        *head = temp->next;
        free(temp);
        printf("Book %d returned and removed from list.\n", data);
        return;
    }

 
    while (temp != NULL && temp->bookID != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Book ID %d not found in the issued list.\n", data);
        return;
    }

}

void traverse(struct Node* head) {
    if (head == NULL) {
        printf("No books are currently issued.\n");
        return;
    }
    struct Node* temp = head;
    printf("Currently Issued Book IDs: ");
    while (temp != NULL) {
        printf("%d -> ", temp->bookID);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {

    insert_at_end(101);  
    insert_at_end(102);   
    insert_at_beginning(99); 
    
    traverse(issuedList);

    delete_node(&issuedList, 101);      
    traverse(issuedList);

    return 0;
}
