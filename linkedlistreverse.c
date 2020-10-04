#include <stdio.h> //standard io header
#include <stdlib.h> //contains data structure headers in C
#include <string.h> // for string Operations

struct node{
    char data;
    struct node* next;
}; //initialized node
typedef struct node *Node; // used typedef to define a more readable coee

void Linklist(Node *ref,int input);
void LinkedReverse(Node head);
int main(int argc,char *argv[]) //get arguments from the commandline
{
	Node head;
	head = NULL; //Creating head node
	head = (Node)malloc(sizeof(struct node));
    char *text; //text stores the string
    text=argv[1]; //Commandline arguments passed to text

    for (int i=0;i<strlen(text);i++)
    {
        Linklist(&head,text[i]); //Creating node for each string
    }
    LinkedReverse(head);
    return 0;
}
void Linklist(Node *ref,int input)
{
    Node NewNode;
    Node temp;
    NewNode= (Node) malloc(sizeof(struct node));

    NewNode->data = input;
    NewNode->next = NULL;

    if (ref == NULL)
    {
       *ref = NewNode;
       return;
    }
    temp = *ref;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = NewNode;
    NewNode->next = NULL;
    return;
}



void LinkedReverse(Node head)
{
    Node prev = NULL;
    Node current = head;
    Node next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    Node temp;
    temp = head;
    while(temp->next != NULL){
		printf("%c",temp->data);
		temp = temp->next;
	}
	printf("%c",temp->data);
}
