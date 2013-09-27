//
//  6174problem-5.1.3.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-27.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAXN 1000+10
int num[MAXN];

int get_next(int n){
    int a,b,len;//a>b
    char s[20];
    sprintf(s,"%d",n);//int -> string
    len=strlen(s);
    for(int i=0;i<len;i++){//bubble sort
        for(int j=i+1;j<len;j++){
            if(s[i]>s[j]){
                char t=s[i];
                //printf("!!%c\n",s[i]);
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    sscanf(s,"%d",&b);//string -> int
    /*
    for(int i=0;i<len;i++){
        printf("%c\n",s[i]);
    }
     */
    for(int k=0;k<len/2;k++){
        char t=s[k];
        s[k]=s[len-1-k];
        s[len-1-k]=t;
    }
    sscanf(s,"%d",&a);
    return a-b;
}

int main(){
    scanf("%d",&num[0]);
    printf("%d",num[0]);
    int i=1;
    while(1){
        int found=0;
        num[i]=get_next(num[i-1]);
        printf("-> %d",num[i]);
        for(int j=0;j<i;j++){
            if(num[j]==num[i]){
                found=1;
                break;
            }
        }
        if(found)break;
        i++;
    }
}
