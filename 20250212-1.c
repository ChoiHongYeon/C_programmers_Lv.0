// 직사각형 넓이 구하기 (https://school.programmers.co.kr/learn/courses/30/lessons/120860?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** dots, size_t dots_rows, size_t dots_cols) {

    int answer = 0;
    int width = dots[0][0];
    int height = dots[0][1];
    for (int i = 1; i < 4; i++) {
        if (width != dots[i][0]) {
            if (width > dots[i][0]) {
                width -= dots[i][0];
                break;
            }
            else {
                width = dots[i][0] - width;
                break;
            }
        }
    }
    for (int i = 1; i < 4; i++) {
        if (height != dots[i][1]) {
            if (height > dots[i][1]) {
                height -= dots[i][1];
                break;
            }
            else {
                height = dots[i][1] - height;
                break;
            }
        }
    }

    return width * height;

}

void main()
{

    int** dots1 = (int**)malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++) {
        dots1[i] = (int*)malloc(sizeof(int) * 2);
    }
    dots1[0][0] = 1, dots1[0][1] = 1;
    dots1[1][0] = 2, dots1[1][1] = 1;
    dots1[2][0] = 2, dots1[2][1] = 2;
    dots1[3][0] = 1, dots1[3][1] = 2;
    printf("%d\n", solution(dots1, 4, 2));
    for (int i = 0; i < 4; i++) {
        free(dots1[i]);
    }
    free(dots1);

    int** dots2 = (int**)malloc(sizeof(int*) * 4);
    for (int i = 0; i < 4; i++) {
        dots2[i] = (int*)malloc(sizeof(int) * 2);
    }
    dots2[0][0] = -1, dots2[0][1] = 1;
    dots2[1][0] = 1, dots2[1][1] = 1;
    dots2[2][0] = 1, dots2[2][1] = -1;
    dots2[3][0] = -1, dots2[3][1] = 1;
    printf("%d\n", solution(dots2, 4, 2));
    for (int i = 0; i < 4; i++) {
        free(dots2[i]);
    }
    free(dots2);

}