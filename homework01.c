#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//作业3.5
/*int main()
{   int i = 0;
    int cha = 0;
    int arr[20] = {0};
    for(i = 0;i <20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0;i <19;i++)
    {
      cha = arr[i+1] -arr[i];
      printf("%d\n",cha);
    }
    return 0;
}*/

//作业3.6
/*int main()

{
    char arr[20] = {0};
    int i = 0;
    int max = 0;

    printf("请输入一个字符串:");
    scanf("%s",arr);
    int sz = sizeof(arr) - 1;

    for(i = 0;i <= sz;i++)
    {
        if(max <= arr[i])
        {
            max = arr[i];
        }
        if(max > arr[i])
        {
            max = max;
        }

    }
    printf("ASCLL码最大字符为:%c",max);
    return 0;
}*/

//作业3.8
/*int main()

{
   char arr[20] = {0};
   scanf("%s",arr);
   if(strcmp(arr,"\0") == 0)
   {
       printf("空串");
   }
   else
   {
       printf("%s",arr);
   }

    return 0;
}*/

//作业3.9
/*#define N 5
int main()
{
    char stuid[10],name[20];
    float score = 0;
    FILE *outfile;
    int i = 0;
    char a = 0,b = 0,c = 0;

    outfile = fopen("e:\\scores.txt","r");
    if(!(outfile))
    {
        printf("打开文件错误");
    }
    fscanf(outfile,"%s%s%s",&a,&b,&c);


    for(i = 0;i < N;i++)
    {
       fscanf(outfile,"%s%s%f",stuid,name,&score);

       printf("%s %s %f\n",stuid,name,score);
    }
    fclose(outfile);
    return 0;
}*/

int main()
{
    int i = 0;
    char arr[20] = {0};
    FILE *infile;
    scanf("%s",arr);

    infile = fopen("e:\\www.txt","w");
    if(!(infile))
    {
        printf("文件打开错误");
    }
    for(i = 0;i<(sizeof(arr) - 1);i++)
    {
     fprintf(infile,"%c\n",arr[i]);
    }
    fclose(infile);
    return 0;
}

