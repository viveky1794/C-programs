/*	this code is written to clear doubt about Dangling pointer and free funcation.
 *
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
char (*db)[10]=NULL;
int i,cnt,del;
printf("Enter no of string cnt\n");
__fpurge(stdin);
scanf("%d",&cnt);

for(i=0;i<cnt;i++)
{
db = realloc(db,(i+1)*sizeof(*db));
__fpurge(stdin);
scanf("%s",db[i]);
}
printf("%s\n",db[0]);

for(i=0;i<cnt;i++)
{
printf("index:%d: %s\n",i,db[i]);
}

printf("enter index no.to delte\ni: ");
__fpurge(stdin);
scanf("%d",&del);

memmove(db[del],db[del+1],sizeof(*db)*(cnt-del-1));
//free(db+cnt); // to avoid memeory leakage
//free(db[cnt]); // to avoid memeory leakage
//db+cnt=NULL; // to avoid dangling pointer
cnt--;
db=realloc(db,cnt*sizeof(*db));
for(i=0;i<cnt;i++)
printf("index:%d: %s\n",i,db[i]);

free(db);
db=NULL;
}
