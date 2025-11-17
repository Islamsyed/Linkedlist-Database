#include "myheader.h"

NODE * delall(NODE *ptr)
{
        NODE * temp=NULL,* pre=NULL;
        if(ptr==NULL)
        {
                printf("list is empty\n");

        }
        else
        {
                temp=ptr;
                while(temp->link!=NULL)
                {
                        pre=temp;
                        temp=temp->link;
                        free(pre);
                }
                free(temp);
                temp=NULL;
        }
        return NULL;

}
