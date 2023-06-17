#include <stdio.h>

int main() {
    // 整数変数の宣言
    int kokugo, shakai, rika, total;
    float average;

    // 点数の入力
    printf("国語の点数は？: ");
    scanf("%d", &kokugo);

    printf("社会の点数は？: ");
    scanf("%d", &shakai);

    printf("理科の点数は？: ");
    scanf("%d", &rika);

    // ３科目の合計を求める
    total = kokugo + shakai + rika;

    // 平均を求める（浮動小数点数の平均を得るためにtotalをfloatにキャスト）
    average = (float)total / 3;

    // 合計と平均を表示
    printf("合計=%d 平均=%.2f\n", total, average);

    return 0;
}