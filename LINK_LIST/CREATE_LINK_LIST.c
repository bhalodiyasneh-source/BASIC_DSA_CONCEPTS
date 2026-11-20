#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
}*temp,*first,*ptr,*temp_Starting,*temp_Ending,*Trans;
void main()
{
    int ch;
    char ch1;
    printf("\n 1 __Create link list__");
    printf("\n 2 __Display link list__");
    printf("\n 3 __Insert link node at starting__"); 
    printf("\n 4 __Insert link node at starting _ then print Link_List__");
    printf("\n 5 __Insert link node at ending__"); 
    printf("\n 6 __Insert link node at ending _ then print Link_List__");
    printf("\n 7 EXIT");
    
    
    do
    {
        printf("\n Enter the choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if (first==NULL)
                {
                    printf("\nCreate Link List");
                    ptr=(struct node*)malloc(sizeof(struct node));
                    printf("\nEnter a value of info part\n");
                    scanf("%d",&ptr->info);
                    first=ptr;
                    printf("\n Do you continue !! Enter y   ");
                    ch1=getch();
                    while (ch1=='y')
                    {
                        printf("\n enter a next node info part\n");
                        temp=(struct node*)malloc(sizeof(struct node));
                        scanf("%d",&temp->info);
                        ptr->link=temp;
                        ptr=temp;
                        printf("\n Do you continue this!! Enter y   ");
                        ch1=getch();
                    }
                    ptr->link=NULL;
                    printf("\n __Link list is over__\n");
                    break;
                }
                else
                {
                    printf("\n Not Valid!!\n");
                    break;
                }    
            case 2:
                printf("\n__Disply link list__\n");
                if(first==NULL)
                {
                    printf("\nLink List Not Exist !! (PLEASE CREATE LINK LIST!!)\n");
                    break;
                }
                else
                {
                    ptr=first;
                    while (ptr!=NULL)
                    {
                        printf("%d\n",ptr->info);
                        ptr=ptr->link;
                    }
                    break;
                }    
            case 3:
                if (first==NULL)
                {
                    printf("\nLink List Not Exist Its Your First Node!!\n");
                    temp_Starting=(struct node*)malloc(sizeof(struct node));
                    printf("\n __Insert at beginning into Link List__");
                    printf("\n Enter info valu of this node\n");
                    scanf("%d",&temp_Starting->info);
                    temp_Starting->link=NULL;
                    first=temp_Starting;
                    break;
                }
                else
                {
                    temp_Starting=(struct node*)malloc(sizeof(struct node));
                    printf("\n __Insert at beginning into Link List__\n");
                    printf("\n Enter info valu of this node\n");
                    scanf("%d",&temp_Starting->info);
                    temp_Starting->link=first;
                    first=temp_Starting;
                    break;
                }    
            case 4:
                    printf("\n__Disply link list__\n");
                    ptr=first;
                    while (ptr!=NULL)
                    {
                        printf("%d\n",ptr->info);
                        ptr=ptr->link;
                    }
                    break;
            case 5:
                if(first==NULL)
                {
                    printf("\n__Link List Not Exist Its Your End Node__\n");
                    temp_Ending=(struct node*)malloc(sizeof(struct node));
                    printf("\n__Enter a last node into link list___ at END \n");
                    printf("\n Enter info valu of this node\n");
                    scanf("%d",&temp_Ending->info);
                    temp_Ending->link=NULL;
                    first=temp_Ending;
                    break;
                }
                else
                {
                    temp_Ending=(struct node*)malloc(sizeof(struct node));
                    printf("\n__Enter a last node into link list___ at END \n");
                    printf("\n Enter info valu of this node \n");
                    scanf("%d",&temp_Ending->info);
                    temp_Ending->link=NULL;
                    ptr=first;
                        while(ptr->link!=NULL)
                        {
                            ptr=ptr->link;
                        }
                    ptr->link=temp_Ending;
                    break;
                }    
            case 6:
                    printf("\n__Disply link list__ \n");
                    ptr=first;
                    while (ptr!=NULL)
                    {
                        printf("%d\n",ptr->info);
                        ptr=ptr->link;
                    }
                    break;
            case 7:
                    exit(0);
                    break;        
        }
    }
    while (ch !=0);
    getch();
    
}