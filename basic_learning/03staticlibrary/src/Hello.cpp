/*
 * @Author: zhanghao
 * @Date: 2022-11-05 21:42:16
 * @LastEditTime: 2022-11-05 21:45:46
 * @FilePath: /cmake-examples-Chinese/basic_learning/03staticlibrary/src/Hello.cpp
 * @Description: 
 */
#include <iostream>
#include "static/Hello.h"
void Hello::print()
{
    std::cout << " Hello static library!" << std::endl;
}