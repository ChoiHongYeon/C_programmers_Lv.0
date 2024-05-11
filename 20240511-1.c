// 첫 번째로 나오는 음수(https://school.programmers.co.kr/learn/courses/30/lessons/181896?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num_list[], size_t num_list_len) {
    int answer = -1;

    for (int i = 0;i < num_list_len; i++) {
        if (num_list[i] < 0) {
            answer = i;
        }
    }

    return answer;
}

void main()
{
    int A[] = { 12, 4, 15, 46, 38, -2, 15 };
    int B[] = { 13, 22, 53, 24, 15, 6 };

    size_t a = sizeof(A) / sizeof(A[0]);
    size_t b = sizeof(B) / sizeof(B[0]);

    printf("%d\n", solution(A, a));
    printf("%d", solution(B, b));
}