#include<stdio.h>

main()
/*
7. Write C program print out Fibonacci series. (0,1,1,2,3,5,8…)
*/

{
	int a=0,b=1,c=0,n;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	printf("%d,%d\n",a,b);
	
	while(c<=n)
	{
		c=a+b;
		a=b;
		b=c;
		
		printf("%d\t",a);
	}
	
	
}