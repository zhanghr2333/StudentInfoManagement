/*
StudentInfoManagementSystem version 0.1.1
About : git://github.com/OhnkytaBlabdey/StudentInfoManagement
Email : 1263189143@qq.com
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

#include "module.h"


int main()
{
    Stu *phead = new_stunode();
    Stu *prear = new_stunode();
    phead->next=prear;
    prear->next=phead;
    prear->id = 1;
    //print_stu_node(get_pre_node(phead,phead));
    //print_stu_node(phead);
    //print_stu_node(prear);
    add_rear(phead,prear);
    return 0;
}
