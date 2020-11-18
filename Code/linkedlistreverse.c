/* This Program was tested on UNIX using POSIX Compiler
*  ADD_LIST(<head>,<input>) is Used to Create any Number of Nodes from the Head Node 
*  REVERSE_LIST(Node *head) Prints the list from tail to head
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct node{
    char data;
    struct node* next;
};
typedef struct node Node; 

void ADD_LIST(Node **ref,int input) //ref is the Pointer to the head node, input is the Character of the string
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
void REVERSE_LIST(Node *head) 
{   
    if (head == NULL) 
       return; 
    REVERSE_LIST(head->next); //Recursive function to print from tail
    printf("%c", head->data); 
} 
int main(int argc,char *argv[])
{
	Node *head = NULL; 
    head = (Node*)malloc(sizeof(struct node));
    char *text;
    text=argv[1];
    for (int i=0;i<strlen(text);i++)
    {
        ADD_LIST(&head,text[i]);
    }
    REVERSE_LIST(head);
    free(head);
    return 0;
}
