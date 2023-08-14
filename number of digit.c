#include<stdio.h>

main()
/*
3. Write C program to count number of digits in a number
*/

{
	int i=0,n;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		i++;
	}
		printf("Total Digit=%d\n",i);

}