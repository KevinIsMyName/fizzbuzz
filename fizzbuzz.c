#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fizzbuzz(int N)
{
    char* buffer;
    for (int i = 1; i <= N; i++) {
        buffer = (char*) malloc(8 * sizeof(char));
        if (i % 3 == 0) {
            strcat(buffer, "Fizz");
        } 
        if (i % 5 == 0) {
            strcat(buffer, "Buzz");
        }
        printf("%s\n", buffer);
        free(buffer);
    }
}

int main(int argc, char* argv[])
{
    int N = atoi(argv[1]);
    printf("%d\n", N);
    fizzbuzz(N);
    return 0;
}