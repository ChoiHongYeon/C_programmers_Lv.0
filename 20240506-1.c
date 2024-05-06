// 문자열의 뒤의 n글자(https://school.programmers.co.kr/learn/courses/30/lessons/181910?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc(sizeof(char) * (n + 1));
    int len = strlen(my_string);
    for (int i = 0;i < n;i++) {
        answer[i] = my_string[len - n + i];
    }
    answer[n] = '\0';
    return answer;
}