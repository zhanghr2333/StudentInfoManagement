//module
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

#include "module.h"
#define pr printf

void print_stu_node(Stu *pstu)
{
    printf("\nprint_stu_node:\n");
    print_stu_data(&pstu->data);
    pr("\nprint_stu_node ended\n");
}

void print_stu_data(StuData *pdata)
{
    pr("\n\tprint_stu_data:\n");
    pr("\t\tÑ§ºÅ£º%d",pdata->seq);
    pr("\n\tprint_stu_data ended\n");
}

StuData * new_studata()
{
    StuData* pdata = (StuData *) malloc(sizeof(StuData));
    pdata->seq = 0;
    return pdata;
}
