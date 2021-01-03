#include<stdio.h>
int main()
{
    int k,n,w,soldier;
    scanf("%d%d%d",&k,&n,&w);
    w=w*(w+1)/2;
    soldier=k*w-n;
    if(soldier<=0)
        soldier=0;
        printf("%d\n",soldier);
        return 0;
}

