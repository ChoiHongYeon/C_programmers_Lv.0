// 캐릭터의 좌표 (https://school.programmers.co.kr/learn/courses/30/lessons/120861?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    
    int* answer = (int*)calloc(2, sizeof(int));
    char* direction[] = { "up", "down", "left", "right" };
    int move_x[] = { 0, 0, -1, 1 };
    int move_y[] = { 1, -1, 0, 0 };

    for (int i = 0; i < keyinput_len; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(direction[j], keyinput[i]) == 0) {
                if (answer[0] + move_x[j] >= (board[0] / 2 * -1) && answer[0] + move_x[j] <= (board[0] / 2) && answer[1] + move_y[j] >= (board[1] / 2 * -1) && answer[1] + move_y[j] <= (board[1] / 2)) {
                    answer[0] += move_x[j];
                    answer[1] += move_y[j];
                }
            }
        }
    }

    return answer;

}

void main()
{

    const char* keyinput1[] = { "left", "right", "up", "right", "right" };
    const char* keyinput2[] = { "down", "down", "down", "down", "down" };
    int board1[] = { 11, 11 };
    int board2[] = { 7, 9 };
    int* result1 = solution(keyinput1, 5, board1, 2);
    printf("%d %d\n", result1[0], result1[1]);
    int* result2 = solution(keyinput2, 5, board2, 2);
    printf("%d %d\n", result2[0], result2[1]);

}