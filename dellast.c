#include "myheader.h"

NODE * dellast(NODE * ptr)
{
        if(ptr==NULL)
        {
                printf("list is empty\n");
        }
        else if(ptr->link ==NULL)
        {
                free(ptr);
                ptr=NULL;
        }
        else
        {
                NODE * temp=ptr;

                while(temp->link->link!=NULL)
                {
                        temp = temp->link;
                }

                free(temp->link);
                temp->link=NULL;
        }
        return ptr;
}
