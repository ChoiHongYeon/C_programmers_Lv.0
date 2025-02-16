// 삼각형의 완성조건 (2) (https://school.programmers.co.kr/learn/courses/30/lessons/120868?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {

    int bigNum = sides[0];
    int smallNum = sides[1];
    if (smallNum > bigNum) {
        int tmp = smallNum;
        smallNum = bigNum;
        bigNum = tmp;
    }

    return (bigNum + smallNum) - (bigNum - smallNum) - 1;

}

void main()
{

    int sides1[] = { 1, 2 };
    int sides2[] = { 3, 6 };
    int sides3[] = { 11, 7 };
    printf("%d %d %d", solution(sides1, 2), solution(sides2, 2), solution(sides3, 2));

}