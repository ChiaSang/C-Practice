//
//  main.c
//  软件2015
//
//  Created by Victor on 2019/10/13.
//  Copyright © 2019 Victor. All rights reserved.
//
//P192 C语言程序设计题

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
//第一题
/*-------------------------------------*/

#define STAFFNUM 8
#define Num int
#define Name char
#define salary int
#define position char
//第二题
/*-------------------------------------*/
void sortNum(int * arra){
    int temp = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
                if (arra[i] > arra[j]) {
                temp = arra[i];
                arra[i] = arra[j];
                arra[j] = temp;
            }
        }
    }
    printf("%d\t%d\t", arra[MAXSIZE-1], arra[0]);
}

void averageNum(int * arra){
    int average = 0;
    int sum = 0;
    for (int i = 0 ; i < 10; i ++) {
        sum += arra[i];
    }
    average = sum / MAXSIZE;
    printf("%d\n", average);
}
//第一题
/*-------------------------------------*/
typedef struct StaffInfo{
    Num no;
    Name name[MAXSIZE];
    salary mon;
    position pos[MAXSIZE];
    	
}StaffInfo, SI[STAFFNUM];

void getSalaryInfo(StaffInfo SI[STAFFNUM]){
    StaffInfo temp = {};
    int sum = 0;
    int average = 0;
    for (int i = 0; i < STAFFNUM; i++) {
        sum +=SI[i].mon;
    }
    average = sum / STAFFNUM;
    printf("average salary is %d\n", average);
    //计算平均工资
    for (int i = 0; i < STAFFNUM; i++) {
        if (SI[i].mon > average) {
            printf("%d\t%s\t%d\n", SI[i].no, SI[i].name, SI[i].mon);
        }
    }
    //输出大于平均工资的员工号码和名字
    for (int i = 0; i < STAFFNUM; i++) {
        for (int j = i+1; j < STAFFNUM; j++) {
            if (SI[i].mon > SI[j].mon) {
                temp = SI[i];
                SI[i] = SI[j];
                SI[j] =temp;
//使用结构体中的薪水字段对结构体进行升序排序，然后输出最大最小值的No。
//                temp = SI[i].mon;
//                SI[i].mon = SI[j].mon;
//                SI[j].mon =temp;
//薪水排序
            }
        }
    }
    printf("maxmum salary is %d\nminmum salary is %d\n", SI[STAFFNUM - 1].mon, SI[0].mon);
    printf("max no. is %d\nmin no. is %d\n", SI[STAFFNUM - 1].no, SI[0].no);
}

int main() {
    /*-------------------------------------*/
    //第一题
    printf("/*----------------第一题---------------------*/\n\n");
    int arra[MAXSIZE] = {35,346,56,235,567,78,34,67,45,9};
    sortNum(arra); //输出最大值和最小值
    averageNum(arra); //输出平均值
    /*-------------------------------------*/
    //第二题
    printf("/*----------------第二题---------------------*/\n\n");
    SI sta = {
        {10, "qazzhao", 2458, "ENG"},
        {20, "wsxzhao", 3458, "ANG"},
        {30, "edczhao", 4458, "QNG"},
        {40, "rfvzhao", 5458, "BNG"},
        {50, "tgbzhao", 6458, "VNG"},
        {60, "yhnzhao", 7458, "GNG"},
        {70, "ujmzhao", 8458, "FNG"},
        {80, "ikozhao", 1458, "JNG"}
    };
    getSalaryInfo(sta);
    return 0;
}
