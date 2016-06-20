//
//  main.cpp
//  unix_3-1
//
//  Created by 袁旭 on 16/6/20.
//  Copyright © 2016年 袁旭. All rights reserved.
//

#include <iostream>
#include "apue.h"

int main(void) {
    if (lseek(STDIN_FILENO, 0, SEEK_CUR) == -1) {
        printf("can not seek\n");
    }else{
        printf("seek OK\n");
    }
    
    return 0;
}
