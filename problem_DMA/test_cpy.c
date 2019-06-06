/*	this code is written to clear doubt about Dangling pointer and free funcation.
 *
 */
#include<stdio.h>

#include<string.h>
#include<stdlib.h>
char *getstring(void)
{
char *p=NULL;
p = realloc(p,10);
__fpurge(stdin);
scanf("%s",p);
return p;
}
int main()
{
char *db[10];
int i,cnt,del;
printf("Enter no of string cnt\n");
__fpurge(stdin);
scanf("%d",&cnt);

for(i=0;i<cnt;i++)
{
__fpurge(stdin);
db[i]=getstring();
}

for(i=0;i<cnt;i++)
{
printf("index:%d: %s\n",i,db[i]);
}

printf("enter index no.to delte\ni: ");
__fpurge(stdin);
scanf("%d",&del);

free(db[del]); // to avoid memeory leakage
db[cnt]=NULL; // to avoid dangling pointer
memmove(db[del],db[del+1],sizeof(*db)*(cnt-del-1));
cnt--;

for(i=0;i<cnt;i++)
printf("index:%d: %s\n",i,db[i]);

//free(db);

return 0;
}
