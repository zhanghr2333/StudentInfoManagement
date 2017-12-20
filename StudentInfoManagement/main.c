#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

#include "module.h"

int main()
{
    print_stu_node((Stu *) malloc(sizeof(Stu)));
    return 0;
}
