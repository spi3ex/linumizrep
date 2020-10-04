#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char data;
    struct node* next;
};
typedef struct node *Node;
Node head= NULL;

int main(int argc,char *argv[])
{
    char *text;
    text=argv[1];
    Node* head = NULL;

    for (int i=0;i<strlen(text);i++)
    {
        CreateNode(text[i]);
    }
    ReverseNode(head);
    return 0;
}


void CreateNode(int input)
{
    Node *NewNode;
    Node *temp;
    NewNode= (Node*) malloc(sizeof(struct node));

   
    NewNode->data = input;
    NewNode->next = NULL;

    if (*head == NULL)
    {
       *head = NewNode;
       return;
    }
    temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = NewNode;
    return;
}



void ReverseNode(head)
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
