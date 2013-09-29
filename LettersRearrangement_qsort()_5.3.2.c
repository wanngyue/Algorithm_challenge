//
//  LettersRearrangement_qsort()_5.3.2.c
//  ACM_Algo
//
//  Created by Yue WANG on 13-9-29.
//  Copyright (c) 2013年 Yue WANG. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char word[2000][10],store[2000][10];
int n=0;

int cmp_char(const void* _a,const void* _b){
    char* a=(char*)_a;
    char* b=(char*)_b;
    return *a-*b;
}
int cmp_string(const void* _a,const void* _b){
    char* a=(char*)_a;
    char* b=(char*)_b;
    return strcmp(a,b);
}

int main(){
    while(1){
        scanf("%s",word[n]);
        if(word[n][0]=='*')break;
        n++;
    }
    qsort(word,n,sizeof(word[0]),cmp_string);
    for(int i=0;i<n;i++){
        strcpy(store[i],word[i]);
        qsort(store[i],strlen(store[i]),sizeof(char),cmp_char);
    }
    
    char s[10];
    while(scanf("%s",s)==1){
        qsort(s,strlen(s),sizeof(char),cmp_char);
        int found=0;
        for(int i=0;i<n;i++){
            if(strcmp(s,store[i])==0){
                found=1;
                printf("%s ",word[i]);
            }
        }
        if(!found){
            printf(":(");
        }
        printf("\n");
    }
    return 0;
}
