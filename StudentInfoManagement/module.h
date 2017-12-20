//module
typedef struct {
    int seq; //ѧ�� eg, 2436
    char name[13]; //���� eg, ����
    int age; //���� eg, 16
    char gender[5]; //�Ա� eg, ��
    char birthday_str[12]; //�������ڵ��ַ���ʽ eg,1999/11/23
    int birthday[3]; //�������� eg, {1999, 11, 23}
    char addr[20]; //��ַ eg, ����·116��
    char tel[15]; //�绰 eg, 17023354321
    char email[30]; //E-mail eg, AbyssRising@foxmail.com
} StuData; //ѧ������Ϣ����

typedef struct node {
    StuData data; //ѧ����Ϣ����
    struct node * next; //ָ����һ��ѧ�����
} Stu; //ѧ�����
void print_stu_node(Stu *pstu);

void print_stu_data(StuData *pdata);

StuData* new_studata();

Stu* new_stunode();

