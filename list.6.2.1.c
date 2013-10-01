//
//  list.6.2.1.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-30.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#define MAXN 1000+10
int A[MAXN];
void shift_circular_left(int p,int q){
    if(p>q){
        for(int i=p;i>q;i--){
            int tmp;
            tmp=A[i];
            A[i]=A[i-1];
            A[i-1]=tmp;
        }
    }
}

void shift_circular_right(int p,int q){
    if(p<q){
        for(int i=p;i<q;i++){
            int tmp;
            tmp=A[i];
            A[i]=A[i+1];
            A[i+1]=tmp;
        }
    }
}
int locate(int X){
    int i=1;
    while(1){
        if(A[i]==X){
            break;
        }
        i++;
    }
    return i;
}

int main(){
    int n,m,X,Y,p,q;
    char type;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        A[i]=i;
    }
    for(int i=1;i<=m;i++){
        scanf("%s%d%d",&type,&X,&Y);//attention:use %s to ignore "\n"
        p=locate(X);
        q=locate(Y);
        if(type=='A'){
            if(p>q){
                shift_circular_left(p,q);
            }else{
                shift_circular_right(p,q-1);
            }
        }else if(type=='B'){
            if(p>q){
                shift_circular_left(p,q+1);
            }else{
                shift_circular_right(p,q);
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
