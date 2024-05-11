// 2의 영역(https://school.programmers.co.kr/learn/courses/30/lessons/181894)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) {

    int first = -1, last = -1;
    for (int i = 0;i < arr_len;i++) {
        if (arr[i] == 2) {
            first = i;
            break;
        }
    }
    for (int i = arr_len - 1;i >= 0;i--) {
        if (arr[i] == 2) {
            last = i;
            break;
        }
    }

    int answer_len;
    int j = 0;
    if (first == last) {
        answer_len = 1;
    }
    else {
        answer_len = last - first + 1;
    }
    int* answer = (int*)malloc(sizeof(int) * answer_len);
    if (first == -1) {
        answer[0] = -1;
    }
    else if (first == last) {
        answer[0] = arr[first];
    }
    else {
        for (int i = first;i <= last;i++) {
            answer[j++] = arr[i];
        }
    }

    return answer;
}