//
//  list.6.2.2.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-30.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#define MAXN 1000+10
int left[MAXN],right[MAXN];

void link(int X,int Y){
    right[X]=Y;
    left[Y]=X;
}

int main(){
    int n,m,X,Y;
    char type;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        left[i]=i-1;
        if(i!=n)
        {
          right[i]=i+1;  
        }else
        {
            right[i]=0;
        }
        
    }
    for(int i=1;i<=m;i++)
    {
        scanf("%s%d%d",&type,&X,&Y);
        link(left[X],right[X]);
        if(type=='A')
        {
            link(left[Y],X);
            link(X,Y);
        }else if(type=='B')
        {
            link(X,right[Y]);
            link(Y,X);
        }
    }
    int init;
    for(int i=1;i<=n;i++)
    {
        if(left[i]==0)init=i;
    }
    for(int i=1;i<=n;i++){
        printf("%d ",init);
        init=right[init];
    }
    printf("\n");
}
