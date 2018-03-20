#include <stdio.h>

int main() {
    //宣告變數
    int v1, v2;

    //使用者輸入
    printf("請輸入第一個數字：");
    scanf("%d", &v1);
    printf("請輸入第二個數字：");
    scanf("%d", &v2);

    //依序輸入顯示結果
    if (v1 == v2) {
        printf("兩者相等。\n");
    }
    else {
        if (v1 > v2) {
            printf("%d 比較大。\n", v1);
        }
        else {
            printf("%d 比較大。\n", v2);
        }
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：demo3.c
   功能：示範整比算運算子
   作者：張凱慶 */
