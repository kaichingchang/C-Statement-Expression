#include <stdio.h>
#include <string.h>

int main() {
    //宣告變數
    int v1, v2, result;
    char op[1];

    //使用者輸入
    printf("請輸入第一個數字：");
    scanf("%d", &v1);
    printf("請輸入第二個數字：");
    scanf("%d", &v2);
    printf("請輸入計算符號 + - * /：");
    scanf("%s", op);

    //依輸入計算結果
    if (strcmp(op, "+") == 0) {
        result = v1 + v2;
    }
    else if (strcmp(op, "-") == 0) {
        result = v1 - v2;
    }
    else if (strcmp(op, "*") == 0) {
        result = v1 * v2;
    }
    else if (strcmp(op, "/") == 0) {
        result = v1 / v2;
    }
    else {
        result = -9999;
    }
    printf("結果是 %d 。\n", result);

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：demo1.c
   功能：示範整數四則運算
   作者：張凱慶 */
