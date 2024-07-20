#include<stdio.h>
``
int bs(int a[],int x,int s,int e)
{
    int m;
    while(s<=e)
    {
        m=(s+e)/2;
        if(a[m]==x)
            return m;
        else if(a[m]>x)
            return bs(a,x,s,m-1);
        else
            return bs(a,x,m+1,e);
    }
    return -1;
}
int main()
{
    int a[50],n,i,x,c;
    qq
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    home:
        printf("Enter x:");
        scanf("%d",&x);
        i=0;
        if(a[i]==x)
            printf("Found at index 0");
        else
        {
            i=1;
            while (a[i]<=x && i<n)
                i=i*2;
            if(bs(a,x,i/2,i)==-1)
            {
                printf("Sorry!! Element not found\nContinue?\t[1]Yes\t[2]No");
                scanf("%d",&c);
                if(c==1)
                    goto home;
                else
                    printf("Thanks!!");
            }
            else
                printf("Found at index %d\n",bs(a,x,i/2,i));
        }
    return 0;
}
