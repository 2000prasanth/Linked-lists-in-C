#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*head;
struct node*end;
void traverse1()
{
	struct node*p;
	p=head;
	while(p->right!=NULL)
	{
		printf("%d \n",p->data);
		p=p->right;
	}
	printf("%d",end->data);
}
void traverse2()
{
	struct node*q;
	q=end;
	while(q->left!=NULL)
	{
		printf("%d \n",q->data);
		q=q->left;
	}
	printf("%d \n",head->data);
//	printf("%d",end->data);
}
void insert1(int a)
{
  struct node*newnode=(struct node*)malloc(sizeof(struct node*));
  newnode->data=a;
  newnode->right=head;
  head->left=newnode;
  newnode->left=NULL;
  head=newnode;
}
void insert3(int b)
{
	struct node*newnode3=(struct node*)malloc(sizeof(struct node*));
	newnode3->data=b;
	newnode3->right=NULL;
	newnode3->left=end;
	end->right=newnode3;
	end=newnode3;
}
void delete1()
{
	struct node*temp;
	temp=head;
	head=temp->right;
	head->left=NULL;
temp->right=NULL;

	free(temp);
	
}
void delete3()
{
	struct node*temp;
	temp=end;
	end=temp->left;
	end->right=NULL;
//	temp->left=NULL;
	free(temp);
//	end->left=NULL;

	
}
int insert2(int d,int pos1,int pos2)
{
struct node*n=(struct node*)malloc(sizeof(struct node*));
n->data=d;
struct node*t1;
struct node*t2;
head=t1;
end=t2;
while(t1->right!=NULL)
{
	if(t1->data==pos1)
	{
		t1->right=n;
		n->left=t1;
	}
	t1=t1->right;
}
while(t2->left!=NULL)
{
	if(t2->data==pos2)
	{
	t2->left=n;
	n->right=t2;	
	}
	t2=t2->left;
}
return n->data;
}
int main()
{
	struct node*n1;
	n1=(struct node*)malloc(sizeof(struct node*));
n1->left=NULL;
n1->right=NULL;
n1->data=0;
	head=n1;
	end=n1;
	int data;
	int data1;
	insert1(10);
	insert1(20);
	insert1(30);
	insert1(40);
	insert1(50);
	insert3(400);
	insert3(500);
/*	int n;
	int n3;
	printf("enter no of nodes to insert @first position");
	scanf("%d",&n);
	for(int i=0;i<nli++)
	{
		printf("enter data \n");
		scanf("%d",&data);
		insert1(data);
	}
	printf("enter no of nodes to insert @last position \n");
	scanf("%d",&n3);
	for(inti=0;i<n3;i++)
	{
		printf("enter data \n");
		scanf("%d",&data1);
		insert3(data1);
	}*/
	traverse1();

	printf("\n \n \n");
//delete3();
//delete3();
insert2(1000,40,30);
traverse1();
    //traverse2();

	return 0;
}
