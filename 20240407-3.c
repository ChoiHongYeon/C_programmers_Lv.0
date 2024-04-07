// 문자열 여러 번 뒤집기(https://school.programmers.co.kr/learn/courses/30/lessons/181913)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc((strlen(my_string) + 1) * sizeof(char));
    strcpy(answer, my_string);

    for (int i = 0;i < queries_rows;i++) {
        int a = queries[i][0];
        int b = queries[i][1];
        while (a < b) {
            char temp = answer[a];
            answer[a] = answer[b];
            answer[b] = temp;
            a++;
            b--;
        }
    }


    return answer;
}