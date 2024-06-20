#include<stdio.h>
int main()
{
    int n,i;
    printf("enter value of n");
    scanf("%d",&n);

    for(i=n;i>=2;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
