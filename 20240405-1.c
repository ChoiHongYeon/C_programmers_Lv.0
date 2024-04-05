// 주사위 게임 3(https://school.programmers.co.kr/learn/courses/30/lessons/181916)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    
	int answer = 0;
    int number[4] = { a,b,c,d };

	for (int i = 0;i < 3;i++) {
		for (int j = i + 1;j < 4;j++) {
			if (number[i] > number[j]) {
				int k = number[i];
				number[i] = number[j];
				number[j] = k;
			}
		}
	}
	
	if (number[0] == number[1] && number[1] == number[2] && number[2] == number[3]) answer = 1111 * number[0];
	else if (number[0] == number[1] && number[1] == number[2] && number[2] != number[3]) answer = (10 * number[0] + number[3]) * (10 * number[0] + number[3]);
	else if (number[0] != number[1] && number[1] == number[2] && number[2] == number[3]) answer = (10 * number[3] + number[0]) * (10 * number[3] + number[0]);
	else if (number[0] == number[1] && number[2] == number[3]) answer = (number[0] + number[3]) * (number[3] - number[0]);
	else if (number[0] == number[1]) answer = number[2] * number[3];
	else if (number[1] == number[2]) answer = number[0] * number[3];
	else if (number[2] == number[3]) answer = number[0] * number[1];
	else answer = number[0];

    return answer;
}