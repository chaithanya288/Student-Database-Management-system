#include"header.h"
void stud_save(sll *ptr)
{
	int k;
	char op;
	printf("Enter your choice\n");
	printf("S/s:Save and Exit\nE/e:Exit without saving\n");
	scanf(" %c",&op);
	switch(op)
	{
		case 'S':k=1;break;
		case 'E':printf("Exiting without saving the data\n");exit(0);
		default :printf("Unknown option\n");
	}
	if(k==1)
	{
		FILE *fp=fopen("student.dat","w");
		while(ptr)
		{
			fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("data is saved into the file(student.dat)\n");
		fclose(fp);
	}
}

