#include <stdio.h>
#include <stdlib.h>

int main()
{
   int day;

   scanf("%d",&day);

   switch (day)
   {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("weekday\n");
      break;
    case 6:
    case 7:
      printf("weekend\n");
      break;
   }
   return 0;
}
