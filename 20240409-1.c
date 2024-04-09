// 부분 문자열 이어 붙여 문자열 만들기(https://school.programmers.co.kr/learn/courses/30/lessons/181911)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_strings[], size_t my_strings_len, int** parts, size_t parts_rows, size_t parts_cols) {

	int a = 0;

	for (int i = 0;i < parts_rows;i++) {
		a += parts[i][1] - parts[i][0] + 1;
	}

	char* answer = (char*)malloc(a + 1);

	int b = 0;

	for (int i = 0;i < parts_rows;i++) {
		int c = parts[i][0];
		int d = parts[i][1];
		for (int j = c;j <= d;j++) {
			answer[b++] = my_strings[i][j];
		}
	}

	answer[b] = '\0';

	return answer;
}