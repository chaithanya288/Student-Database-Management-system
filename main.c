#include"header.h"
void main()
{
	sll *headptr=0;
	char op;
	while(1)
	{
		printf("Enter your choice\n");
		printf("A/a:Add new record\nD/d:Delete a record\nS/s:Show the list\nM/m:Modify a record\nV/v:Save\nE/e:Exit\nT/t:Sort the list\nL/l:Delete all the records\nR/r:Reverse the list\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'A':stud_add(&headptr);break;
			case 'D':stud_del(&headptr);break;
			case 'S':stud_show(headptr);break;
			case 'M':stud_mod(headptr);break;
			case 'V':stud_save(headptr);break;
			case 'E':printf("Exiting form the program\n");exit(0);
			case 'T':stud_sort(headptr);break;
			case 'L':delete_all(&headptr);break;
			case 'R':reverse_links(&headptr);break;
		}
	}
}
void delete_all(sll **ptr)
{
	int c=1;
	sll *del=*ptr;
	while(del)
	{
		*ptr=del->next;
		free(del);
		sleep(1);
		printf("%d node is deleted\n",c++);
		del=del->next;
	}
	printf("All the stud_records are deleted\n");
}
void reverse_links(sll **ptr)
{
	int c=0,i=0;
	sll *temp1=*ptr;
	while(temp1)
	{
		c++;
		temp1=temp1->next;
	}
	sll **arr=malloc(sizeof(sll*)*c);
	temp1=*ptr;
	while(temp1)
	{
		arr[i++]=temp1;
		temp1=temp1->next;
	}
	for(i=0;i<c;i++)
		arr[i]->next=arr[i-1];
	arr[0]->next=0;
	*ptr=arr[c-1];
}
