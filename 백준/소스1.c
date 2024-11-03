#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int length;
    char text[51];
} word;

int compare(const void* a, const void* b) {
    word A = *(word*)a;
    word B = *(word*)b;

    if (A.length > B.length) {
        return 1;
    }

    else if (A.length < B.length) {
        return -1;
    }

    return strcmp(A.text, B.text);
}

word arr[20000];
int main() {
    int N;

    scanf("%d", &N);


    for (int i = 0; i < N; i++) {
        scanf("%s", arr[i].text);

        arr[i].length = strlen(arr[i].text);
    }

    qsort(arr, N, sizeof(word), compare);

    printf("%s\n", arr[0].text);
    for (int i = 1; i < N; i++) {
        if (strcmp(arr[i - 1].text, arr[i].text)) {
            printf("%s\n", arr[i].text);
        }
    }

    return 0;
}