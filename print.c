#include "myheader.h"

void print(NODE * ptr)
{
        if(ptr == NULL)
        {
                printf("list is empty\n");
        }
        else{
                NODE * temp=NULL;
                temp=ptr;
                while(temp!=NULL)
                {
                        printf("%d %-5s %-4.2f\n",temp->roll,temp->name,temp->marks);
                        temp=temp->link;
                }
        }
}
