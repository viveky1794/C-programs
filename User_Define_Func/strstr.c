#include"headerfile.h"

int u_strstr(char *arr,char *brr)
{

	int a,i=0,j=0,cnt=0;

	a = strlen(brr);
	while(arr[j] != '\0')
	{

		if(brr[i] == arr[j])
		{
			cnt++;
			i++;
			
			if(cnt == a)
				return (arr+j)-arr-(a-1);
		
		}


		
		j++;

	}

return 0;

}
