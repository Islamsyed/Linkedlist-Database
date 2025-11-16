#include "myheader.h"

NODE * addsort(NODE * ptr)
{
    NODE * newnode = NULL;
    newnode =calloc(1,sizeof(NODE));
    if(newnode == NULL)
    {
        printf("m/y allocation fail");
    }
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
        if(ptr->link == NULL)
        {
                if((ptr->roll)>(newnode->roll))
                {
                        newnode->link = ptr;
                        ptr = newnode;
                }
                else
                {
                        ptr->link = newnode;
                }
        }
        else
        {
                NODE * temp= NULL,* pre = NULL;
                temp = ptr;

                while((temp!=NULL)&&((temp->roll)<(newnode->roll)))
                {
                        pre=temp;
                        temp=temp->link;
                }
                if(pre == NULL)
                {
                        newnode->link=ptr;
                        ptr=newnode;
                }
                else
                {
                        pre->link=newnode;
                        newnode->link=temp;
                }

        }
    }
    return ptr;
}
