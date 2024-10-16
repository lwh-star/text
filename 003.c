#include <stdio.h>
#include <stdlib.h>

/*int max(int x,int y)
{
    if (x > y)
    return x;
    else
    return y;
}
int main()
{
   int a = 0,b = 0;

    scanf("%d%d",&a,&b);

    int r = max(a,b);

    printf("%d\n",r);


    printf("Hello world!\n");
    return 0;
}*/
int main()
{
  int x = 0;
  int y = 0;
  scanf("%d\n",&x);
  if (x > 1)
   y = 1;
     else if(x==0)
   y = 0;
  else
    y = 1;
   printf("%d\n",y);

   return 0;
}
