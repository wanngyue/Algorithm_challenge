//
//  Cycle string-5.1.3.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-26.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char s[100];
int main(){
    int len;
    scanf("%s",s);
    len=strlen(s);
    for(int i=1;i<=len;i++){
        int ok=1;
        if(len%i==0){
            for(int j=i;j<len;j++){
                if(s[j]!=s[j%i]){
                    ok=0;
                    break;
                }
            }
            if(ok){
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
