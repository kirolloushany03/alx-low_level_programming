Certainly! I'll add an explanation of doubly linked lists to your README:
# C - Doubly Linked Lists

In this project, I learned about using doubly-linked lists in C.

## Doubly Linked Lists

A doubly linked list is a data structure in which each node contains a data element and two pointers, one pointing to the next node in the sequence, and another pointing to the previous node. This structure allows for traversal in both directions, making it more versatile than a singly linked list.

### Structure Definition

struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
};

typedef struct dlistint_s dlistint_t;


- `n`: Represents the data or value stored in the node.
- `prev`: Pointer to the previous node in the sequence.
- `next`: Pointer to the next node in the sequence.

## Files and Functions

### 0. Print list (`0-print_dlistint.c`)

This function prints all the elements of a doubly-linked `dlistint_t` list and returns the number of nodes in the list.

### 1. List length (`1-dlistint_len.c`)

Returns the number of nodes in a doubly-linked `dlistint_t` list.

### 2. Add node at the beginning (`2-add_dnodeint.c`)

Adds a new node at the beginning of a doubly-linked `dlistint_t` list. Returns the address of the new element or `NULL` on failure.

### 3. Add node at the end (`3-add_dnodeint_end.c`)

Adds a new node at the end of a doubly-linked `dlistint_t` list. Returns the address of the new element or `NULL` on failure.

### 4. Free list (`4-free_dlistint.c`)

Frees a doubly-linked `dlistint_t` list.

### 5. Get node at index (`5-get_dnodeint.c`)

Locates a given node of a doubly-linked `dlistint_t` list based on the index. Returns the address of the located node or `NULL` if the node does not exist.

### 6. Sum list (`6-sum_dlistint.c`)

Sums all the data (`n`) of a doubly-linked `dlistint_t` list. Returns 0 if the list is empty.

### 7. Insert at index (`7-insert_dnodeint.c`)

Inserts a new node at a given position in a doubly-linked `dlistint_t` list. Returns the address of the new element or `NULL` on failure.

### 8. Delete at index (`8-delete_dnodeint.c`)

Deletes the node at a given index in a doubly-linked `dlistint_t` list. Returns 1 on success, -1 on failure.

## Usage and Compilation

For correct compilation, ensure that functions defined in `2-add_dnodeint.c` and `3-add_dnodeint_end.c` are included.

## Additional Files

- `100-password`: Text file containing the password for the `crackme4` executable.
  - Use the following command on your terminal for your code to be checked correctly: `echo -n "906609" > 102-result`

- `102-result`: Text file containing the largest palindrome made from a product of two three-digit numbers.

## Crackme5

- `103-keygen.c`: C function that generates passwords for the `crackme5` executable.
  - Usage of the crackme: `./crackme5 username key`
  - Usage of the keygen: `./keygen5 username`
