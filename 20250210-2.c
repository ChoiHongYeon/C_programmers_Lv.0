// 2차원으로 만들기 (https://school.programmers.co.kr/learn/courses/30/lessons/120842?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int num_list[], size_t num_list_len, int n) {

    int** answer = (int**)malloc(sizeof(int*) * num_list_len / 2);
    for (int i = 0; i < num_list_len / 2; i++) {
        answer[i] = (int*)malloc(sizeof(int) * n);
    }

    int count = 0;
    for (int i = 0; i < num_list_len / 2; i++) {
        for (int j = 0; j < n; j++) {
            answer[i][j] = num_list[count++];
        }
    }

    return answer;

}

void main()
{

    int num_list1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int num_list2[] = { 100, 95, 2, 4, 5, 6, 18, 33, 948 };
    size_t num_list_len1 = 8;
    size_t num_list_len2 = 9;
    int n1 = 2;
    int n2 = 3;
    int** result1 = solution(num_list1, num_list_len1, n1);
    int** result2 = solution(num_list2, num_list_len2, n2);
    for (int i = 0; i < 4; i++) {
        printf("%d %d\n", result1[i][0], result1[i][1]);
    }
    free(result1);
    for (int i = 0; i < 3; i++) {
        printf("%d %d %d\n", result2[i][0], result2[i][1], result2[i][2]);
    }
    free(result2);

}