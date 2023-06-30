#include <stdio.h>
#include <math.h>

int main(void) {
    int unit_price, quantity;
    float tax_rate = 0.10; // 消費税は10%

    // 単価と数量の入力
    printf("単価を入力してください: ");
    scanf("%d", &unit_price);
    printf("数量を入力してください: ");
    scanf("%d", &quantity);

    // 金額の計算
    int amount = unit_price * quantity;

    // 税込み金額の計算
    float tax_included_amount = amount * (1 + tax_rate);

    // 四捨五入
    int rounded_amount = round(amount);
    int rounded_tax_included_amount = round(tax_included_amount);

    // 結果の表示
    printf("金額: %d\n", rounded_amount);
    printf("税込み金額: %d\n", rounded_tax_included_amount);

    return 0;
}






