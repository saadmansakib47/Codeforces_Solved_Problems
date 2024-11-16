#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t,a,b,c ;
    scanf("%d",&t) ;
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c) ;
        if(a==b)
            printf("%d\n",c) ;
        else if(b==c)
            printf("%d\n",a) ;
        else if(c==a)
           printf("%d\n",b);
    }
    return 0 ;
}

