#include "myheader.h"

NODE * addbeg(NODE * ptr)
{
        NODE * newnode =NULL;

        newnode=calloc(1,sizeof(NODE));
        if(newnode == NULL)
        {
                printf("m/y allocation fails\n");
                exit(0);
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
                        newnode->link =ptr;
                        ptr=newnode;
                }
        }
        return ptr;

}
