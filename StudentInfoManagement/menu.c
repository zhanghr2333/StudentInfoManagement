
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>

#include "menu.h"

int add_rear(Stu *phead, Stu *prear)
{
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
    return 1;
}

