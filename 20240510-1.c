// qr code(https://school.programmers.co.kr/learn/courses/30/lessons/181903?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int q, int r, const char* code) {
    
    int code_len = strlen(code);
    int answer_len = 0;
    
    for (int i = 0; i < code_len; i++) {
        if (i % q == r) {
            answer_len++;
        }
    }
    
    char* answer = (char*)malloc(sizeof(char) * (answer_len + 1));

    for (int i = 0; i < answer_len; i++) {
        answer[i] = code[i * q + r];
    }

    answer[answer_len] = '\0';

    return answer;
}