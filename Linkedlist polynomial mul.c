#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct node
{
    int data;
    int expo;
    struct node*next;
};

int main()
{
   struct node*a1=(struct node*)malloc(sizeof(struct node*));
    struct node*a2=(struct node*)malloc(sizeof(struct node*));
     struct node*a3=(struct node*)malloc(sizeof(struct node*));
      struct node*b1=(struct node*)malloc(sizeof(struct node*));
       struct node*b2=(struct node*)malloc(sizeof(struct node*));
        struct node*b3=(struct node*)malloc(sizeof(struct node*));
        struct node*c1=(struct node*)malloc(sizeof(struct node*));
        struct node*c2=(struct node*)malloc(sizeof(struct node*));
        struct node*c3=(struct node*)malloc(sizeof(struct node*));
a1->data=2;
a2->data=2;
a3->data=2;
b1->data=2;
b2->data=2;
b3->data=2;
a1->next=a2;
a2->next=a3;
a3->next=NULL;
b1->next=b2;
b2->next=b3;
b3->next=NULL;
c1->next=c2;
c2->next=c3;
c3->next=NULL;
struct node*head1;
head1=a1;
struct node*head2;
head2=b1;
struct node*head3;
head3=c3;
int res1;
int res2;
while(head1!=NULL)
{
    while(head2!=NULL)
    {
        
            res1=head1->data*head2->data;
            res2=head1->expo+head2->expo;
            
        head2=head2->next;
    }
    head1=head1->next;
}
    return 0;
}

