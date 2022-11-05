/*
 * @Author: zhanghao
 * @Date: 2022-11-05 22:00:56
 * @LastEditTime: 2022-11-05 22:00:56
 * @FilePath: /cmake-examples-Chinese/basic_learning/04sharedlibrary/src/Hello.cpp
 * @Description: 
 */
/*实现了Hello::print()*/
#include <iostream>

#include "shared/Hello.h"

void Hello::print()
{
    std::cout << "Hello Shared Library!" << std::endl;
}