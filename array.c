#include<stdio.h>
int main()
{
	int A[50],n,i,sum=0;
	printf("How many elements are you want to add: ");
	scanf("%d",&n);
	if (n>50)
		printf("Entered number is larger than array size");
	else
		printf("Enter the elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		sum=sum+A[i];	
	}
	printf("Sum of the given numbers is %d \n",sum);
return(0);
}
