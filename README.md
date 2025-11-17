
# Linked List Student Record Management

This project implements a **singly linked list** in C to manage student records.
Each student record contains:

* **Roll Number** (int)
* **Name** (char[15])
* **Marks** (float)

The linked list supports basic operations such as adding, searching, deleting, and displaying records.

---

## 📌 Data Structure

```c
typedef struct node{
    int roll;
    char name[15];
    float marks;
    struct node *link;
} NODE;
```

---

## 🚀 Features

### 1. **Add Student Record**

Inserts a new node at the end or beginning based on implementation.

### 2. **Search Student Record**

Searches using *roll number* and prints the complete record.

### 3. **Delete One Record**

Deletes a specific student using roll number.

### 4. **Delete All Records**

Free all nodes and make the list empty.

### 5. **Display All Students**

Prints all student records in list order.
---

## 📂 How to Compile

```
use make command to compile 

## 📘 Summary

This project helps you practice:

* Dynamic memory allocation
* Linked list traversal
* Struct handling
* Pointer manipulation

