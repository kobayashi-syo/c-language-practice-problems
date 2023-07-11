#include <stdio.h>
#include <math.h>

#define ADULT 2
#define CHILD 1
#define ADULT_FARE 800
#define CHILD_FARE 1500
#define TAX 0.1 // Add tax rate here (e.g. 10% as 0.1)

int main(void) {
    int division;
    int number_of_people;
    int total_price;
    float total_price_with_tax;

    printf("区分を入力してください（1: 子供, 2: 大人）: ");
    scanf("%d", &division);

    printf("人数を入力してください: ");
    scanf("%d", &number_of_people);

    if (division == CHILD) {
        total_price = number_of_people * CHILD_FARE;
    } else if (division == ADULT) {
        total_price = number_of_people * ADULT_FARE;
    } else {
        printf("不正な区分が入力されました。\n");
        return 1;
    }

    total_price_with_tax = total_price + total_price * TAX; // Calculate price with tax
    total_price_with_tax = floor(total_price_with_tax + 0.5); // Round off to the nearest integer

    printf("料金合計は %d 円です。\n", total_price);
    printf("税込料金合計は %.0f 円です。\n", total_price_with_tax);

    return 0;
}