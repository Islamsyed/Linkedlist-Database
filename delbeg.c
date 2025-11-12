#include "myheader.h"

NODE * delbeg(NODE * ptr)
{
        if(ptr==NULL)
        {
                printf("list is empty\n");
        }
        else if(ptr->link == NULL)
        {
                free(ptr);
                ptr=NULL;
                printf("first node deleted successfully \n");

        }
        else
        {
                NODE * temp=ptr;

                ptr=temp->link;
                free(temp);
                temp=NULL;
                printf("first node deleted successfully \n");
        }
        //save(ptr);
        return ptr;

}
