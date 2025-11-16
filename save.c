#include "myheader.h"
extern int size;
void save(NODE * ptr)
{
        FILE * fp=NULL;
        fp=fopen("source.txt","w");
        if(ptr==NULL)
        {
                printf("list is empty\n");
        }
        else
        {
                NODE * temp=ptr;
                while(temp!=NULL)
                {
                        fwrite(temp,size,1,fp);
                        temp = temp->link;
                }
                printf("ALL DATA COPIED INTO FILE SUCCESSFULLY\n");

        }
        fclose(fp);

}
