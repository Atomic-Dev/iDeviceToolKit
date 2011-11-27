#include <stdio.h>
#include <stdlib.h>
#include "cmd.h"

int process_command(const char *cmd) {
    int x = system(cmd);
    return x;
}
