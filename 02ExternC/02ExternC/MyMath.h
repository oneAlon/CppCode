//
//  Math.h
//  02ExternC
//
//  Created by xygj on 2019/1/7.
//  Copyright © 2019 OneAlon. All rights reserved.
//


#if defined(__cpluscplus)
#define My_Extern extern "C"
#else
#define My_Extern
#endif

#ifndef MyMath_h
#define MyMath_h

#include <stdio.h>

My_Extern int sum(int num1, int num2);

#endif /* MyMath_h */
