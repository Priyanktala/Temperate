#include<stdio.h>
main()
/*
2. Write C program to print multiplication table of any number.
*/

{
	int i=1,n;
	
	printf("Enter Number For Multiplication Table=\n\n");
	scanf("%d",&n);
	
	while(i<=10)
	{
	printf("%d*%d=%d\n",n,i,n*i);
	i++;
	}

}