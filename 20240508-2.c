// 세로 읽기(https://school.programmers.co.kr/learn/courses/30/lessons/181904)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int m, int c) {
    int my_len = strlen(my_string);
    int answer_len = 0;
    
    for (int i = c - 1;i < my_len;i += m) {
        answer_len++;
    }
    
    char* answer = (char*)malloc(sizeof(char)*(answer_len+1));

    int j = 0;

    for (int i = c - 1;i < my_len;i += m) {
        answer[j++] = my_string[i];
    }

    answer[answer_len] = '\0';

    return answer;
}