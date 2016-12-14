//
//  main.c
//  text
//
//  Created by 王磊怀 on 16/12/2.
//  Copyright © 2016年 王磊怀. All rights reserved.
//

#include <stdio.h>

void f(){
    static int i;
    
    ++i;
    printf("%d",i);
}

struct glb
{
    int x;
    char s[20];
}g;

//这里写一个求和的函数
int sum(int m,int n){
    return m + n;
}

//这里写一个乘积的代码
int qiuji(int m,int n){
    return m * n;
}

//这里是张三写的代码 中国共产党万岁

void func(struct glb g){
    g.x = 2013;
    strcpy(g.s,"c program");
    
    printf("%d,%s\n",g.x,g.s);
}

void sort(char *name[],int n){
    char * temp;
    int i ,j,k;
    for (i = 0; i < n; i++) {
        k = i;
        for (int j = i + 1; j < n; j++)
            if (strcmp(name[k],name[j]) > 0)
                k = i;
        if (k != i) {
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }
    }
}

void print(char * name[],int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("%s",name[i]);
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    struct{
        int x;
        int y;
    }s[2] = {{2,0},{1,3}},*p = s;
    
    printf("%d,%d",++p->x,(++p)->x );
    
    printf("\n");
    
    int m = 2;
    
    while (m--);
    
    printf("m = %d\n",m);
    
    g.x = 1;
    
    strcpy(g.s, "Good Luck");
    
    func(g);
    
    printf("%d,%s\n",g.x,g.s);
    
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            if (i == 2) {
                printf("WELCOME TO CNU");
            }else{
                printf("**************");
            }
            printf("\n");
        }else{
            printf("\n");
        }
        
    }
    
    char * name[] = {"Good","Luck","Friend","CNU"};
    
    int n = 4;
    
    sort(name, n);
    
    print(name,n);
    
    
    int x = 1;
    
    //在这里添加几句代码 好好好
    
    printf("看一下print的输出顺序%d,%d",x++,(x += 5));
    
    
    return 0;
}
