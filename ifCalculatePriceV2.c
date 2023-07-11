#include <stdio.h>
#include <math.h>

#define PRESCHOOL_CHILD 1
#define PRIMARY_SCHOOL_STUDENT 2
#define JUNIOR_HIGH_SCHOOL_STUDENT_AND_ABOVE 3
#define INFANT_FARE 200
#define PRIMARY_SCHOOL_STUDENT_FARE 500
#define JUNIOR_HIGH_SCHOOL_STUDENT_FARE 1000
#define TAXRATE 0.1
#define TRUE 1
#define FALSE 0

int main(void) {
    int division;
    int number_of_people;
    int total_price = 0;
    float total_price_with_tax;

    while(TRUE) {
        while(TRUE) {
            printf("区分を入力してください（1: 小学生未満, 2: 小学生, 3: 中学生以上）: ");
            scanf("%d", &division);

            if (division >= PRESCHOOL_CHILD && division <= JUNIOR_HIGH_SCHOOL_STUDENT_AND_ABOVE) {
                break;
            } else {
                printf("不正な区分が入力されました。もう一度入力してください。\n");
            }
        }

        printf("人数を入力してください: ");
        scanf("%d", &number_of_people);

        if (division == PRESCHOOL_CHILD) {
            total_price += number_of_people * INFANT_FARE;
        } else if (division == PRIMARY_SCHOOL_STUDENT) {
            total_price += number_of_people * PRIMARY_SCHOOL_STUDENT_FARE;
        } else if (division == JUNIOR_HIGH_SCHOOL_STUDENT_AND_ABOVE) {
            total_price += number_of_people * JUNIOR_HIGH_SCHOOL_STUDENT_FARE;
        }

        char answer;
        printf("さらに入力しますか？（y/n）: ");
        scanf(" %c", &answer);
        if (answer == 'n' || answer == 'N') {
            break;
        }
    }

    total_price_with_tax = total_price + total_price * TAXRATE;
    total_price_with_tax = floor(total_price_with_tax + 0.5);

    printf("料金合計は %d 円です。\n", total_price);
    printf("税込料金合計は %.0f 円です。\n", total_price_with_tax);

    return 0;
}