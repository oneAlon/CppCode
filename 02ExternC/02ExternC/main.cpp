//
//  main.cpp
//  02ExternC
//
//  Created by xygj on 2019/1/7.
//  Copyright © 2019 OneAlon. All rights reserved.
//

#include <iostream>
#include "MyMath.h"

/*
 extern "C"修饰表示用C语言的方式编译
 C语言函数不允许重载
 */

void func();


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    func();
    std::cout << sum(10, 20);
    std::cout << "\n";
    return 0;
}

void func() {
    
}
