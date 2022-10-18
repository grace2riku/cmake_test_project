#include <stdio.h>
#include "add.h"

int main(int argc, char** argv) {
    printf("glob_srcs test start.\n");

    int answer = add(1, 2);

    printf("add(1, 2)=%d.\n", answer);

}