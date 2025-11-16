#include "myheader.h"

NODE * middlenode(NODE * ptr)
{
        NODE * slow =NULL, * fast = NULL;

        if(ptr == NULL)
        {
                printf("list is empty\n");
        }
        else
        {
                slow=fast=ptr;

                while((fast->link!=NULL) && (fast->link->link!=NULL))
                {
                        fast=fast->link->link;
                        slow=slow->link;
                }

                if(fast->link!=NULL)
                {
                        printf("%d %s %f\n",slow->roll,slow->name,slow->marks);
                        printf("%d %s %f\n",slow->link->roll,slow->link->name,slow->marks);
                }
                else
                {
                        printf(" %d %s %f\n",slow->roll,slow->name,slow->marks);
                }
        }
        return slow;
}
