#include <stdio.h>
#include <stdbool.h>    // 这个是一个布尔值的库


/* *********** 返回三个数中的最大值 *********** */

/* 返回两个数中的最大值 */
int max(int a, int b) {
    return a>b?a:b;
}
void whichMaxInThreeNumber() {
    /* 三个数 */
    int a,b,c;
    printf("give me three number");
    scanf("%d,%d,%d",&a,&b,&c);

    /* 给最大数占坑 */
    int placeHodler;
    placeHodler = max(a,b);
    placeHodler = max(placeHodler,c);
    printf("MAX = %d",placeHodler);
}


/* *********** 瓶子交换 *********** */
// a=b => b=a
void exchangeBox() {
    int firstBox = 1;
    int lastBox  = 2;
    int swap;
    swap = lastBox;
    lastBox  = firstBox;
    firstBox = swap;
    printf("Exchange first(1)=%d, last(2)=%d",firstBox, lastBox);
}

/* *********** 三个数进行从大到小的排序 *********** */
/* 通用的冒泡程序 */
void sortArrayAndPrint(int array[], int arrayLength) {

    int temp, tempExchange;
    bool exchanged;
    for (int i = 0; i < arrayLength; ++i) {        // 1. 第一个外循环是循环比对的次数
        exchanged = 0;
        for (int j = i+1; j < arrayLength; ++j) {  // 2. 第二个循环, 拿到每次循环的数, 进行一轮比对
            if (array[j] > array[i]) {                 // 3. 如果比我取出来的数字大, 我就标记需要交换排序
                exchanged = 1;
            }
            if (exchanged) {                           // 执行交换排序
                tempExchange = array[i];
                array[i] = array[j];
                array[j] = tempExchange;
            }
        }

    }
    // 输出
    for (int k = 0; k < arrayLength; ++k) {
        printf("\n%d",array[k]);
    }
}

void sortThreeNumber() {
    // 先赋值这三个数
    int array[10];   // 数组长度
    printf("type 3 number");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&array[i]);
    }
    sortArrayAndPrint(array, 10);
}


/* *********** 100-200之间的素数 *********** */
void filterPrimeNumber(int array[], int arrayLength) {
    int temp;
    for (int i = 0; i < arrayLength; ++i) {
        temp = array[i];
        if (temp%2 != 0) {
            printf("\nprime Num : %d",temp);
        }
    }
}

void getPrimeNumbers() {
    int length = 100;
    int primeArray[length];
    int startNumber = length;
    for (int i = 0; i < length+1; ++i) {
        primeArray[i] = startNumber;
        startNumber ++;
    }
    filterPrimeNumber(primeArray, length);
}



int main() {
//    whichMaxInThreeNumber();
//    exchangeBox();
    sortThreeNumber();
//    getPrimeNumbers();
    return 0;
}



