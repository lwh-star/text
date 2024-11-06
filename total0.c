#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int main()
{
    int x,j,i,k,y=1,l=1;
    float p,s=0;
    for(j=1;j<=10;j++)
    {
        x=1*j;
        y=y*x;
        for(i=3;i<=2*10+1;i+=2)
        {
            k=1*i;
            l=l*k;
        }
        p=(float)y/(float)l;
        s+=p;
    }
    printf("%.3f",s+1);
    return 0;
}*/

/*int main()
{
    int n,j,i,k,y = 1;
    double p, s = 0.0;
    scanf("%d", &n);

    for (j = 1; j <= n; j++)
    {
        y = y * j;
        int l = 1;
        for (i = 3,k = 1;k<=j; i += 2,k++)
            {
              l = l * i;
            }

        p = (double)y / (double)l;
        s += p;
    }
    printf("%.3f\n", s+1);
    return 0;
}*/


/*int main()
{
    int i = 0;
    int day = 0;
    float s = 0;
    for(i=2;i<=100;i*=2)
    {
        day ++;
        s=s+0.8*i;
    }

   printf("%f",s/day);
)*/

void reverse(char* str)
{
    char tem = *str;
    int sz = strlen(str)-1;
    *str = *(str+sz);
    *(str+sz)='\0';
    if(strlen(str+1)>=2)
    {
        reverse(str+1);
    }
    *(str+sz)=tem;
}

int main()
{
    char ch[]="abcdef";
    reverse(ch);
    printf("%s",ch);
    return 0;
}
