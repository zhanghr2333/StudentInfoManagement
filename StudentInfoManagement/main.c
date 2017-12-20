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
    //print_stu_node(phead);
    //print_stu_node(prear);
    char ch;
    printf("还要添加学生吗？\n输入q以退出添加模式\n");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;
        print_stu_node(prear);
        printf("还要添加学生吗？\n输入q以退出添加模式\n");
        fflush(stdin);
        ch=getch();
    }
    return 0;
}
