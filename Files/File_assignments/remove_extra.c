#include"headerfile.h"


void remove_extra(void)
{
	char *buf=NULL;
	int i=0,size;
	FILE *fp,*fp1;

	fp = fopen("data.txt","r");

	if(fp == NULL)
	{
		puts("NOthing");
		return;
	}

	fseek(fp,0,2);
	size = ftell(fp)+1;
	rewind(fp);
	buf = calloc(1,size);

	fread(buf,size,1,fp);
	fclose(fp);

	for(i=0;buf[i]; i++)
	{
		if((buf[i] == ' ' && buf[i+1] == ' ') || (buf[i] == '\n' && buf[i+1] == '\n'))
		{		
			memmove(buf+i,buf+i+1,strlen(buf+i+1)+1);
			i--;
		}
	}
fp1 = fopen("data1.txt","wb");
fwrite(buf,size,1,fp1);

fclose(fp1);
printf("%s\n",buf);

free(buf);
buf = NULL;
}


/* this processor is working but loop is not termination that is why i am write another code 
 *
 do
 {
 ch1 = fgetc(fp);
 ch2 = fgetc(fp);

 if(ch1 == ' ' && ch2 == ' ')
 {
 while( fgetc(fp) ==  ' ');
 fseek(fp,-1,1);
 fputc(ch1,fp1);
 continue;
 }
 fputc(ch1,fp1);
 fseek(fp,-1,1);
 }while(ch2 != '\0');


 fclose(fp);
 fclose(fp1);
 remove("data.txt");
 rename("data.txt","data1.txt");

 }

*/
