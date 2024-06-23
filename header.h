#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct student
{
	int rollno;
	char *name;
	float percentage;
	struct student *next;
}sll;
void stud_add(sll **);
void stud_del(sll **);
void stud_show(sll *);
void stud_mod(sll *);
void stud_save(sll *);
void stud_sort(sll *);
void delete_all(sll **);
void reverse_links(sll **);
