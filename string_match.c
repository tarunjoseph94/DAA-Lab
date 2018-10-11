#include <stdio.h>

void main()
{
	char main_str[20],sub[10];
	int i,j,stlen,sublen,flag=0;
	printf("Enter a string\n");
	scanf("%s",main_str);
	printf("Enter the sub-string\n");
	scanf("%s",sub);
	// printf("%s\n",main_str);
	for (stlen = 0; main_str[stlen]!='\0'; ++stlen);
	for (sublen = 0; sub[sublen]!='\0'; ++sublen);	
	
	// printf("%d\n",stlen );
	// printf("%d\n",sublen );
	for ( i = 0; i < stlen; ++i)
	{
		j=0;
		while(j<sublen && sub[j]==main_str[i+j])
		{
			j++;
			if (j==sublen)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}


		}
	}
	if(flag==1)
	{
		printf("Substring Found\n");
	}
	else
	{
		printf("Substring not found\n");
	}
}