#include <stdio.h>

#define BUFSIZE 4096

int main()
{
    char buffer[BUFSIZE];
    int red;
    int offset = 0;

    int last_line = 0;

    while ((red = getchar()) != EOF) {
        if (offset == BUFSIZE) {
            printf("%s", buffer);
            offset = 0;
        }
        if (last_line && (red == '\n' || red == '\r')) {
            continue;
        }
        if ((red == ' ' || red == '\n') && last_line == 0) {
            buffer[offset] = '\0';
            printf("%s\n", buffer);
            offset = 0;
            last_line = 1;
        } else {
            buffer[offset] = (char)red;
            offset++;
            last_line = 0;
        }
    }
    if (offset > 0) {
        printf("%s\n", buffer);
    }


    return 0;
}
