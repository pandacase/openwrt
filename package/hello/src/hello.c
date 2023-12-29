
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "uci.h"


struct hello {
    char agent[50];
    char url[256];
    int delay;
};