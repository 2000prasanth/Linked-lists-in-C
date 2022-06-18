#include <stdio.h>
#include <stdlib.h>

struct node
{
	//int address;
    int data;
    struct node*next;
};

struct node*head;
struct node*end;

int insert1(int d)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
     newnode->data=d;
     //newnode->address=g;
     newnode->next=head;
     head=newnode;
  return 0;   
}
void insert3(int t)
{
   
     struct node*newnode1=(struct node*)malloc(sizeof(struct node*));
     newnode1->data=t;
    
    end->next=newnode1;
     newnode1->next=NULL;
     end=newnode1;
}
/*int insert2(int r,int g,int w)
{
	 struct node*newnode=(struct node*)malloc(sizeof(struct node*));
	 struct node*temp;
	 temp=head;
	 while(temp->next!=NULL);
	 {
	 	if(temp->address==g)
	 	{
	 	newnode->next=temp->next;
	 		temp->next=newnode;
	 		newnode->address=w;
	 		newnode->data=r;
		 }
		 temp=temp->next;
	 }
	 return 0; 
}*/
void delete1()
{
struct node*t;
t=head;
	head=head->next;
	free(t);
	
}
void delete2()
{
struct node*te;
struct node*pr;
te=head;
pr=end;
while(te->next!=NULL)
{
	if(te->next=pr)
	{
		te->next=NULL;
		end=te;
		//free(pr);
		
	}
	te=te->next;
}

}
void tra()
{
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        //printf("%d  ",ptr->address);
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
	int n;
	int r;
   struct node*n1;
   n1=(struct node*)malloc(sizeof(struct node*));
n1->next=NULL;
n1->data=0;
//n1->address=0;
head=n1;
end=n1;
/*printf("enter no of nodes to insert \n");
scanf("%d",&n);
printf("entering data @ first position \n");
for(int i=0;i<n;i++)
{
printf("enter data \n");
scanf("%d",&r);
insert1(r);
}
printf("entering no of nodes at last position \n");
int l;
int dg
scanf("%d",&l);
for(int i=0;i<l;i++)
{
	printf("enter data \n");
	scanf("%d",&dg);
	insert3(dg);
}*/

insert1(1);// first=data, second=address
insert1(2);
insert1(3);
insert1(4);
insert3(3);
insert3(10);
delete1();
//insert2(100,2,90);//first=data, second= address to be replaced third=newaddress
tra();
    return 0;
}

