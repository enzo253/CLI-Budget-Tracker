#include <stdio.h>
#include <string.h>
#include <unistd.h>


typedef struct {
    char date[11];
    char category[MAX_CATEGORY_LENGTH];
    char description[100];
    float amount;
} KeyData;

void scanInput(char *date, char *category, char *description, float *amount) {

    printf("Date (YYYY-MM-DD): ");
    scanf("%10s", date);

    printf("Category: ");
    scanf("%29s", category);
}
