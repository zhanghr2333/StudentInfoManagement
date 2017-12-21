//module

#include "module.h"
#define pr printf

void print_stu_node(Stu *pstu)
{
    printf("\nprint_stu_node:\n");
    pr("\tNode ID :\t%d\n",pstu->id);
    print_stu_data(&pstu->data);
    pr("\nprint_stu_node ended\n");
} //显示一个 Stu 结点的数据的值

void print_stu_data(StuData *pdata)
{
    pr("\n\tprint_stu_data:\n\n");
    pr("\t\t学号\t%d\n",pdata->seq);
    pr("\t\t姓名\t%s\n",pdata->name);
    pr("\t\t年龄\t%d\n",pdata->age);
    pr("\t\t性别\t%s\n",pdata->gender);
    pr("\t\t出生年月日\t%s\n",pdata->birthday_str);
    pr("\t\t地址\t%s\n",pdata->addr);
    pr("\t\t电话\t%s\n",pdata->tel);
    pr("\t\tE-mail\t%s\n",pdata->email);
    //pr("\t\t\n");
    pr("\n\tprint_stu_data ended\n");
} //显示一个 StuData 的各个域的值

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
} // 返回各项域的值都为缺省值的一个新的 StuData 的内存地址

Stu* new_stunode()
{
    Stu* pstu = (Stu *) malloc(sizeof(Stu));
    pstu->id = 0;
    pstu->next=NULL; //safe
    pstu->data=*new_studata(); //very safe
    return pstu;
} // 返回各项域的值都为缺省值的一个新的 Stu 的内存地址

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
 //在链表尾部添加一个新的结点，并对其人工初始化。但是尾部的指针没有在这个的内部进行更新
 //返回值  0：失败，1：成功。

int init_stu_data(StuData *pdata)
{
    pr("输入学号");
    pdata->seq = get_number();
    pr("输入姓名\n\t\t");
    fflush(stdin);
    gets(pdata->name);
    pr("输入年龄");
    pdata->age=get_number();
    pr("输入性别\n\t\t");
    fflush(stdin);
    gets(pdata->gender);
    pr("输入出生年份");
    pdata->birthday[0] = get_number();
    pr("输入出生月份");
    pdata->birthday[1] = get_number();
    pr("输入出生日");
    pdata->birthday[2] = get_number();
    sprintf(pdata->birthday_str,"%d/%d/%d",pdata->birthday[0],pdata->birthday[1],pdata->birthday[2]);
    pr("输入地址\n\t\t");
    fflush(stdin);
    gets(pdata->addr);
    pr("输入电话\n\t\t");
    fflush(stdin);
    gets(pdata->tel);
    pr("输入邮箱\n\t\t");
    fflush(stdin);
    gets(pdata->email);
    return 1;
} //人工输入来初始化

int get_number()
{
    int n;
    input: fflush(stdin);
    //pr("（1~2017的正整数）\n");
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
} //返回前一个结点的内存地址.phead 的pre 是prear


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













