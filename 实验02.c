/*#include<stdio.h>
#include<math.h>
	int main(void)
	{
	  float a = 0,b = 0,c = 0;
      printf("Please enter the coefficients a,b,c:\n");
      scanf("%f,%f,%f",&a,&b,&c);
      if(a == 0||(b*b-4*a*c<0))
      {
          printf("error!\n");
      }
      else
      {
      float x1 = ((-b)+sqrt(b*b-4*a*c)) / (2*a);
	  float x2 = ((-b)-sqrt(b*b-4*a*c)) / (2*a);
      printf("x1=%.4f, x2=%.4f\n",x1,x2);
      }
       return 0;
	}*/
/*#include<stdio.h>
   int main(void)
	{
	    int a = 0;//地区
      float b = 0;//质量
      float price = 0;//总价
      scanf("%d,%f",&a,&b);
      if(a<0||a>4)
      {
          printf("Error in Area\n");
          printf("Price: 0.00 ");
      }
      if(a>=0&&a<=4&&(b-(int)(b/1) == 0))//b是整数
      { switch(a)
        {
         case 0: price = (float)(3*(b-1)+10);break;
         case 1: price = (float)(4*(b-1)+10); break;
         case 2: price = (float)(5*(b-1)+15); break;
         case 3: price = (float)(6.5*(b-1)+15); break;
         case 4: price = (float)(10*(b-1)+15); break;
        }
        printf("Price: %.2f\n",price);
      }
      if(a>=0&&a<=4&&(b-(int)(b/1)>0))//b带小数
      {  switch(a)
         {
         case 0: price = (float)(3*(int)(b/1)+10);break;
         case 1: price = (float)(4*(int)(b/1)+10); break;
         case 2: price = (float)(5*(int)(b/1)+15); break;
         case 3: price = (float)(6.5*(int)(b/1)+15); break;
         case 4: price = (float)(10*(int)(b/1)+15); break;
         }
        printf("Price: %.2f\n",price);
      }
       return 0;
	}*/
/*#include <stdio.h>

int main()
{
    int a=0,b=0;
    printf("请选择石头（0）、布（1）、剪刀（2）：\n");
    printf("玩家1：");
    printf("玩家2：");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("平局！");
    }
    else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
    {
        printf("玩家2胜！");
    }
    else
    {
        printf("玩家1胜！");
    }
    return 0;
}*/
/*#include <stdio.h>

   int main()
    {
        int a=0,b=0,c=0;
        scanf("%d%d%d",&a,&b,&c);
        if(((a+b<c)+(a+c<b)+(b+c<a)>0))
        {
            printf("不能构成三角形");
        }
        else if(1)
        {
          if(a==b&&b==c)
          {
              printf("等边三角形");
          }
          else if((a==b)+(b==c)+(a==c)==1)
          {
              printf("等腰三角形");
          }
          else if((a*a+b*b==c*c)+(a*a+c*c==b*b)+(b*b+c*c==a*a)==1)
          {
              printf("直角三角形");
          }
         else
          {
              printf("一般三角形");
          }
        }

        return 0;
     }*/
/*#include <stdio.h>

int main()
    {
       int year = 0;
       scanf("%d",&year);
       if(((year%4)==0&&(year%100)!=0)||(year%400)==0)
       {
           printf("%d是闰年",year);
       }
       else
       {
           printf("%d不是闰年",year);
       }
        return 0;
    }*/
#include<stdio.h>

int main(void)
	{
	  int a=0,b=0,c=0,d=0;
      float r = 0;
      printf("Enter item number:\n");
      printf("Enter unit price:\n");
      printf("Enter purchase date (mm/dd/yy):\n");
      printf("Item Unit Purchase\n");

      scanf("%d",&a);
      scanf("%f",&r);
      scanf("%d/%d/%d",&b,&c,&d);

      printf("%-9d$ %-9.2f%02d%02d%02d\n",a,r,b,c,d);

      return 0;
	}
