#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    for (i = 123; i <= 329; i++) // 依题目要求i最小为123
    {
        int arr1[3] = {i / 100, (i / 10) % 10, i % 10}; // 将第一组三位数的i的每位数字分离（个，十，百位）赋给数组，方便接下来对组成这个三位数的三个数字的判断
        if (arr1[0] != arr1[1] && arr1[0] != arr1[2] && arr1[1] != arr1[2] && arr1[0] != 0 && arr1[1] != 0 && arr1[2] != 0) // 判断i的各个位的组成数字不相同且不含0
        {
            for (j = 246; j <= 658; j++) // 将第二组三位数j的每位数字分离（个，十，百位）赋给数组，方便接下来对组成这个三位数的三个数字的判断
            {
                int arr2[3] = {j / 100, (j / 10) % 10, j % 10};
                if (arr2[0] != arr2[1] && arr2[0] != arr2[2] && arr2[1] != arr2[2] && arr2[0] != 0 && arr2[1] != 0 && arr2[2] != 0)//判断j的各个位的组成数字不相同且不含0
                {
                    for (k = 369; k <= 987; k++) // 将第三组三位数k的每位数字分离（个，十，百位）赋给数组，方便接下来对组成这个三位数的三个数字的判断
                    {
                        int arr3[3] = {k / 100, (k / 10) % 10, k % 10};
                        if (arr3[0] != arr3[1] && arr3[0] != arr3[2] && arr3[1] != arr3[2] && arr3[0] != 0 && arr3[1] != 0 && arr3[2] != 0)//判断k的各个位的组成数字不相同且不含0
                        {
                            if (j == 2 *i && k == 3* i) // 比例判断是否满足1：2：3
                            {
                                // 检查组成这三个三位数的九个数字是否都不同，这里用了最笨的列举法，聪明人可以视情况改变判断方法
                                if (arr1[0] != arr2[0] && arr1[0] != arr2[1] && arr1[0] != arr2[2] &&
                                    arr1[1] != arr2[0] && arr1[1] != arr2[1] && arr1[1] != arr2[2] &&
                                    arr1[2] != arr2[0] && arr1[2] != arr2[1] && arr1[2] != arr2[2] &&
                                    arr1[0] != arr3[0] && arr1[0] != arr3[1] && arr1[0] != arr3[2] &&
                                    arr1[1] != arr3[0] && arr1[1] != arr3[1] && arr1[1] != arr3[2] &&
                                    arr1[2] != arr3[0] && arr1[2] != arr3[1] && arr1[2] != arr3[2] &&
                                    arr2[0] != arr3[0] && arr2[0] != arr3[1] && arr2[0] != arr3[2] &&
                                    arr2[1] != arr3[0] && arr2[1] != arr3[1] && arr2[1] != arr3[2] &&
                                    arr2[2] != arr3[0] && arr2[2] != arr3[1] && arr2[2] != arr3[2])
                                {
                                    printf("%d %d %d\n", i, j, k); // 输出满足条件的三个三位数
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}