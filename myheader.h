#ifndef _MYHEADER_H_
#define _MYHEADER_H_

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
        int roll;
        char name[15];
        float marks;
        struct node * link;
}NODE;
extern int size;

NODE * addbeg(NODE * ptr);
NODE * addlast(NODE * ptr);
void print(NODE * ptr);
NODE * delbeg(NODE * ptr);
NODE * dellast(NODE * ptr);
NODE * addsort(NODE * ptr);
void save(NODE * ptr);
NODE * sync(NODE * ptr);
NODE * middlenode(NODE * ptr);
void primenodes(NODE * ptr);
int prime(int);
NODE * delall(NODE *);

#endif
