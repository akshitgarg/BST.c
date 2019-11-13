#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *right;
  struct node *left;
};
struct node *tree=NULL;
struct node *createnode()
{
     struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}
void insert_element(struct node *tree , int item)
{
    struct node *t,*temp;
    t=createnode();
    t->data=item;
    t->left=NULL;
    t->right=NULL;
    if(tree==NULL)
    {
        tree=t;
        printf("%d is inserted at first",item);
    }
    else
    {
        temp=tree;
        while(temp!=NULL)
        {
            if(temp->data<item)
            { 
                if(temp->right==NULL)
                {
                    temp->right=t;
                       printf("%d is inserted at right",item);
                }
              temp=temp->right;
            }
            else if(temp->data>item)
            {
                if(temp->left==NULL)
                {
                    temp->left=t;
                       printf("%d is inserted at left",item);
                }
             temp=temp->left;
            }
        }
    }
}
/*void pre_order(struct node *tree)
{
    while(tree!=NULL)
    {
        pre_order(tree->left);
        printf("%d",tree->data);
        pre_order(tree->right);
    }
}*/
int main()
{
    int choice,item;
    while(1)
    {
        printf("\nenter 1 to insert element in BST");
        //printf("\n enter 2 to pre_order");
        printf("\nenter 2 to exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
         switch(choice)
        {
          case 1:
           printf("enter number you want to insert");
           scanf("%d",&item);
            insert_element(tree,item);
           break;
         /* case 2:
           pre_order(tree);
           break;*/
           case 2:
            exit(0);
            break;
         default:
         printf("invalid case");
       }
    }
    return 0;
}









