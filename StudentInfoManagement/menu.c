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
    printf("���������ַ��Կ�ʼ���ѧ����������q���˳����ģʽ\n");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;

        print_stu_node(prear);
        printf("��Ҫ���ѧ����\n���������ַ��Լ�����ӡ�������q���˳����ģʽ\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //

int search_by_seq(Stu *phead, Stu *prear)
{
    char ch;
    printf("���������ַ��Կ�ʼ��ѯѧ����������q���˳���ѯģʽ\n");
    ch=getch();
    while(ch!='q')
    {
        printf("����Ҫ��ѯ��ѧ��");
        int cseq =get_number();
        Stu *pstu=get_by_seq(phead,cseq);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("δ��ѯ�����ѧ��\n");
        printf("��Ҫ��ѯѧ����\n���������ַ��Լ�����ѯ��������q���˳���ѯģʽ\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int search_by_name(Stu *phead, Stu *prear)
{
    char ch;
    printf("���������ַ��Կ�ʼ��ѯѧ����������q���˳���ѯģʽ\n");
    ch=getch();
    while(ch!='q')
    {
        printf("����Ҫ��ѯ������\n");
        char cname[20] ;
        fflush(stdin);
        gets(cname);
        Stu *pstu=get_by_name(phead,cname);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("δ��ѯ�����ѧ��\n");
        printf("��Ҫ��ѯѧ����\n���������ַ��Լ�����ѯ��������q���˳���ѯģʽ\n");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

