#include <stdio.h>
#include <stdlib.h>

 /*int main()
{
    int i = 1;

    while (i<10)
  {
    if (5 == i)
     break;

     printf("%d\n",i);//打印1，2，3，4

      i++;

  }
    return 0;
}*/

int main()
{
    int i = 1;

    while (i <= 10)
    {  i++;

      if (5 == i)
       continue;

       printf("%d\n",i);//打印2，3，4，6，7，8，9，10，11
    }
    return 0;
}
