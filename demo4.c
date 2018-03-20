#include <stdio.h>

int main() {
    //宣告變數
    int v1, v2, result;

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
        printf("%d 比較大。\n", v1 > v2 ? v1 : v2);
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：demo4.c
   功能：示範條件運算式
   作者：張凱慶 */
