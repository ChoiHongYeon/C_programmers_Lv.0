// 공 던지기 (https://school.programmers.co.kr/learn/courses/30/lessons/120843?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len, int k) {

    int n = ((k - 1) * 2 + 1) % numbers_len - 1;
    return n == -1 ? numbers[numbers_len - 1] : numbers[n];

}

void main()
{

    int numbers1[] = { 1, 2, 3, 4 };
    int numbers2[] = { 1, 2, 3, 4, 5, 6 };
    int numbers3[] = { 1, 2, 3 };
    printf("%d %d %d", solution(numbers1, 4, 2), solution(numbers2, 6, 5), solution(numbers3, 3, 3));

}