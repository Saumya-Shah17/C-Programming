#include<stdio.h>
``
int is(int a[],int x,int l,int h)
{
    int p;
    if(h>=l && a[l]<=x && a[h]>=x)
    {
        p=l+(((x-a[l])/(a[h]-a[l]))*(h-l));
        if(x==a[p])
            return p;
        else if(x>a[p])
            return is(a,x,p+1,h);
        else
            return is(a,x,l,p-1);
    }
    else
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
    if(is(a,x,0,n-1)==-1)
        printf("N!");
    else
        printf("Found at index %d\n",is(a,x,0,n-1));
    return 0;
}
