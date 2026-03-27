
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "list_structures.h"
#include "list.h"

int main( void ) {

    // create an empty list
    List *list = createList();

    // add some nodes
    addNode(list,(Node *)NULL,1); // add at head - special case - pass NULL
    addNode(list, list->head, 2);
    addNode(list, list->head->next, 3);
    addNode(list, list->head->next->next, 4);

    // display the list
    traverseI(list->head);

    // add and delete more nodes with addNode() and removeNode()
    freeNode(removeNode(list, list->head->next));
    // deallocate deleted nodes - test with valgrind to check this


    traverseI(list->head);
    // free list memory
    freeNodes( list->head );

    return 0;
}
