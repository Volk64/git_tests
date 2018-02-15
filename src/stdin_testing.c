#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
    char buffer[10];
    read(STDIN_FILENO, buffer, 10);
    printf("%s\n", buffer);
    return 0;
}
