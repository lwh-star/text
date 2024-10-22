#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//:发现的一些新函数
/*int main()
{
    char arr1[20] = "hello JXUFE";
    char arr2[20] = {0};

    strcpy(arr2,arr1);//将数组arr1的元素赋给arr2
    printf("%s\n",arr2);
    return 0;
}*/
/*int main()
{
    char arr[20] = "hello JXUFE";
    memset(arr,'h',5);//将数值arr的前五个元素替换成h
    printf("%s\n",arr);
    return 0;
}*/
/*int main()
{
    char arr[20] = "hello JXUFE";
    memset(arr+6,'h',5);//从下标为6的数组元素开始替换5个h
    printf("%s\n",arr);
    return 0;
}*/
//:自定义函数

/*void  exchange(int *px,int *py)
{
     int z = 0;
     z = *px;
     *px = *py;
     *py = z;

}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);

    printf("交换前a=%d,b=%d\n",a,b);

    exchange(&a,&b);

    printf("交换后a=%d,b=%d\n",a,b);

    return 0;
}*/
int right(int y)
{
    int j = 0;
    for(j = 2;j<=y-1;j++)
    {
        if(y % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i = 0;
    int count = 0;
    int n = 0;
    scanf("%d",&n);

    for(i = 2;i<=n-1;i++)
    {
        if(right(i))
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("2~n内的质数个数=%d\n",count);
    return 0;
}
