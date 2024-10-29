#include <stdio.h>
#include <stdlib.h>
/*习题4.6
#define M 50
#define R 0.05
习题4.6
int main()
{
   int i;
   float sum1 = 0,sum2 = 0;
   for(i = 1;i <= 12;i++)
   {
       sum1 = sum1 + M;
       sum2 = sum2 + R * M;
   }
   printf("sum1=%.2f sum2=%.2f sum1+sum2=%.2f\n",sum1,sum2,sum1+sum2);

   return 0;
}*/

/*习题4.8
int main()
{
    int a = 0;
    scanf("%d",&a);

    int b = a / 7;
    int c = a % 7;

    printf("%d周%d天",b,c);

    return 0;
}*/

/*习题4.9
int main()
{
    int a = 0;
    scanf("%d",&a);

    int b = a / 10;
    int c = a % 10;

    printf("%d%d",c,b);

    return 0;
}*/


//习题4.10
int main()
{
    long long a = 0;
    int b = 0,count = 0;
    printf("请输入一个任意位数的整数:");
    scanf("%lld",&a);
    while(a>=10)
    {
      a = a / 10;
      count++;
    }
    printf("请再次输入该任意位整数:");
    scanf("%lld",&a);

    for(int i = 1;i <= (count + 1);i++)
    {
       b = a % 10;
       a = a / 10;
       printf("%d",b);
    }
    return 0;
}
