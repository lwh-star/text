/*#include <stdio.h>

void solve(int n) {
    // 遍历每一个数，寻找亲和数对
    for (int a = 4; a < n; a++) {
        int b = 0;
        int sum_a = 0;
        // 计算a的因子和
        for (int i = 1; i <= a / 2; i++) {
            if (a % i == 0) {
                sum_a += i;
            }
        }
        b = sum_a;
        int sum_b = 0;
        // 计算b的因子和
        for (int j = 1; j <= b / 2; j++) {
            if (b % j == 0) {
                sum_b += j;
            }
        }
        // 判断是否为亲和数对
        if (sum_b == a && a < b) {
            printf("(%d,%d)", a, b);
        }
    }
}

int main(void) {
    solve(3000);
    return 0;
}*/
/*#include<stdio.h>
//编写最大公约数GCD函数

long long int my_least(long long int x,long long int y)
{
  while(y!=0)
  {
    long long int tem = y;
    y = x % y;
    x = tem;
  }
  return x;
}

//编写最小公倍数LCM函数
long long int my_most(long long int x,long long int y,long long int z)
{
  return x * y / z;
}

int main(void)
{

    long long int n,m;
    scanf("%lld%lld",&n,&m);
    if(n<0||m<0){
      printf("Input Error");
    }
    else {
      long long int least=my_least(n,m);
      long long int most=my_most(n,m,least);
     printf("%lld %lld",least,most);
    }
    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int is_sushu(int x)
{
    int a,b,c,d;
    for(a=x;a>1;a--)
    {
        for(b=2;b<a;b++)
        {
            if(a%b==0)
                break;
        }
        if(b>=a)
        {
          c = b;
          break;
        }
    }
    for(a=x;a<2*a;a++)
    {
        for(b=2;b<a;b++)
        {
            if(a%b==0)
                break;
        }
        if(b>=a)
        {
          d = b;
          break;
        }
    }
    if(x-c!=d-x)
     return (x-c)<(d-x)?c:d;
    else
     return c;

}

int main()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0,j = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&j);
        int k = is_sushu(j);
        int m = (int)fabs(j-k);
        printf("%d %d\n",k,m);
    }
    return 0;
}*/
/*#include <stdio.h>
int is_right(int x)
{
    int counta=0,countb=0;
    do
     {
        if(x%2==1)
            counta++;
        else
            countb++;
        x=x/2;
     }
     while(x!=0);
     if(counta>countb){
        return 1;
     }
     else
        return 2;

}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,k,countA=0,countB=0;
    for(i=n;i<=m;i++)
    {
       if(is_right(i)==1)
       {
           countA++;
       }
       else if(is_right(i)==2){
        countB++;
       }
    }
    printf("%d %d\n",countA,countB);
    return 0;
}*/
/*#include <stdio.h>
int is_right(int x,int y,int z)
{
    if(y<1||y>12||z<1||z>31)
        return 0;

    else if(x%4==0&&x%100!=0||x%400==0)
    {
        if(y!=1&&y!=3&&y!=5&&y!=7&&y!=8&&y!=10&&y!=12&&z==31)
            return 0;
        else if(y==2&&z>29)
            return 0;
    }
    else if(!(x%4==0&&x%100!=0||x%400==0))
    {
        if(y!=1&&y!=3&&y!=5&&y!=7&&y!=8&&y!=10&&y!=12&&z>30)
            return 0;
        else if(y==2&&z>28)
        return 0;
    }
    else
        return 1;
}
int main()
{
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    if(is_right(year,month,day))
        printf("YES");
    else
        printf("NO");
    return 0;
}*/

/*#include <stdio.h>
int is_sushu(int x)
{
    int y=0;
    for(y=2;y<x;y++)
    {
        if(x%y==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i=0,j=0;
    for(i=n;j<m;i++)
    {
        if(is_sushu(i)&&is_sushu(i+2))
        {
            printf("%d,%d\n",i,i+2);
            j++;
        }

    }

    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 判断日期是否合法的函数
int is_right(int x, int y, int z)
{
    if (y < 1 || y > 12 || z < 1 || z > 31)
        return 0;

    else if (x % 4 == 0 && x % 100!= 0 || x % 400 == 0)
    {
        if (y!= 1 && y!= 3 && y!= 5 && y!= 7 && y!= 8 && y!= 10 && y!= 12 && z == 31)
            return 0;
        else if (y == 2 && z > 29)
            return 0;
    }
    else if (!(x % 4 == 0 && x % 100!= 0 || x % 400 == 0))
    {
        if (y!= 1 && y!= 3 && y!= 5 && y!= 7 && y!= 8 && y!= 10 && y!= 12 && z > 30)
            return 0;
        else if (y == 2 && z > 28)
            return 0;
    }
    else
        return 1;
}

int is_huiwen(char ch[])
{
    int left = 0;
    int right = 7;
    int count = 0;
    for (left = 0; left < right; left++, right--)
    {
        if (ch[left] == ch[right])
            count++;
    }
    if (count == 4)
        return 1;
    return 0;
}

int main()
{
    char ch[8] = {0};
    int j;
    for (j = 0; j < 8; j++)
    {
        scanf("%c", &ch[j]);
    }
    int year = ch[0] * 1000 + ch[1] * 100 + ch[2] * 10 + ch[3];
    int month = ch[4] * 10 + ch[5];
    int day = ch[6] * 10 + ch[7];

    if (is_right(year, month, day) && is_huiwen(ch))
        printf("YES");
    else
        printf("NO");

    return 0;
}*/
/*#include <stdio.h>

// 计算阶乘的函数
int factorial(int n) {
    if (n == 0)
        return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num1, num2;
    char op;
    while (scanf("%d %c", &num1, &op) == 2) {
        if (op == '!') {
            // 处理阶乘
            int result = factorial(num1);
            printf("%d\n", result);
        } else {
            scanf("%d", &num2);
            int result;
            switch (op) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    if (num2 == 0) {
                        printf("error\n");
                        continue;
                    }
                    result = num1 / num2;
                    break;
                case '%':
                    if (num2 == 0) {
                        printf("error\n");
                        continue;
                    }
                    result = num1 % num2;
                    break;
            }
            printf("%d\n", result);
        }
    }
    return 0;
}*/
#include <stdio.h>
int getWeek(int date)
{
	/**********Begin**********/
	int year=date/1000;
    int month=date%1000/100;
    int day=date%100;
    int i,days=0;
    for(i=1900;i<year;i++){
      days=days+365;
      if(i%4==0&&i%100!=0||i%400==0){
      days=days+1;}
    }
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
     arr[2]=29;
     for(i=1;i<month;i++)
      days=days+arr[i];
    int total_days=days+day;
    int week=total_days%7;
    return week;
    /**********End**********/
}

void printWeek(int w)
{
	/**********Begin**********/
	switch(w)
    {
      case 0:printf("Sun"); break;
      case 1:printf("Mon"); break;
      case 2:printf("Tue"); break;
      case 3:printf("Wed"); break;
      case 4:printf("Thu"); break;
      case 5:printf("Fri"); break;
      case 6: printf("Sat"); break;
    }






    /**********End**********/
}
int main()
{
	int date;
   scanf("%d",&date);
   int week = getWeek(date);
   printWeek(week);
	return 0;
}

