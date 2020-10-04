#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data;
    struct node* next;
}*head;
typedef struct node *Node;
head= (Node*) malloc(sizeof(struct node));

int main(int argc,char argv[])
{
    char *text;
    text=argv[1];
    Node* head = NULL;

    for (int i=0;i<strlen(text);i++)
    {
        CreateList(&head, text[i]);
    }
    ReverseList(head);
    return 0;
}


void CreateList(Node *head, int input)
{
    Node *NewNode,*temp;
    NewNode= (Node*) malloc(sizeof(struct node));

    temp = head;
    NewNode->data = input;
    NewNode->next = NULL;

    if (head == NULL)
    {
       head = NewNode;
       return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = NewNode;
    return;
}



void ReverseList(head)
{
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    Node *temp;
    head = temp;
    while(temp->next != NULL){
		printf("%c",temp->data);
		temp = temp->next;
	}
	printf("%c",temp->data);
}


