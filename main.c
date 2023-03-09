#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
//    int n,m,k;
//    scanf("%d %d %d", &n, &m, &k);
//    int i;
//    for(i=1;i<=m;i++)
//    {
//        printf("%d ",n*i);
//    }
//    for(i=m/n*n+n;i<k;i=i+n) //<- 2 sposoby
//    {
//        printf("%d ",i);
//    }

//    int n;
//    scanf("%d",&n);
//    int s=1;
//    int i;
//    for(i=2;i<=n;i++)
//    {
//        s=s*i;
//    }
//    printf("%d!=%d",n,s);


//zad5 -1
//    int n;
//    int s=0;
//    int i;
//    scanf("%d",&n);
//    for (i=1;i<=n;i++)
//    {
//        s+=i*i;
//    }
//    printf("0^2+1^2+...+%d^2=%d",n,s);

//zad5 -2
//    int k;
//    int s=0;
//    int i=1;
//    scanf("%d",&k);
//    while(s<k)
//    {
//        i=i+1;
//        s=s+i*i;
//
//    }
//    printf("0^2+1^2+...+%d^2=%d",i-1,s-i*i);


//    int n;
//    scanf("%d",&n);
//    int s=1;
//    int i;
//    for(i=2;i<=n;i=i+2)
//    {
//        s=s*i;
//    }
//    printf("%d",s);

//    int n;
//    int pierwsza,druga,temp;
//    pierwsza=1;
//    druga=1;
//    scanf("%d",&n);
//    int i;
//    for(i=1;i<=n;i++)
//    {
//        temp=pierwsza;
//        pierwsza=druga;
//        druga=druga+temp;
//    }
//    printf("F_%d=%d",n,temp);

    int n;
    int pierwsza,druga,temp;
    pierwsza=0;
    druga=0;
    scanf("%d %d",&pierwsza,&druga);
    int i;
    for(i=1;i<=n;i++)
    {
        if (pierwsza>druga)
        {
            pierwsza = pierwsza%druga;
        }
        else
        {
            druga = druga%pierwsza;
        }
        if (pierwsza > druga)
        {
            temp=druga;
        }
    }
    printf("%d",temp);
    return 0;
}
