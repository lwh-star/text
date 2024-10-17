#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    char ch = '0';

    while((ch = getchar()) != EOF)

    putchar (ch);//打印输入的字符

    return 0;
}*/
/*int main()
{
    char password[20] = {0};

    printf("请输入密码:");

    scanf("%s",password);//读取缓存区
    getchar();//读取缓存区留下的一个'\n'？

    printf("请确认密码:(Y/N)");

    int r = getchar();//读取字符

    if('Y'== r)
    printf("Yes\n");

    else
    printf("No\n");

    return 0;
}*/
int main()
{
    char password[20] = {'0'};
    printf("请输入密码:");
    scanf("%s",password);//读取缓存区

    int ch = 0;

    while((ch = getchar()) != '\n');
    {
        ;
    }//清空scanf读取后的缓存区
    printf("请确认密码:(Y/N)");

    int r = getchar();//读取输入字符并判断
    if('Y' == r)
     {
      printf("Yes\n");
     }

    else
     {
      printf("No\n");
     }
    return 0;
}
