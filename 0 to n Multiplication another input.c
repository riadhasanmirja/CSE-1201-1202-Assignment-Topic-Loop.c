#include <stdio.h>
int main()
{
          int n,x,i;
          scanf("%d%d",&n,&x);

          for(i=0;i<=n;i++)
          {
                    if (x !=0 && i%x==0)
                    {
                              printf("%d\n",i);
                    }

          }

          return 0;
}


