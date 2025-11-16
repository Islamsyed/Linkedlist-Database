#include "myheader.h"
extern int size;
NODE * sync(NODE * ptr)
{
        NODE var;
        NODE * newnode = NULL,* temp = NULL;
        FILE * fp=NULL;
        fp=fopen("source.txt","r");

        if(fp == NULL)
        {
                printf("file not opened \n");
                return ptr;
        }

        while(fread(&var,size,1,fp))
        {
                newnode =calloc(1,sizeof(NODE));
                if(newnode == NULL)
                {
                        printf("m/y allocation failed\n");
                }
                else
                {
                        newnode->roll=var.roll;
                        strcpy(newnode->name,var.name);
                        newnode->marks=var.marks;

                        if(ptr==NULL)
                                ptr=newnode;
                        else
                        {
                                temp=ptr;
                                while(temp->link!=NULL)
                                {
                                        temp=temp->link;
                                }
                                temp->link=newnode;
                        }
                }
        }
        printf("ALL DATA SYNC SUCCESSFULLY\n");
        fclose(fp);
        return ptr;
}
