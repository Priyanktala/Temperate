#include<stdio.h>

main()
/*
4. Write C program to find sum of first and last digit of a number.
*/

{
	int first,last,sum,n;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	
		first=n;
		sum=first+last;
		
		printf("Sum of First Digit and Last Digit=%d\n",sum);

}