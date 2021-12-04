#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the length of the ladder: ");
	scanf("%d",&n);
	int i,j;
	for (i = 1; i<=n ; i++)
	{
		for (j = 1; j<=i ; j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
