//
//  Factorial-(5.2.2).c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-27.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAXN 3000
int num[MAXN];

int main(){
    int n,i,j;
    scanf("%d",&n);
    memset(num,0,sizeof(num));
    num[0]=1;
    for(i=2;i<=n;i++){
        int c=0;
        for(j=0;j<=MAXN-1;j++){
            int tmp=num[j]*i+c;
            num[j]=tmp%10;
            c=tmp/10;
        }
    }
    for(i=MAXN-1;i>=0;i--){
        if(num[i])break;
    }
    for(j=i;j>=0;j--){
        printf("%d",num[j]);
    }
    printf("\n");
    
    return 0;
}
