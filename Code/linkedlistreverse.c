#include <stdio.h> //standard io header
#include <stdlib.h> //contains data structure headers in C
#include <string.h> // for string Operations

struct node{
    char data;
    struct node* next;
}; //initialized node
typedef struct node Node; // used typedef to define a more readable code

void ADD_LIST(Node **ref,int input);
void REVERSE_LIST(Node);

void ADD_LIST(Node **ref,int input) //here ref is the pointer to the head node
{
    Node *NewNode; 
    Node *temp;
    NewNode= (Node*) malloc(sizeof(struct node));

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

void REVERSE_LIST(Node head) 
{ 
    // Base case   
    if (head == NULL) 
       return; 
  
    // print the list after head node 
    REVERSE_LIST(head->next); 
  
    // After everything else is printed, print head 
    printf("%c ", head->data); 
} 
int main(int argc,char *argv[]) //get arguments from the commandline
{
	Node *head;
	head = NULL; //Creating head node
	head = (Node*)malloc(sizeof(struct node));
    char *text; //text stores the string
    text=argv[1]; //Commandline arguments passed to text

    for (int i=0;i<strlen(text);i++)
    {
        ADD_LIST(&head,text[i]); //Creating node for each string
    }
    REVERSE_LIST(head);
    return 0;
}
