#include<stdio.h>
``
int ts(int a[],int x,int s,int e)
{
    int m1,m2;
    m1=s+(e-s)/3;
    m2=e-(e-s)/3;
    while(s<=e)
    {
        if(a[m1]==x)
            return m1;
        else if(a[m2]==x)
            return m2;
        else if(x<a[m1])
            return ts(a,x,s,m1-1);
        else if(a[m2]>x)
            return ts(a,x,m1+1,m2-1);
        else if(a[m2]<x)
            return ts(a,x,m2+1,e);
    }
    return -1;
}
int main()
{
    int a[50],n,i,x;
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
    if(ts(a,x,0,n-1)==-1)
        printf("Element not found\n");
    else
        printf("Found at index %d\n",ts(a,x,0,n-1));
}
