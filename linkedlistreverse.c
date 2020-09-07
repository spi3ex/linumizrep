
#include <stdio.h> 
#include <stdlib.h>
using namespace std; 

struct Node { 
	char text[7]; 
	struct Node* next; 
}; 


struct Node* newNode(char text) 
{ 
	Node* temp = new Node; 
	temp->c = c; 
	temp->next = NULL; 
	return temp; 
}; 

void reverse_word(string& str) 
{ 
	reverse(str.begin(), str.end()); 
} 

void reverse(struct Node* head) 
{ 
	struct Node* ptr = head;  
	while (ptr != NULL) { 
		reverse_word(ptr->text); 
		ptr = ptr->next; 
	} 
} 

void printList(struct Node* head) 
{ 
	while (head != NULL) { 
		cout << head->text << " "; 
		head = head->next; 
	} 
} 

int main() 
{ 
	Node* head = newNode(""); 


	cout << "List before reverse: \n"; 
	printList(head); 

	reverse(head); 

	cout << "\n\nList after reverse: \n"; 
	printList(head); 

	return 0; 
} 

