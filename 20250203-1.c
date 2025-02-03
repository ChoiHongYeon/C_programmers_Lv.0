// 정수를 나선형으로 배치하기 (https://school.programmers.co.kr/learn/courses/30/lessons/181832?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int** solution(int n) {

    int** answer = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)calloc(n, sizeof(int));
    }

    int way = 0; // 0 : 오른쪽, 1 : 아래쪽, 2 : 왼쪽, 3 : 위쪽
    int w = 0;
    int h = 0;

    for (int i = 0; i < n * n; i++) {

        answer[h][w] = i + 1;

        switch (way) {
        case 0:
            if (w + 1 >= n || answer[h][w + 1] != 0) {
                way++;
                h++;
            }
            else {
                w++;
            }
            break;
        case 1:
            if (h + 1 >= n || answer[h + 1][w] != 0) {
                way++;
                w--;
            }
            else {
                h++;
            }
            break;
        case 2:
            if (w - 1 < 0 || answer[h][w - 1] != 0) {
                way++;
                h--;
            }
            else {
                w--;
            }
            break;
        default:
            if (h - 1 < 0 || answer[h - 1][w] != 0) {
                way = 0;
                w++;
            }
            else {
                h--;
            }
        }

    }

    return answer;

}

void main()
{

    int** result1 = solution(4);
    int** result2 = solution(5);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", result1[i][j]);
        }
        printf("\n");
    }
    free(result1);

    printf("\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", result2[i][j]);
        }
        printf("\n");
    }
    free(result2);

}