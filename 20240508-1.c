// 문자열 뒤집기(https://school.programmers.co.kr/learn/courses/30/lessons/181905?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int s, int e) {
    int my_len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (my_len + 1));

    for (int i = 0;i < my_len;i++) {
        if (i<s || i>e) {
            answer[i] = my_string[i];
        }
        else {
            answer[i] = my_string[s + e - i];
        }
    }

    answer[my_len] = '\0';

    return answer;
}