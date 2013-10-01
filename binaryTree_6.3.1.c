//
//  binaryTree_6.3.1.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-30.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAXN 20
int s[1<<MAXN];//sum of elements in the array "s" is 2^MAXN-1

int main(){
    int D,I;
    int k,n;
    while(scanf("%d%d",&D,&I)==2)
    {
        memset(s,0,sizeof(s));
        n=(1<<D)-1;
        for(int i=0;i<I;i++)
        {
            k=1;
            while(1)
            {
                s[k]=!s[k];
                s[k]?(k=2*k):(k=2*k+1);
                if(k>n)
                {
                    break;
                }
            }
        }
        printf("%d\n",k/2);
    }
}
