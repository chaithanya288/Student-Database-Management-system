#include"header.h"
void stud_add(sll **ptr)
{
	static int i=1;
	sll *new=malloc(sizeof(sll));
	new->name=malloc(sizeof(char)*10);
	printf("Enter the student name and percentage\n");
	scanf("%s%f",new->name,&new->percentage);
	new->rollno=i++;
	new->next=*ptr;
	*ptr=new;
}


