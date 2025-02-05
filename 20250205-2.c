// 특이한 정렬 (https://school.programmers.co.kr/learn/courses/30/lessons/120880?language=c)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numlist[], size_t numlist_len, int n) {

    int* answer = (int*)malloc(sizeof(int) * numlist_len);
    for (int i = 0; i < numlist_len; i++) {
        answer[i] = numlist[i];
        if (numlist[i] < n)
            numlist[i] = n - numlist[i];
        else
            numlist[i] -= n;
    }

    for (int i = numlist_len - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (numlist[j] > numlist[j + 1] || (numlist[j] == numlist[j + 1] && answer[j] < answer[j + 1])) {
                int tmp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = tmp;
                int tmp2 = numlist[j];
                numlist[j] = numlist[j + 1];
                numlist[j + 1] = tmp2;
            }
        }
    }

    return answer;
}

void main()
{

    int numlist1[] = { 1, 2, 3, 4, 5, 6 };
    int numlist2[] = { 10000,20,36,47,40,6,10,7000 };
    size_t numlist_len1 = 6;
    size_t numlist_len2 = 8;
    int n_1 = 4;
    int n_2 = 30;
    int* result1 = solution(numlist1, numlist_len1, n_1);
    int* result2 = solution(numlist2, numlist_len2, n_2);
    for (int i = 0; i < numlist_len1; i++) {
        printf("%d ", result1[i]);
    }
    printf("\n");
    for (int i = 0; i < numlist_len2; i++) {
        printf("%d ", result2[i]);
    }

}