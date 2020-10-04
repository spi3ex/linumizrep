#include <stdio.h> //standard io header
#include <stdlib.h> //contains data structure headers in C
#include <string.h> // for string Operations

struct node{
    char data;
    struct node* next;
}; //initialized node
typedef struct node *Node; // used typedef to define a more readable coee

int main(int argc,char *argv[]) //get arguments from the commandline
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
