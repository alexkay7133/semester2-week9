
#include <stdio.h>
#include <stdlib.h>

#include "node_structures.h"
#include "node.h"
#include "stack_structures.h"
#include "stack.h"

int main( void ) {

    // create an empty stack
    Stack *stack = createStack();

    // push a node
    push(stack,1);
    pop(stack);
    push(stack,13);
    push(stack,69);
    traverseI(stack->top);  // display the stack

    // free stack memory
    freeNodes( stack->top );
    // free stack
    free(stack);

    return 0;
}
