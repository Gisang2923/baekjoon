# include <stdio.h>
# include <stdlib.h>

int list[1000000];
int compare(const void* a, const void* b) {
    int n1 = *(int*)a;
    int n2 = *(int*)b;

    if (n1 > n2) {
        return -1;
    }
    if (n1 < n2) {
        return 1;
    }
    return 0;
}

int main(void) {
    int i;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &list[i]);
    }

    qsort(list, 5, sizeof(int), compare);

    for (i = 0; i < 2; i++) {
        printf("%d\n", list[i]);
    }
    return 0;
}
