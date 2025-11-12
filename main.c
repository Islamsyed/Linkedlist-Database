#include "myheader.h"

int size=sizeof(NODE)-sizeof(NODE *);
int main(){
        int choice;
        NODE *head =NULL,* mid=NULL;

        head=sync(head);//sync the file if data exist in the file

        while(1)
        {
                printf("1 :addbeg 2 :addlast 3 :print data 4 :delbeg  5 :dellast 6 :addsort 7 :save 8 :middlenode 9 :exit\n");
                printf("enter the choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1 : head=addbeg(head);
                                 break;
                        case 2 : head=addlast(head);
                                 break;
                        case 3 : print(head);
                                 break;
                        case 4 : head=delbeg(head);
                                 break;
                        case 5 : head=dellast(head);
                                 break;
                        case 6 : head=addsort(head);
                                 break;
                        case 7 : save(head);
                                 break;
                        case 8 : mid=middlenode(head);
                                 break;
                        case 9 : exit(0);
                                 break;
                        default :printf("enter correct choice\n");
                }
        }
        return 0;

}
