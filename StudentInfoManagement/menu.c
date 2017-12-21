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
    printf("\t输入任意字符以开始添加学生信息，或输入q以退出添加模式\n\t");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;

        print_stu_node(prear);
        printf("\t还要添加学生信息吗？\n\t输入任意字符以继续添加。或输入q以退出添加模式\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //

int search_by_seq(Stu *phead, Stu *prear)
{
    char ch;
    printf("输入任意字符以开始按学号查询学生，或输入q以退出按学号查询模式\n\t");
    ch=getch();
    while(ch!='q')
    {
        printf("\t输入要查询的学号");
        int cseq =get_number();
        Stu *pstu=get_by_seq(phead,cseq);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("\t\t未查询到这个学生\n\n");
        printf("\t还要查询学生吗？\n\t输入任意字符以继续按学号查询。或输入q以退出按学号查询模式\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int search_by_name(Stu *phead, Stu *prear)
{
    char ch;
    printf("输入任意字符以开始按姓名查询学生，或输入q以退出按姓名查询模式\n\t");
    ch=getch();
    while(ch!='q')
    {
        printf("\t输入要查询的姓名\n");
        char cname[20] ;
        fflush(stdin);
        gets(cname);
        Stu *pstu=get_by_name(phead,cname);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("\n\t\t未查询到这个学生\n\n");
        printf("\t还要查询学生吗？\n\t输入任意字符以继续按姓名查询。或输入q以退出按姓名查询模式\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int edit_stu_infoStu(Stu *phead, Stu *prear)
{
    char ch;
    printf("输入任意字符以开始修改学生信息，或输入q以退出修改模式\n\t");
    ch=getch();
    while(ch!='q')
    {
        int cseq;
        Stu *pstu;
        //input
        inputseq: printf("\t输入要修改的学生的学号\n");
        cseq =get_number();
        pstu=get_by_seq(phead,cseq);
        if(pstu)
            {
                printf("\n\t\t要修改的学生信息如下\n修改前：\n");
                print_stu_node(pstu);
            }
        else
            {
                printf("\t\t未找到这个学生，请重新输入\n\n");
                goto inputseq;
            }
        //search
        //input data info
        char datach;

        datainfoget: printf("\n\t请选择要修改的字段，或按q以退出\n\n");
        printf("\t\t学号(1)\n");
        printf("\t\t姓名(2)\n");
        printf("\t\t年龄(3)\n");
        printf("\t\t性别(4)\n");
        printf("\t\t出生年月日(5)\n");
        printf("\t\t地址(6)\n");
        printf("\t\t电话(7)\n");
        printf("\t\t邮箱(8)\n");
        printf("\t\t退出(q)\n");
        fflush(stdin);
        datach = getch();
        if(datach != 'q')
        {
            //edit one student info
            switch(datach)
            {
            case '1':
                {
                    printf("\n\t输入新的学号");
                    pstu->data.seq = get_number();
                    break;
                }
            default:
                {
                    printf("\t\tNot Available!\n");
                    goto datainfoget;
                }
            }
        }
        else
            {
                printf("\t\t此学生的信息修改结束\n");
                goto nextstu;
            }
        goto datainfoget;

        nextstu: printf("\n\n\t还要继续修改学生信息吗？\n\t输入任意字符以继续修改学生信息。或输入q以退出修改模式\n\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //以学号查询学生，之后修改信息。















