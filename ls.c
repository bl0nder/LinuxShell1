#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {    
    
    //No flags
    if (!strcmp(argv[1], "\0") && !strcmp(argv[2], "\0")) {
        errno = 0;
        
        DIR* directory;
        struct dirent* readDir;
        
        directory = opendir(".");
        readDir = readdir(directory);


        if (errno != 0) {
            printf("Directory does not exist");
            return -1;
        }
        else {
            printf("%s\n", readDir -> d_name);
        }
    }

    printf("Hello world :)\n");
    return 0;
}