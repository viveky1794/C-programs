#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct student
{
int roll;
char name[20];
float per;
struct student *link;
};
int cnt;
typedef struct student record;
typedef record head;
