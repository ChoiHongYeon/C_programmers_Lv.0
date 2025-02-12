// 최댓값 만들기 (2) (https://school.programmers.co.kr/learn/courses/30/lessons/120862?language=c)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int* compare(int* a, int* b) {
    return *a - *b;
}

int solution(int numbers[], size_t numbers_len) {

    if (numbers_len == 2)
        return numbers[0] * numbers[1];

    qsort(numbers, numbers_len, sizeof(int), compare);

    int answer = numbers[0] * numbers[1] > numbers[numbers_len - 1] * numbers[numbers_len - 2] ? numbers[0] * numbers[1] : numbers[numbers_len - 1] * numbers[numbers_len - 2];
    answer = answer > numbers[0] * numbers[numbers_len - 1] ? answer : numbers[0] * numbers[numbers_len - 1];

    return answer;

}

void main()
{

    int numbers1[] = { 1, 2, -3, 4, -5 };
    int numbers2[] = { 0, -31, 24, 10, 1, 9 };
    int numbers3[] = { 10, 20, 30, 5, 5, 20, 5 };
    printf("%d %d %d", solution(numbers1, 5), solution(numbers2, 6), solution(numbers3, 7));

}