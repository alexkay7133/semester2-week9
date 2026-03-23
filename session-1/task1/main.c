
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"

int main( void ) {

    // create some nodes
    Node *first = createNode(createData(1));
    Node *second = createNode(createData(2));
    Node *third = createNode(createData(3));

    Node *new1 = createNode(createData(7));
    Node *new2 = createNode(createData(16));

    // link the nodes
    first->next = second;
    second->next = new1;
    new1->next = third;
    third->next = new2;
    
    // print the data by following links
    traverseI( first );
    traverseW( first );
    traverseR( first );

    // free all node memory (using traversal)
    freeNodes( first );

    return 0;
}
