#include<stdio.h>
void display_array(int A[], int n)
{
	for (int i=0;i<n;i++)
		printf("%d ",A[i]);
}
void merge_array(int A1[], int A2[], int A3[],int n1,int n2)
{
	int i;
	for(i=0;i<n1;i++)
	{
		A3[i]=A1[i];
	}
	for(int j=0;j<n2;j++)
	{
		A3[i]=A2[j];
		i++;
	}
}	
int main()
{
	int A1[10],A2[10],A3[20],n1,n2,n3,i,j,temp;
	printf("Enter the number of elements in the 1st array: ");
	scanf("%d",&n1);
	if (n1>10)
		printf("Entered number is larger than array size");
	for (i=0;i<n1;i++)
	{
		printf("Enter the array element: ");
		scanf("%d",&A1[i]);
	}
	printf("Array Elements are: ");
	display_array(A1,n1);
	printf("\n");
	for (i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if (A1[i]>A1[j])
			{
				temp=A1[i];
				A1[i]=A1[j];
				A1[j]=temp;
			}
		}
	}
	printf("Sorted array elements are:");
	display_array(A1,n1);
	printf("\n");
	printf("Enter the number of elements in the 2nd array: ");
	scanf("%d",&n2);
	if (n2>10)
		printf("Entered number is larger than array size");
	for (j=0;j<n2;j++)
	{
		printf("Enter the array elements: ");
		scanf("%d",&A2[j]);
	}
	printf("Array Elements are: ");
	display_array(A2,n2);
	printf("\n");
	for (i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if (A2[i]>A2[j])
			{
				temp=A2[i];
				A2[i]=A2[j];
				A2[j]=temp;
			}
		}
	}
	printf("sorted array elements are:");
	display_array(A2,n2);
	printf("\n");
	merge_array(A1,A2,A3,n1,n2);
	printf("merged array elements are: ");
	display_array(A3,n1+n2);
	n3=n1+n2;
	for (i=0;i<n3;i++)
	{
		for(j=i+1;j<n3;j++)
		{
			if (A3[i]>A3[j])
			{
				temp=A3[i];
				A3[i]=A3[j];
				A3[j]=temp;
			}
		}
	}
	printf("\n");
	printf("sorted merged elements: ");
	display_array(A3,n3);
	printf("\n");
return(0);
}
