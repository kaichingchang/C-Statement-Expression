#include <stdio.h>

int main() {
    //宣告變數
    int v1, v2, n;
    v1 = 100; v2 = 200;

    //while陳述
    while (v1 > 0) {
        v2++;
        v1--;
    }

    //計算印出結果
    n = (v1 + 100 * (2 + 250)) * v2 / 10;
    printf("%d\n", n);
    n = (v1 + 100 * 2 + 250) * v2 / 10;
    printf("%d\n", n);
    n = v1 + 100 * 2 + 250 * v2 / 10;
    printf("%d\n", n);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：demo5.c
   功能：示範分號及小括弧
   作者：張凱慶 */
