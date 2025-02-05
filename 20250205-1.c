// 연속된 수의 합 (https://school.programmers.co.kr/learn/courses/30/lessons/120923?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {

    int* answer = (int*)malloc(num * sizeof(int));
    int n = 0;
    int m = num / 2;
    if (total % num == 0)
        n = total / num;
    else
        n = (total / num) + 1;

    for (int i = 0; i < num; i++) {
        answer[i] = n - m + i;
    }

    return answer;
}

void main()
{

    int* result1 = solution(3, 12);
    int* result2 = solution(5, 15);
    int* result3 = solution(4, 14);
    int* result4 = solution(5, 5);

    for (int i = 0; i < 3; i++) {
        printf("%d ", result1[i]);
    }
    free(result1);
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", result2[i]);
    }
    free(result2);
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("%d ", result3[i]);
    }
    free(result3);
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", result4[i]);
    }
    free(result4);

}