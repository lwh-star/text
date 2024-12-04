/*#include <stdio.h>
void Rua();
int main() {
    int n=0,i=0,j=0;
    int arr[10]={0};
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        j++;
    }
    i=j-1;
	Rua(arr,i);//调用递归函数
	return 0;
}

void Rua(int* arr, int i)
{
    if (i >= 0)
    {
        printf("%d\n", arr[i]);
        Rua(arr,i-1);
    }
}*/
/*#include <stdio.h>
int ack(int, int);
int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", ack(m, n));
	return 0;
}

int ack(int m, int n) {

	if(m==0)
    return n+1;
    else if(n==0&&m>0)
    return ack(m-1,1);
    else{
    n=ack(m,n-1);
    return ack(m-1,n);}





}*/
/*#include <stdio.h>
int panda[101] = {0,1,1,1,1,2,3,4,5};

int feb(int n)
{
    if(n<9)
        return panda[n];
    else
        return feb(n-1)+n-7;


}

int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",feb(n)%114);
}*/
/*include <stdio.h>
int calculate (int j)
{
    if(j==1)
    printf("%d",j);
    else{
     calculate(j/2);
     printf("%d",j%2);
     }



}
int main()
{
    int n=0,m=0,i=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    calculate(i);
    return 0;
}*/
//请在此输入你的代码，复杂程序可先在Dev C++中运行调试后再提交
/*#include <stdio.h>
char my_switch(int m)
{
       switch(m)
        {
            case 10: return 'A';
            case 11: return 'B';
            case 12: return 'C';
            case 13: return 'D';
            case 14: return 'E';
            case 15: return 'F';
        }
}
void transform(int n)
{
    if(n/16==0){
         if(n<10)
          printf("%d",n);
         else{
          char c=my_switch(n);
          printf("%c",c);
         }
    }
    else{
        transform(n/16);
        if(n%16<10)
        printf("%d ",n%16);
        else{
          char c=my_switch(n%16);
          printf("%c ",c);
         }

    }
}
int main()
{
    int a=0,b=0,i=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
     transform(i);
    return 0;
}*/
/*#include <stdio.h>
int hannuota(int n)
{
    if(n==1)
     return 1;
    else
     return 2*hannuota(n-1)+1;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    int result = hannuota(n);
    printf("%d",result);
    return 0;
}*/
#include <stdio.h>

// 函数声明
void hanoi(int n, char from, char to, char aux);

int main() {
    int n;
    printf("请输入汉诺塔的盘子数量：");
    scanf("%d", &n);

    // 调用汉诺塔函数开始解决问题
    hanoi(n, 'A', 'C', 'B');

    return 0;
}

// 汉诺塔问题的递归解决函数
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        // 当只有一个盘子时，直接将其从起始柱子移动到目标柱子
        printf("%c -> %c\n",from, to);
        return;
    }

    // 先将n - 1个盘子从起始柱子借助目标柱子移动到辅助柱子
    hanoi(n - 1, from, aux, to);

    // 再将最底下的一个盘子从起始柱子移动到目标柱子
    printf("%c -> %c\n",from, to);

    // 最后将n - 1个盘子从辅助柱子借助起始柱子移动到目标柱子
    hanoi(n - 1, aux, to, from);
}



