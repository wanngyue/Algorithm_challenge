//
//  WERTY.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-26.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
char *s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    char c;
    int i;
    while((c=getchar())!=EOF){
        for(i=1;s[i]&&s[i]!=c;i++);
        if(s[i]){
            printf("%c",s[i-1]);
        }else{
            putchar(c);
        }
    }
    return 0;
}
