#include<stdio.h>
``
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int fib(int n)
{
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int fs(int a[],int o,int k,int x,int n)
{
    int i;
    i=min(o+fib(k-2),n-1);
    if(x==a[i])
        return i;
    else if(x>a[i])
        return fs(a,i,k-1,x,n);
    else
        return fs(a,o,k-2,x,n);
}
int main()
{
    int a[50],x,n,i,k=0;
    qq
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter x:");
    scanf("%d",&x);
    while(fib(k)<=n)
        k++;
    if(fib(k)==0 || fs(a,-1,k,x,n)<0)
        printf("Element not found\n");
    else
    {
        printf("Element found at index %d\n",fs(a,-1,k,x,n));
    }
}
