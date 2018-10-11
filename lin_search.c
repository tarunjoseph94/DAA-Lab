#include <stdio.h>
#include <time.h>

void main()
{
	clock_t start,end;
	int a[1000000],n;
	int elem,i,flag=0,j;
	double total_time;
	printf("Enter the number of values\n");
	scanf("%d",&n);
	printf("Array elements are generating one by one\n");
	
	for (i = 0; i < n; i++)
	{
		//scanf("%d",&a[i]);
		a[i]=random(10);
		 printf("%d\n",a[i]);
	}
	
	printf("Enter the elements to search\n");
	scanf("%d",&elem);
	start=clock();
	for (j = 0; j<1000; ++j)
	{
		/* code */
	for (i = 0; i < n; i++)
	{
		if (a[i]==elem)
		{
			flag=1;
		}
	}
	}

	end=clock();
	// printf("\n");
	total_time = (end - start) / CLOCKS_PER_SEC;
	printf("Time taken is %f\n",total_time);	
	if(flag==1)
	{
		printf("found \n");
	}
	else
	{
		printf("not found\n");
	}
}