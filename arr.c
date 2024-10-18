#include <stdio.h>
#include <stdlib.h>

/*int main()
{
   int arr[10] = {0,1,2,3,4,5,6,7,8,9};
   int k = 8;
   int i = 0;
   for(i = 0;i < 10;i++)
   {
       if(arr[i] == k)
       {printf("找到了，下标为：%d\n",i);//对0-9成立
       break;}
   }
   if(i >= 10 )//其他则不成立
   {
       printf("不存在\n");
   }
  return 0;
}*/
int main()
{
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int k = 18;
  int count = sizeof(arr) / sizeof(arr[0]);

  int left = 0;
  int right = count - 1;

  while(left <= right)
  {
     int mid = (left + right) / 2;

      if(arr[mid] < k)
      {
       left = mid + 1;
      }
      else if(arr[mid] > k)
      {
          right = mid -1;
      }
      else
      {
          printf("找到了，下标为：%d\n",mid);
          break;
      }
  }
  if(left > right)
     {
         printf("不存在");
     }
  return 0;
}
