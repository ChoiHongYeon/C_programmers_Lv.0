﻿// 배열 만들기 3(https://school.programmers.co.kr/learn/courses/30/lessons/181895)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {

    int answer_len = intervals[0][1] - intervals[0][0] + intervals[1][1] - intervals[1][0] + 2;
    int* answer = (int*)malloc(sizeof(int) * answer_len);

    int i = 0;
    for (int j = 0; j < 2; j++) {
        for (int k = intervals[j][0];k <= intervals[j][1];k++) {
            answer[i++] = arr[k];
        }
    }

    return answer;
}