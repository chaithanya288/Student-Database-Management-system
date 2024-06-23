#include"header.h"
void stud_sort(sll *ptr)
{
	int c=0,i,j,k;
	char op;
	sll *p1=ptr,*p2=0,*temp1=ptr,temp;
	printf("Enter your choice\n");
	printf("N/n:Sort with name\nP/p:Sort with percentage\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'N':k=1;break;
		case 'P':k=2;break;
		default:printf("Unknown option\n");
	}
	while(temp1)
	{
		c++;
		temp1=temp1->next;
	}
	if(k==1)
	{
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-i-1;j++)
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					temp.rollno=p1->rollno;
					temp.name=malloc(sizeof(char)*10);
					strcpy(temp.name,p1->name);
					temp.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=temp.rollno;
					strcpy(p2->name,temp.name);
					p2->percentage=temp.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
		printf("stud_records are sorted\n");
	}
	if(k==2)
	{
		for(i=0;i<c-1;i++)
		{
			p2=p1->next;
			for(j=0;j<c-i-1;j++)
			{
				if(p1->percentage>p2->percentage)
				{
					temp.rollno=p1->rollno;
					temp.name=malloc(sizeof(char)*20);
					strcpy(temp.name,p1->name);
					temp.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=temp.rollno;
					strcpy(p2->name,temp.name);
					p2->percentage=temp.percentage;
				}
				p2=p2->next;
			}
			p1=p1->next;
		}
		printf("stud_records are sorted\n");
	}

}
