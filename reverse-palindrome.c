#include<stdio.h>

main()
/*
5. Write C program to enter a number and print its reverse & check weather num is palindrome or not?
*/

{
	int a,b=0,temp,n;
	
	printf("Enter value=");
	scanf("%d",&n);
	
	temp=n;
	
	while(n>0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	printf("revers number=%d\n",b);
	if(temp==b)
	{
		printf("Number is Palindrome");
	}
	else
	{	
		printf("Number is not Palindrome");
	}

}