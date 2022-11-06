/*
 * @Author: zhanghao
 * @Date: 2022-11-06 10:25:28
 * @LastEditTime: 2022-11-06 10:35:54
 * @FilePath: /hao_learning_cmake/basic_learning/00csdndemo/demo03/main.cc
 * @Description: 
 */
#include <stdio.h>
#include <stdlib.h>
#include "MathFunctions.h"

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("Usage: input two num \n");
        return 1;
    }
    int para1 = atoi(argv[1]);
    int para2 = atoi(argv[2]);
    long long result = add(para1, para2);
    printf("%d + %d is %lld\n", para1, para2, result);
    return 0;
}
