//module

#include "module.h"
#define pr printf

void print_stu_node(Stu *pstu)
{
    printf("\nprint_stu_node:\n");
    pr("\tNode ID :\t%d\n",pstu->id);
    print_stu_data(&pstu->data);
    pr("\nprint_stu_node ended\n");
} //��ʾһ�� Stu �������ݵ�ֵ

void print_stu_data(StuData *pdata)
{
    pr("\n\tprint_stu_data:\n\n");
    pr("\t\tѧ��\t%d\n",pdata->seq);
    pr("\t\t����\t%s\n",pdata->name);
    pr("\t\t����\t%d\n",pdata->age);
    pr("\t\t�Ա�\t%s\n",pdata->gender);
    pr("\t\t����������\t%s\n",pdata->birthday_str);
    pr("\t\t��ַ\t%s\n",pdata->addr);
    pr("\t\t�绰\t%s\n",pdata->tel);
    pr("\t\tE-mail\t%s\n",pdata->email);
    //pr("\t\t\n");
    pr("\n\tprint_stu_data ended\n");
} //��ʾһ�� StuData �ĸ������ֵ

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
    strcpy(pdata->tel,"NoTelPhone");
    strcpy(pdata->email,"NoEmail");
    return pdata;
} // ���ظ������ֵ��Ϊȱʡֵ��һ���µ� StuData ���ڴ��ַ

Stu* new_stunode()
{
    Stu* pstu = (Stu *) malloc(sizeof(Stu));
    pstu->id = 0;
    pstu->next=NULL; //safe
    pstu->data=*new_studata(); //very safe
    return pstu;
} // ���ظ������ֵ��Ϊȱʡֵ��һ���µ� Stu ���ڴ��ַ

 /*eg,
prear=add_rear_node(prear);
prear->next=phead;
 */
Stu* add_rear_node(Stu *prear)
{
    Stu *phead = prear->next;
    int newid = get_list_count(phead);
    Stu *papp = new_stunode();
    papp->id = newid + 1;
    init_stu_data(&papp->data);
    prear->next=papp;
    return papp;
}
 //������β�����һ���µĽ�㣬�������˹���ʼ��������β����ָ��û����������ڲ����и���
 //����ֵ  0��ʧ�ܣ�1���ɹ���

int init_stu_data(StuData *pdata)
{
    pr("����ѧ��");
    pdata->seq = get_number();
    pr("��������\n\t\t");
    fflush(stdin);
    gets(pdata->name);
    pr("��������");
    pdata->age=get_number();
    pr("�����Ա�\n\t\t");
    fflush(stdin);
    gets(pdata->gender);
    pr("����������");
    pdata->birthday[0] = get_number();
    pr("��������·�");
    pdata->birthday[1] = get_number();
    pr("���������");
    pdata->birthday[2] = get_number();
    sprintf(pdata->birthday_str,"%d/%d/%d",pdata->birthday[0],pdata->birthday[1],pdata->birthday[2]);
    pr("�����ַ\n\t\t");
    fflush(stdin);
    gets(pdata->addr);
    pr("����绰\n\t\t");
    fflush(stdin);
    gets(pdata->tel);
    pr("��������\n\t\t");
    fflush(stdin);
    gets(pdata->email);
    return 1;
} //�˹���������ʼ��

int get_number()
{
    int n;
    input: fflush(stdin);
    //pr("��1~2017����������\n");
    pr("\n\t\t");
    scanf("%d",&n);
    if(n<1||n>2018)
        goto input;
    return n;
}

int get_list_count(Stu *phead)
{
    Stu *p=phead;
    int count=0;

    p=p->next;
    while(p!=phead)
    {
        p=p->next;
        count++;
    }
    return count;
}


Stu* get_pre_node(Stu* phead, Stu* pthis)
{
    Stu *p=phead;
    while(p->next!=pthis)
    {
        p=p->next;
    }
    return p;
} //����ǰһ�������ڴ��ַ.phead ��pre ��prear


Stu* get_by_seq(Stu* phead,const int cseq)
{
    Stu *p=phead->next;
    while(p->data.seq != cseq && p != phead )
        p=p->next;
    if(p==phead)
        p=NULL;
    return p;
}

Stu* get_by_name(Stu* phead,const char* cname)
{
    Stu *p=phead->next;
    while(strcmp(p->data.name,cname ) != 0 && p != phead )
        p=p->next;
    if(p==phead)
        p=NULL;
    return p;
}













