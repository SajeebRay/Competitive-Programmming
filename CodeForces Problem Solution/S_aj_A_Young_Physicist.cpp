#include<stdio.h>

int main()

{

        int o,n,a,b,c,s,t,u;

        s=0;

        t=0;

        u=0;

        scanf("%d",&n);

	for (o=0; o<n; o++)

        {

                scanf("%d %d %d",&a,&b,&c);

                s=s+a;

                t=t+b;

                u=u+c;

        }

        if (s==0 && t==0 && u==0) printf("YES\n");

        else printf("NO\n");

        return 0;

}
