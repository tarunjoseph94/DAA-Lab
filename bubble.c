#include <stdio.h>
#include <time.h>
void main()
{
	int a[100000],i,j,temp,total_time,n;
	clock_t start,end;
	printf("Enter the numbebr \n");
	scanf("%d",&n);
	printf("Enter the Elements of the array\n");
	for ( i = 0; i < n; ++i)
	{
		a[i]=random(100);
	}
	start=clock();
	for ( i = 0; i < n-1; ++i)
	{
		for ( j=i+1; j < n; ++j)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
	end=clock();
	total_time=(end-start)/CLOCKS_PER_SEC;
	printf("Sorted array\n");
	for ( i = 0; i < n; ++i)
	{
		printf("%d\n",a[i] );
	}
	printf("Total time is %d\n",total_time);

} 