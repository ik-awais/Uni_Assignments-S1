#include <stdio.h>
int main()
{
    int start, end, mult;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        for (int j = 1; j <= 10; j++) {
            mult = j * i;
            if (mult % start == 0 && mult % end == 0) {
                printf("SKIP ");
                continue;
            }
            printf("%d ", mult);
        }
        printf("\n");
    }
    return 0;
}