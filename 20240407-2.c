// 9로 나눈 나머지(https://school.programmers.co.kr/learn/courses/30/lessons/181914)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* number) {
    int answer = 0;
    int A = 0, i;
    for (i = 0;i < strlen(number);i++) {
        A += (number[i] - '0');
    }
    answer = A % 9;
    return answer;
}