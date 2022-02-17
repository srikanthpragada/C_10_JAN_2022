// Linked list

#include <stdio.h>

struct node
{
   char name[30];
   struct node * next;  // self-referential structure
};

void main()
{
 struct node *root = NULL, *current, *previous;
 char name [30];

    while(1)
    {
       printf("Enter name [end to stop] :");
       gets(name);

       if(stricmp(name,"end") == 0)
         break;

       // Allocate memory for a node
       current = (struct node *)  malloc(sizeof(struct node));

       strcpy(current->name, name);
       current->next = NULL;

       if (root == NULL) // is it first node??
           root = current;
       else
           previous -> next = current;

       previous = current;
    }

    // Print all names
    current = root;
    while(current != NULL) {
       puts(current->name);
       current = current -> next;
    }


}
