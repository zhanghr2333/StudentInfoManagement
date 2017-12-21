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
    printf("\t���������ַ��Կ�ʼ���ѧ����Ϣ��������q���˳����ģʽ\n\t");
    ch=getch();
    while(ch!='q')
    {
        prear=add_rear_node(prear);
        prear->next=phead;

        print_stu_node(prear);
        printf("\t��Ҫ���ѧ����Ϣ��\n\t���������ַ��Լ�����ӡ�������q���˳����ģʽ\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //

int search_by_seq(Stu *phead, Stu *prear)
{
    char ch;
    printf("���������ַ��Կ�ʼ��ѧ�Ų�ѯѧ����������q���˳���ѧ�Ų�ѯģʽ\n\t");
    ch=getch();
    while(ch!='q')
    {
        printf("\t����Ҫ��ѯ��ѧ��");
        int cseq =get_number();
        Stu *pstu=get_by_seq(phead,cseq);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("\t\tδ��ѯ�����ѧ��\n\n");
        printf("\t��Ҫ��ѯѧ����\n\t���������ַ��Լ�����ѧ�Ų�ѯ��������q���˳���ѧ�Ų�ѯģʽ\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int search_by_name(Stu *phead, Stu *prear)
{
    char ch;
    printf("���������ַ��Կ�ʼ��������ѯѧ����������q���˳���������ѯģʽ\n\t");
    ch=getch();
    while(ch!='q')
    {
        printf("\t����Ҫ��ѯ������\n");
        char cname[20] ;
        fflush(stdin);
        gets(cname);
        Stu *pstu=get_by_name(phead,cname);
        if(pstu)
            print_stu_node(pstu);
        else
            printf("\n\t\tδ��ѯ�����ѧ��\n\n");
        printf("\t��Ҫ��ѯѧ����\n\t���������ַ��Լ�����������ѯ��������q���˳���������ѯģʽ\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
}

int edit_stu_infoStu(Stu *phead, Stu *prear)
{
    char ch;
    printf("���������ַ��Կ�ʼ�޸�ѧ����Ϣ��������q���˳��޸�ģʽ\n\t");
    ch=getch();
    while(ch!='q')
    {
        int cseq;
        Stu *pstu;
        //input
        inputseq: printf("\t����Ҫ�޸ĵ�ѧ����ѧ��\n");
        cseq =get_number();
        pstu=get_by_seq(phead,cseq);
        if(pstu)
            {
                printf("\n\t\tҪ�޸ĵ�ѧ����Ϣ����\n�޸�ǰ��\n");
                print_stu_node(pstu);
            }
        else
            {
                printf("\t\tδ�ҵ����ѧ��������������\n\n");
                goto inputseq;
            }
        //search
        //input data info
        char datach;

        datainfoget: printf("\n\t��ѡ��Ҫ�޸ĵ��ֶΣ���q���˳�\n\n");
        printf("\t\tѧ��(1)\n");
        printf("\t\t����(2)\n");
        printf("\t\t����(3)\n");
        printf("\t\t�Ա�(4)\n");
        printf("\t\t����������(5)\n");
        printf("\t\t��ַ(6)\n");
        printf("\t\t�绰(7)\n");
        printf("\t\t����(8)\n");
        printf("\t\t�˳�(q)\n");
        fflush(stdin);
        datach = getch();
        if(datach != 'q')
        {
            //edit one student info
            switch(datach)
            {
            case '1':
                {
                    printf("\n\t�����µ�ѧ��");
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
                printf("\t\t��ѧ������Ϣ�޸Ľ���\n");
                goto nextstu;
            }
        goto datainfoget;

        nextstu: printf("\n\n\t��Ҫ�����޸�ѧ����Ϣ��\n\t���������ַ��Լ����޸�ѧ����Ϣ��������q���˳��޸�ģʽ\n\n\t");
        fflush(stdin);
        ch=getch();
    }
    return 1;
} //��ѧ�Ų�ѯѧ����֮���޸���Ϣ��















