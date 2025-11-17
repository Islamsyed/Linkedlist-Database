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

NODE * addbeg(NODE *);
NODE * addlast(NODE *);
void print(NODE *);
NODE * delbeg(NODE *);
NODE * dellast(NODE *);
NODE * addsort(NODE *);
void save(NODE *);
NODE * sync(NODE *);
NODE * middlenode(NODE *);
void primenodes(NODE *);
int prime(int);
NODE * delall(NODE *);
void search(NODE *,int);

#endif
