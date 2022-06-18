#include<stdio.h>
#include<stdlib.h>

struct list
{
	int age;
	char name;
	struct list *next;
};

int main()
{

struct list n1,n2,n3;
struct list*p;
printf("Enter age and name \n");
scanf("%d %s",&n1.age,n1.name);
scanf("%d %s",&n2.age,n2.name);
scanf("%d %s",&n3.age,n3.name);

n1.next=&n2;
n2.next=&n3;
n3.next=NULL;

p=&n1;
printf("%d %s \n",n1.age,n1.name);
printf("%d %s \n",n2.age,n2.name);
printf("%d %s \n",n3.name,n3.age);

return 0;
}
