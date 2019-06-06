#include<stdio.h>
#include<string.h>

char *mystrcpy(char *dest,const char *src) 
{
int i,len=0;

len=strlen(src);

if(len == 0)
return NULL;
else
{
for(i=0;i<=len;i++)
{
dest[i] = src[i];
}
return dest;
}
return NULL;
}

main()
{
char dest[10],src[10],*p;
puts("Enter String\n");
scanf("%s %s",src,dest);
//p = mystrcpy(dest+2,src);
p = strcpy(src+2,src);
printf("%s\n",p);
}
