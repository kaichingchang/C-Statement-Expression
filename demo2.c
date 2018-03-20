#include <stdio.h>

int main() {
    //宣告變數
    int n = 8;
    int input = 0;

    //使用者輸入
    printf("1 - 向右位移 1 位元。\n");
    printf("2 - 向右位移 2 位元。\n");
    printf("3 - 向左位移 4 位元。\n");
    printf("4 - 向左位移 8 位元。\n");
    printf("目前 n 為 %d ，請輸入你的選項：\n", n);
    scanf("%d", &input);

    //依使用者輸入進行計算
    switch (input) {
        case 1:
            n >>= 1;
            break;
        case 2:
            n >>= 2;
            break;
        case 3:
            n <<= 4;
            break;
        case 4:
            n <<= 8;
            break;
        default:
            n = -1;
    }
    printf("n 的結果是 %d 。\n", n);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：demo2.c
   功能：示範整數位移運算
   作者：張凱慶 */
