/*  You are given a sequence of integers terminated with a -1. The -1 is
not part of the input sequence.


Next, you are given a positive number N.

You have to create a linked list with the input sequence of integers
as entries. You can use the following structure.

 struct node{
 	int data;
	struct node *next;
 };


Now, you have to delete all but the last N elements from the linked
list, and print the resulting list. (i.e. The resulting list will
consist of only the last N elements from the list.)


If N is longer than the length of the linked list, you must print -1.

While printing, the entries of the list must be separated by a single
space. 

Sample Input
------------
3 4 5 6 -1
1

Sample Output
-------------
6 
*/

#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
int list_length;
struct node* create_node ( int n )
{
struct node *new_node;
new_node = (struct node *) malloc ( sizeof(struct node) );
new_node->data = n;
new_node->next = NULL;
return new_node;
}
struct node* create_list ( struct node *head )
{
int number;
struct node *current_node, *new_node;
scanf("%d",&number);
if(number != -1){
head = create_node ( number );
current_node = head;
list_length++;
scanf ( "%d", &number );
while ( number != -1 ){
new_node = create_node ( number );
current_node->next = new_node;
list_length++;
current_node = new_node; /* advance to next node */
scanf ( "%d", &number );
}
}
return head;
}
/* Delete the first num nodes from the list */
struct node *delete_first ( int num, struct node *head )
{
int i=1;
struct node *current_node = head;
struct node *next_node;
while ( i <= num ) {
next_node = current_node->next;
free(current_node);
current_node = next_node;
i++;
}
head = current_node;
return head;
}
void print_list ( struct node *head )
{
struct node * current_node;
if ( head == NULL ){
return;
}
current_node = head;
while ( current_node != NULL ) {
printf ( "%d ", current_node->data );
current_node = current_node->next;
}
printf("\n");
return;
}
int main()
{
int number;
int pruned_length=0;
struct node *head;
head = create_list ( head );
scanf("%d", &pruned_length);
if(pruned_length > list_length){
printf ( "-1\n" );
return 0;
}else{
head=delete_first(list_length-pruned_length, head);
print_list(head);
}
return 0;
}
