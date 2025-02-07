// 짝수는 싫어요 (https://school.programmers.co.kr/learn/courses/30/lessons/120813?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {

    int* answer = (int*)malloc(100 * sizeof(int));
    int a = 0;
    for (int i = 1; i <= n; i += 2) {
        answer[a++] = i;
    }
    realloc(answer, a * sizeof(int));
    return answer;

}

void main()
{

    int* result1 = solution(10);
    int* result2 = solution(15);
    for (int i = 0; i < 5; i++) {
        printf("%d ", result1[i]);
    }
    free(result1);
    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", result2[i]);
    }
    free(result2);

}