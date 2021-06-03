/*  A graph is abstractly a collection of vertices which are labelled by
non-negative integers, and a collection of edges. A graph called an
undirected graph if we talk of merely the presence of an edge between
vertices i and j, rather than its direction. 

For example, the following is a graph:


In this problem, you are given the edges in an undirected graph. An
edge is a pair of non-negative integers (i, j) which indicates that
the vetex i is connected to vetex j by an edge.

Afterwards, you will be given a vertex number n. You have to output
the list of vertices which are connected n by an edge, in the order in
which the edges were input.

Input

You are given the following.

1. The first line contains an integer, E, between 1 and 1000

2. This is followed by E lines, where each containing a pair of
numbers i and j where i and j are both non-negative integers <=
34,000. No edge will be listed more than once.

3. The last line contains a non-negative integer n <= 34,000. n is
assured to be a vertex listed in one of the E lines in part (2).

Output

You have to output the list of nodes to which n has an edge, in the
order in which the edges were input, one line for each vertex.  

*/ 

#include <stdio.h> 
#include <stdlib.h> 
 
 
  struct node 
   { 
    int vertex; 
    struct node *next; 
   }; 
 
struct list_entry 
{ 
 
struct node *head; 
 
struct node *tail; 
 
}; 
 
struct list_entry list_entries[34000]; 
 
void init_list_entries() 
  {      int i;      for ( i=0 ; i<100 ; i++ ) 
     { 
        list_entries[i].head =         list_entries[i].tail = 
        NULL; 
     } 
  } 
 
struct node * make_node ( int data ) 
{ 
 
  struct node *temp = (struct node *)malloc(sizeof(struct node)); 
 
  temp -> vertex = data; 
 
  temp -> next = NULL; 
 
  return temp; 
 
} 
 
void insert_at_end(int a, int b) 
 
 { 
 
  struct node *node1; 
 
  struct node *node2; 
 
  node1 = make_node (a); 
 
  if(list_entries[b].head == NULL) 
  { 
 
    list_entries[b].head = node1; 
 
    list_entries[b].tail = node1; 
  } 
   
  else 
  { 
 
    list_entries[b].tail->next = node1; 
 
    list_entries[b].tail = node1; 
  } 
 
  node2 = make_node(b); 
 
  if(list_entries[a].head == NULL) 
  { 
 
    list_entries[a].head = node2; 
 
    list_entries[a].tail = node2; 
 
  } 
  else 
  { 
 
    list_entries[a].tail->next = node2; 
 
    list_entries[a].tail = node2; 
 
  } 
 
  return; 
 
} 
 
void print_adjacent_vertices_of(int n) 
 
{ 
 
  struct node *current = list_entries[n].head;   while(current != NULL) 
  { 
 
    printf("%d\n",current->vertex); 
 
    current = current->next; 
 
  } 
 
  return; 
 
} 
 
int main() 
 
{ 
 
  int num_edges; 
 
  int a; 
 
  int b; 
 
  int n; 
 
  int i=0; 
 
  scanf("%d", &num_edges); 
 
  for ( i=0; i<num_edges ; i++)  
  { 
 
    scanf ( "%d", & a); 
 
    scanf ( "%d", & b); 
 
    insert_at_end(a,b); 
  } 
 
  scanf("%d",&n); 
 
  print_adjacent_vertices_of(n); 
 
}
