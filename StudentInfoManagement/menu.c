
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
    return 1;
}

