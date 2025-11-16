# Linked List Database (C Project)

This project implements a mini database system using a **singly linked list** in C.  
It supports insertion, deletion, searching, updating, and displaying records using dynamic memory allocation.

## Features
- Insert record  
  - At beginning  
  - At end  
  - Sorted insert  
- Delete record  
  - First node  
  - Last node  
  - All nodes  
- Search for a record  
- Update an existing record  
- Display all records  
- Menu-driven program

## Data Structure
```c
typedef struct node {
    int data;
    struct node *next;
} NODE;

