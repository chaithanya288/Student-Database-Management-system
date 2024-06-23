#include"header.h"
void stud_del(sll **ptr)
{
	char op;
	int rollno,k;
	char *name;
	sll *del,*prev=0;
	printf("Enter your choice from the below\n");
	printf("R/r:Enter rollno to delete\n");
	printf("N/n:Enter name to delete\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'R':k=1;break;
		case 'N':k=2;break;
		default :printf("Unknown choice\n");
	}
	if(k==1)
	{
		printf("Enter the rollno:");
		scanf("%d",&rollno);
		del=*ptr;
		while(del)
		{
			if(del->rollno==rollno)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("%d rollno is not found inthe stud_records\n",rollno);
	}
	else if(k==2)
	{
		printf("Enter the name:");
		name=malloc(sizeof(char)*10);
		scanf("%s",name);
		del=*ptr;
		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				if(del==*ptr)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("%s name is not found inthe stud_records\n",name);
	}
}

