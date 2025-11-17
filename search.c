void search(NODE *ptr, int key)
{
    NODE *temp = ptr;

    if(temp == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(temp != NULL)
    {
        if(temp->roll == key)
        {
            printf("Record Found:\n");
            printf("Roll  : %d\n", temp->roll);
            printf("Name  : %s\n", temp->name);
            printf("Marks : %.2f\n", temp->marks);
            return;
        }
        temp = temp->link;
    }

    printf("Record not found\n");
}
