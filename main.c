#include "runner.h"

int main(int argc, char const *argv[])
{
    printf("Hello, World!\n");

    if (argc >= 2)
    {
        if (does_file_exist(argv[1]))
            printf("%s\n", argv[1]);
    }

    // void* image = NULL; // Start off as empty

    return 0;
}