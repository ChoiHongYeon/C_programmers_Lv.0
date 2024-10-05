// 대문자로 바꾸기 (https://school.programmers.co.kr/learn/courses/30/lessons/181877?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* myString) {

    char* answer = (char*)malloc(sizeof(char) * (strlen(myString) + 1));
    for (int i = 0; i < strlen(myString); i++) {
        if (myString[i] >= 97)
            answer[i] = myString[i] - 32;
        else
            answer[i] = myString[i];
    }
    answer[strlen(myString)] = '\0';

    return answer;
}

void main()
{

    const char* myString1 = "aBcDeFg";
    const char* myString2 = "AAA";
    printf("%s\n", solution(myString1));
    printf("%s", solution(myString2));

}