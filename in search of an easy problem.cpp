#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a==1){
            printf("HARD");
            exit(0);

		}

	}
	printf("EASY");
	return 0;
}
