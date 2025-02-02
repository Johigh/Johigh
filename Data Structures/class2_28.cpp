/*
Doubly Linked List - includesa  link back to the previous node in each node in list
- Advantages: Can traverse in both directions, Easy to reverse the list, if at a node then can go to any node. In simple NOT possible to reach previous.
- Disadvantage: Memory space taken up by doubly linked list is larger due to requiring another pointer i.e., previous. - Have to take care of more pointers,
due to the traversing, therefore a performance bottleneck occurs. 

    - Applications: 
        - Deck of cards in a game. 
        - Browser history/cache
        - Most Recently USed (MRU) 
        - other data structs. - Stacks, hash table, binary tree 
- nodes contain next link, a second link pointing to previous node, and data. - Require head and tail pointer. 
- Basic Operations: 
    - insertion: inserts a new node - front, end, before a node, after a node. 
    - deleltion: dlete node from given position in list - first, last, node given data. 
    - traversal: technique of visiting each node in linked list. 2 types. - forward & backward
    - reverse: reverses thenodes in list = first becomes last, and last first. 
    - search: used to search for a particular node in list -  Need to traverse list until matching data FOUND.  

Circularly Linked List - singly linked node structure, but can be doubly linked list - no head or tail. last node linked to first.
- cannot traverse like other linked lists: "while(current->next != nullptr)"
- Advantages:
    - can go tany node and traverse from there. Need to stop when visti the same node again.
    - going from first to last is quicker, due to them being linked. (one step)
- Disadvantages: 
    - Reversing circular linked list cumbersome 
    - difficult to find beginning and end due to circularly linked, can cause infinite loop
    - cannot go back to previous node in single step, have to traverse entire list from first. 
-Applications :
    - multi - programming OS, schedules multiple programs. Each program given dedicated timestamp to execute after resource passed. 
    - Games w/ multiple players, each node represents a player recieving a chance to play. 
    - Circular queue, can remove two pointers front and rear that is used for the queue, instead can use only one pointer
- Basic Operations: 
    - insert - can insert in empty, at beginning, at end of list, 
    - deletion - locating node that is to be deleted and then freeing memory; maintain two additional pointers
    - traversal - visiting each node. in linear list easy, IN CIRCULAR hard 
- Special NODE = 'Cursor' - 2 positions of interest, back and first. 
- Functions 
    - 

Worksheet #5 - Questions 
- 

*/

