#include"headerfile.h"

int main()
{
	FILE *fp,*fp1;
	int i=0;
	char buf[100];

	fp =fopen("data.txt","r");
	fp1 = fopen("data1.txt","w");
	while(fgets(buf,100,fp))
	{
	i++;
	if(i==2)
		continue;
	fputs(buf,fp1);
	fputs("\n",fp1);
	}
	fclose(fp);
	fclose(fp);
	remove("data.txt");
	rename("data1.txt","data.txt");
	return 0;
}
