#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>


int main(int argc, char* argv[]) {

    //No flags
    if (!strcmp(argv[0], "\0") && strcmp(argv[1], "\0")) {
        int createDir = mkdir(argv[2], 777);

        if (createDir!=0) {
            printf("[!] There was an error in creating directory '%s'.\n", argv[2]);
            exit(-1);
        }
    }

    //-m flag only
    if (!strcmp(argv[0], "-m") && !strcmp(argv[1], "\0")) {
        int createDir = mkdir(argv[2], S_IRWXU);
    }

    exit(0);
}