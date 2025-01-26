/*
This class uses C++ 

- Differences btwn Array and Linked List
    - array is data struct that contains a collection of similar type data elements; Linked list non primitive data struct. contains collection of unlinked
    elements known as nodes.
    - in array elements belong to indexes. 
    - In linked list must start from beginning and work through end 
    - Array accesses element fast, linked list takes linear time (slower)
    - Operations in array consume alot of time, whereas performance for linked lists is fast. 
    - arrays are fixed size. Linked lists are dynamic
    etc. 
- Arrays vs Linked List 
    - Linked list advantage = 
        - dynamic size 
        - ease of insertion/deletion
    - Linked list drawback = 
        - random access is not allowed. We have to access elements sequentially starting from the first node. NO binary seach 
        - extra memory space for a pointer is required with each element of list 
        - Arrays have better cach locality that can make big diff in performance. 
List Operations 
- Typical ADT:
    - create, insert item at head, insert at tail, insert at spec. pos., insert item in order, retrieve, retrieve with value/key, delete item, traverse, etc.

- List as an ADT
    - don't give clients access to internals
    - insertion adds a copy of clinets data to list 
    - retrieval gives client a copy of data 

Linked List 
- made up of series of objects, called nodes. List nodes is a distinct object.
- benefit to creating list node class is that it can be reused by linked implemenattions for the stack and q data struct. 
- Objects in link class contain an element feild to store the element value, and a next field to store a pointer to next node.

-Singly Linked List 
    - is concrete data struct, sequence of nodes.
    - node stores elements and link to next node
    - Structure - uses linked allocation, each node may appear anywhere in memory. 
        - mem required for each node equals memory req for variables
            - 4 bytes = linked list (pointer)
            - 8 bytes =
        - next node - pointers store addresses of next node in list
 

*/