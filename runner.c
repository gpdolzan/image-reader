#include "runner.h"

bool does_file_exist(const char* file_path)
{
    FILE* file;

    file = fopen(file_path, "r");

    if (file == NULL)
        return false;
    
    fclose(file);
    return true;
}