#include"header.h"
void stud_show(sll *ptr)
{
	if(ptr==0)
	{
		printf("No records founds\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}

