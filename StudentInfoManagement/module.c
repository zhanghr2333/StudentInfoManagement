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
    pr("\n\tprint_stu_data:\n\n");
    pr("\t\t学号\t%d\n",pdata->seq);
    pr("\t\t姓名\t%s\n",pdata->name);
    pr("\t\t年龄\t%d\n",pdata->age);
    pr("\t\t性别\t%s\n",pdata->gender);
    pr("\t\t出生年月日\t%s\n",pdata->birthday_str);
    pr("\t\t地址\t%s\n",pdata->addr);
    pr("\t\t电话\t%s\n",pdata->tel);
    pr("\t\tE-mail\t%s\n",pdata->email);
    //pr("\t\t\n");
    pr("\n\tprint_stu_data ended\n");
}

StuData * new_studata()
{
    StuData* pdata = (StuData *) malloc(sizeof(StuData));
    pdata->seq = 0;
    strcpy(pdata->name,"NoName");
    pdata->age=0;
    strcpy(pdata->gender,"#");
    strcpy(pdata->birthday_str,"0000/00/00");
    pdata->birthday[0] = 0;
    pdata->birthday[1] = 0;
    pdata->birthday[2] = 0;
    strcpy(pdata->addr,"NoAddress");
    strcpy(pdata->tel,"17023356789");
    strcpy(pdata->email,"NoEmail@xx.com");
    return pdata;
}
