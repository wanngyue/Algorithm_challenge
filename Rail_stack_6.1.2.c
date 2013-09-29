//
//  Rail_stack_6.1.2.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-29.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#define MAXN 100+10
int n,target[MAXN];
int main(){
    int A=1,B=1;
    int stack[10],top=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&target[i]);
    }
    int ok=1;
    while(B<n){
        if(A==target[B]){
            A++;
            B++;
        }else if(top&&stack[top]==target[B]){
            top--;
            B++;
        }else if(A<n){
            stack[++top]=A++;
        }else {
            ok=0;
            break;
        }
    }
    printf("%s\n",ok?"Yes":"No");
}
