//
//  main.c
//  ST4C
//
//  Created by Dobby on 2017/10/30.
//  Copyright © 2017年 Dobby. All rights reserved.
//

#include <stdio.h>

// 计算1到100的和
void calculatAdd(){
    int sum = 0;  //类似定义一个存储器, 初始化的时候赋值为0
    for (int i=1; i <= 100; i ++) {
        // 从1到100迭代
        sum += i; // 每次都加上i,
    }
    printf("sum = %d\n",sum);
}

// 计算最大值和最小值
void calculatMaxAndMin(){
    int array[10] = {1,2,3,4,3,43,43,333,32,9};
    int maxNum = array[0]; //先从数组里面拿一个出来组待定最大值
    int minNum = array[0]; //先从数组里面拿一个出来组待定最小值
    for (int i=0; i<10; i++) {
        // 迭代整个数组
        if (array[i] > maxNum) {
            //如果任何一个比我大, 那么最大值的位置就让给你
            maxNum = array[i];
        }else if (array[i] < minNum){
            // 如果任何一个比我还小, 那我就把最小值的位置让给你咯
            minNum = array[i];
        }
    }
    printf("maxNumber = %d\nminNumber = %d",maxNum,minNum);
}

// 模拟公车刷卡
void busCard(){
    int balance;  //定一个int类型, 来作为存储待会输入的余额
    printf("请刷卡:\n");
    scanf("%d",&balance); //把用户输入的数值,存储到balance里面去
    //假设每次刷2块, 那么两块都没有,直接就是告诉余额不足,并显示余额
    if (balance < 2) {
        printf("余额不足,请充值!\n当前余额:%d\n",balance);
        return;
    }else{
    //其他情况就是 >= 2的情况, 咱们让它扣去费用后显示
        balance -= 2;
        printf("当前余额:%d\n",balance);
        return;
    }
}

//这是主程序的入口, 仅为一个
int main(int argc, const char * argv[]) {

    calculatAdd();//执行1
    calculatMaxAndMin(); //执行2
    while (1) {  //while 语句,当程序运行的时候永为真,保持公车卡运行
        busCard();
    }
    return 0;
}
