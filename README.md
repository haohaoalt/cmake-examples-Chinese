<!--
 * @Author: zhanghao
 * @Date: 2022-11-06 10:43:43
 * @LastEditTime: 2022-11-06 10:43:44
 * @FilePath: /hao_learning_cmake/README.md
 * @Description: 
-->
# cmake-examples-Chinese
快速入门CMake,通过例程学习语法。在线阅读地址：https://sfumecjf.github.io/cmake-examples-Chinese/

消息、变量打印
message([<mode>] "message to display" ...)

mode表示模式，可以忽略，常用有：

FATAL_ERROR：cmake出错，停止编译和生成(信息红色)
WARNING：cmake警告，继续编译(信息红色)
AUTHOR_WARNING：开发者警告，继续编译(信息红色)
(none) or NOTICE：不设置mode，默认是NOTICE模式，不影响编译和生成，用于打印消息(信息白色)
STATUS：编译时状态信息，左边以–和空格开头(信息白色)
SET(SRCS mainc.cc)
message(FATAL_ERROR "cannot find ${SRCS}!")