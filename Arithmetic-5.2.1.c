//
//  Arithmetic-5.2.1.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-27.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        //printf("a=%d,b=%d\n",a,b);
        if(!a&&!b){
            //printf("!!a=%d,b=%d\n",a,b);
            break;
        }
        int c=0,counter=0;
        for(int i=9;i>=0;i++){
            c=(a%10+b%10+c)>9?1:0;
            counter+=c;
            a=a/10;
            b=b/10;
        }
        printf("%d\n",counter);
    }
    
}
