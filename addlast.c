#include "myheader.h"

NODE * addlast(NODE * ptr)
{
        NODE * newnode = NULL;
        newnode = calloc(1,sizeof(NODE));
        if(newnode==NULL)
        {
                printf("m/y allocation fail\n");
        }
        else{
                printf("enter the rollno\n");
                scanf("%d",&newnode->roll);
                printf("enter the name\n");
                scanf("%s",newnode->name);
                printf("enter the marks\n");
                scanf("%f",&newnode->marks);

                if(ptr==NULL)
                {
                        ptr=newnode;
                }
                else
                {
                        NODE *temp=NULL;
                        temp=ptr;
                        while(temp->link!=NULL)
                        {
                                temp=temp->link;
                        }
                        temp->link=newnode;
                }
        }
        return ptr;
}
