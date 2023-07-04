#include <stdio.h>

int main(void) {
    int division;
    int number_of_people;
    int total_price;

    printf("区分を入力してください（1: 子供, 2: 大人）: ");
    scanf("%d", &division);

    printf("人数を入力してください: ");
    scanf("%d", &number_of_people);

    int adult_fare = 800;
    int child_fare = 1500;

    if (division == 1) {
        total_price = number_of_people * adult_fare;
    } else if (division == 2) {
        total_price = number_of_people * child_fare;
    } else {
        printf("不正な区分が入力されました。\n");
        return 1;
    }

    printf("料金合計は %d 円です。\n", total_price);

    return 0;
}
