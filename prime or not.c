#include<stdio.h>

main()
/*
8. Program Check weather num is prime or not
*/

{
	int a=0,i,n;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			a++;
		}
	}
	if(a==2)
	{
		printf("Number is Prime");
	}
	else
	{
		printf("Number is Not Prime");
	}
	
}