// 문자 개수 세기(https://school.programmers.co.kr/learn/courses/30/lessons/181902)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
	
	int* answer = (int*)malloc(sizeof(int) * 52);
	int my_len = strlen(my_string);

	for (int i = 0;i < 52;i++) {
		answer[i] = 0;
	}

	for (int i = 0;i < my_len;i++) {
		if ((int)my_string[i] >= 65 && (int)my_string[i] <= 90) {
			answer[(int)my_string[i] - 65]++;
		}
		else {
			answer[(int)my_string[i] - 71]++;
		}
	}

    return answer;
}