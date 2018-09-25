#include <stdio.h>
#include <stdlib.h>

/* Simple node for list */
struct node{
  int data; /* Data held by node */
  struct node *next; /* Address of next node */
};

int main()
{
  /* Now create several nodes */
  struct node n1;
  struct node n2;
  struct node n3;
  struct node n4;
  struct node n5;

  /* Give each node data */
  n1.data = 22;
  n2.data = 10;
  n3.data = 9;
  n4.data = -45;
  n5.data = 1024;

  /* Now link them all together (create the linked list) */

  n1.next = &n2; /* n1.next is assigned the address of n2 */
  n2.next = &n3; /* n2.next is assigned the address of n3 */
  n3.next = &n4; /* n3.next is assigned the address of n4 */
  n4.next = &n5; /* n4.next is assigned the address of n5 */
  n5.next = NULL; /* n5.next is assigned NULL to indicate it's the end of the list */

  /* Now to iterate over the list and print every value */

  /* We need a pointer that will move from node to node starting
   * from the first node.
   */
  struct node *current = &n1; //Get address of first node 

  while(current != NULL)
  {
    fprintf(stdout, "Data: %d\n", current->data);
    current = current->next; //Get the address of the next node
  }

  return EXIT_SUCCESS;
}
