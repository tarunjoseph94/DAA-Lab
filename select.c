#include <stdio.h>
#include <time.h>
void main()
{
	int a[100000],n,i,time1,j,min,temp;
	clock_t start,end;
	printf("Enter the Elements of the size of n\n");
	scanf("%d",&n);
	printf("Enter the Elements of the array\n");

	for ( i = 0; i < n; ++i)
	{
		a[i]=random(100);
	}
	start=clock();
	for ( i = 0; i < n-1; ++i)
	{
		min=i;
		for ( j=i+1; j < n; ++j)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	}
	end=clock();

	printf("Sorted array\n");
	for ( i = 0; i < n; ++i)
	{
		printf("%d\n",a[i] );
	}

	time1=(end-start)/CLOCKS_PER_SEC;
		printf("%d\n",time1 );

} 