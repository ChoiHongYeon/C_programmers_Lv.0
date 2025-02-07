// 중앙값 구하기 (https://school.programmers.co.kr/learn/courses/30/lessons/120811?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int solution(int array[], size_t array_len) {

    qsort(array, array_len, sizeof(int), compare);
    return array[array_len / 2];

}

void main()
{

    int array1[] = { 1, 2, 7, 10, 11 };
    int array2[] = { 9, -1, 0 };
    size_t array_len1 = 5;
    size_t array_len2 = 3;
    printf("%d %d", solution(array1, array_len1), solution(array2, array_len2));

}