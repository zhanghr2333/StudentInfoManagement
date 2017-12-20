//menu
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
    printf("输入任意字符以开始添加学生，或输入q以退出添加模式\n");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;

        print_stu_node(prear);
        printf("还要添加学生吗？\n输入任意字符以继续添加。或输入q以退出添加模式\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //

int search_by_seq(Stu *phead, Stu *prear)
{
    char ch;
    printf("输入任意字符以开始查询学生，或输入q以退出查询模式\n");
    ch=getch();
    while(ch!='q')
    {
        printf("输入要查询的学号");
        int cseq =get_number();
        Stu *pstu=get_by_seq(phead,cseq);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("未查询到这个学生\n");
        printf("还要查询学生吗？\n输入任意字符以继续查询。或输入q以退出查询模式\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int search_by_name(Stu *phead, Stu *prear)
{
    char ch;
    printf("输入任意字符以开始查询学生，或输入q以退出查询模式\n");
    ch=getch();
    while(ch!='q')
    {
        printf("输入要查询的姓名\n");
        char cname[20] ;
        fflush(stdin);
        gets(cname);
        Stu *pstu=get_by_name(phead,cname);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("未查询到这个学生\n");
        printf("还要查询学生吗？\n输入任意字符以继续查询。或输入q以退出查询模式\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

