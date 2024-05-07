// 접미사인지 확인하기(https://school.programmers.co.kr/learn/courses/30/lessons/181908?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* is_suffix) {
    int answer = 1;

    int my_len = strlen(my_string);
    int is_len = strlen(is_suffix);

    if (is_len > my_len) answer = 0;
    else {
        for (int i = 0;i < is_len;i++) {
            if (answer != 0) {
                if (my_string[my_len - 1 - i] != is_suffix[is_len - 1 - i]) {
                    answer = 0;
                }
            }
        }
    }

    return answer;
}