#include<stdio.h>

main()
/*
6. Write C program to calculate factorial of a number
*/

{
	int i=1,n,fact=1;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
		printf("%d\n",fact);

}