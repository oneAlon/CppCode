//
//  main.cpp
//  02-函数重载
//
//  Created by xygj on 2019/6/12.
//  Copyright © 2019 OneAlon. All rights reserved.
//

#include <iostream>

using namespace std;

/*
 C语言不支持函数重载
 C++支持函数重载
 函数重载: 函数名称相同, 参数的个数/类型/顺序不同
          返回值类型和函数重载无关? 为什么呢? 因为存在歧义
 */

// 原始函数
int sum(int a, int b) {
    return a + b;
}

// 参数类型不同
int sum(double a, double b) {
    return a + b;
}

// 个数不同
int sum(int a, int b, int c) {
    return a + b + c;
}

int main(int argc, const char * argv[]) {
    cout << sum(1, 2) << endl;
    return 0;
}
