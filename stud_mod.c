#include"header.h"
void stud_mod(sll *ptr)
{
	int k,rollno,percentage;
	char op,*name=malloc(sizeof(char)*10);
	printf("Enter which record to search for modification\n");
	printf("R/r:To search a rollno\nN/n:To search a name\nP/p:Percentage based\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'R':k=1;break;
		case 'N':k=2;break;
		case 'P':k=3;break;
		default :printf("unknown option\n");
	}
	if(k==1)
	{
		printf("Enter the rollno to be search\n");
		scanf("%d",&rollno);
		while(ptr)
		{
			if(ptr->rollno==rollno)
			{
				printf("Enter the new student entry\n");
				scanf("%s%f",ptr->name,&ptr->percentage);
				return;
			}
			ptr=ptr->next;
		}
		printf("%d rollno is not found inthe stud_records\n",rollno);
	}
	else if(k==2)
	{
		int c=0,i=0,j,flag,*arr=malloc(sizeof(int)*5);;
		sll *temp=ptr;
		printf("Enter the name to be search\n");
		scanf("%s",name);
		while(ptr)
		{
			if(strcmp(ptr->name,name)==0)
			{
				c++;
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				arr[i++]=ptr->rollno;
			}
			ptr=ptr->next;
		}
		if(c==1)
		{
			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("Enter the name and percentage\n");
					scanf("%s%f",temp->name,&temp->percentage);
					return;
				}
				temp=temp->next;
			}
		}
		if(c>1)
		{
			printf("Enter rollno of stud to modify\n");
			scanf("%d",&rollno);
			for(j=0,flag=0;j<i;j++)
			{
				if(arr[j]==rollno)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				while(temp)
				{
			        	if(arr[j]==temp->rollno)
					{
						printf("Enter the name and percentage\n");
						scanf("%s%f",temp->name,&temp->percentage);
						return;
					}
					temp=temp->next;
				}
			}
			else
			printf("Entered rollno is not match with the above students\n");
		}
		else
			printf("%s name is not found inthe stud_records\n",name);

		
	}
	else if(k==3)
	{
		printf("Enter the rollno to be search\n");
		scanf("%d",&percentage);
		while(ptr)
		{
			if(ptr->percentage==percentage)
			{
				printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
				return;
			}
			ptr=ptr->next;
		}
		printf("%d percentage is not found inthe stud_records\n",percentage);
	}
}
