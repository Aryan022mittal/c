#include <stdio.h>
#include <stdlib.h>
void randominsert(int);
void randomdelete();
void search();
void display();
void reverse();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
int main()
{
    int choice = 10, choice2 = 10, item;
    while (choice != 0)
    {
        printf("Press 1 for insertion\n");
        printf("Press 2 for deletion\n");
        printf("Press 3 for searching\n");
        printf("Press 4 for reversing\n");
        printf("Press any other key to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted:\n");
            scanf("%d", &item);
                randominsert(item);
                display();
                break;
        case 2:
                randomdelete();
                display();
            break;
        case 3:
            search();
            break;
        case 4:
            reverse();
            display();
            break;
        default:
            printf("Successfully exited!!\n");
            choice = 0;
        }
    }
    return 0;
}

void randominsert(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int i, loc;
    printf("Enter the location");
    scanf("%d", &loc);
    ptr->data = item;
    temp = head;
    if(loc==1)
    {
        ptr->next=head;
        head=ptr;
        return;
    }
    for (i = 1; i < loc-1; i++)
    {
        
        if (temp == NULL)
        {
            printf("\ncan't insert\n");
            return;
        }
        temp = temp->next;
    }
     ptr->next = temp->next;
     temp->next = ptr;
}

void randomdelete()
{
    struct node *ptr, *ptr1;
    int index, i;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter the position of element to be deleted:\n");
        scanf("%d", &index);
        ptr = head;
        for (i = 0; i < index; i++)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("There are less than %d elements in the list\n", index);
                return;
            }
        }
        ptr1->next = ptr->next;
        free(ptr);
    }
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter the element you want to search:\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("Element found at location %d\n", i + 1);
                flag = 0;
                return;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Element not found\n");
        }
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
void reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}