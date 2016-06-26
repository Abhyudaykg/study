#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//.................................................structure defination...................................................//
typedef struct student
{
unsigned int rollno;
char name[20];
float mark;
struct student *next;
}ST;

//................................................function declaration....................................................//
void readfile(ST **,char *);		//	read data from file for creat linkedlist...
void dinextlay(ST *,unsigned int);	//	print the data..
void add_middle(ST **);			//	add the data....
void fsave(ST *,char *);		//	save data in file..
unsigned int countdata(unsigned int);	//	count the number of data entered
int checkdata(ST *,unsigned int);	//	Entered rollno present or not check it ....
void rev(ST **ptr,unsigned int c);	//	reverse the string

//.........................................................................................................................//
