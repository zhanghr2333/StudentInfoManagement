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
    printf("��Ҫ���ѧ����\n����q���˳����ģʽ\n");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;
        print_stu_node(prear);
        printf("��Ҫ���ѧ����\n����q���˳����ģʽ\n");
        fflush(stdin);
        ch=getch();
    }
    return 0;
}
