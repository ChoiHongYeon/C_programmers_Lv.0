// 구슬을 나누는 경우의 수 (https://school.programmers.co.kr/learn/courses/30/lessons/120840?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {

    long long answer = 1;
    for (int i = 1; i <= share; i++) {
        answer *= balls + 1 - i;
        answer /= i;
    }

    return (int)answer;
}

void main()
{
    printf("%d %d", solution(3, 2), solution(5, 3));
}