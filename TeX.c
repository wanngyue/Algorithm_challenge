//
//  TeX.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-26.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
int main(){
    char c;
    int q=1;
    while((c=getchar())!=EOF){
        if(c=='"'){
            printf("%s",q?"``":"''");
            q=!q;
        }else{
            putchar(c);
        }
    }
    return 0;
}
