#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high) {
    // 基準値は配列の一番左側の要素
    int pivot = array[low];
    int i = low + 1;
    int j = high;

    while (1) {
        // 基準値より大きい値を探す
        while (i <= j && array[i] < pivot) i++;
        // 基準値より小さい値を探す
        while (i <= j && array[j] > pivot) j--;
        // iとjが交差したらループを抜ける
        if (i >= j) break;
        // array[i]とarray[j]を交換
        swap(&array[i], &array[j]);
    }
    // 基準値とarray[j]を交換
    
    swap(&array[low], &array[j]);
    // 基準値の位置を返す
    return j;
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        // パーティションを行い、基準値の位置を取得
        int pivotIndex = partition(array, low, high);
        // 基準値より小さい部分をクイックソート
        quickSort(array, low, pivotIndex - 1);
        // 基準値より大きい部分をクイックソート
        quickSort(array, pivotIndex + 1, high);
    }
}

int main() {
    srand((unsigned int)time(NULL));
    int numbers[SIZE];

    printf("Random numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100;
        printf("%d ", numbers[i]);
    }
    printf("\n");

    quickSort(numbers, 0, SIZE - 1);

    printf("Sorted numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}