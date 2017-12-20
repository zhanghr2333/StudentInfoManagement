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
    int id; //��������
    StuData data; //ѧ����Ϣ����
    struct node * next; //ָ����һ��ѧ�����
} Stu; //ѧ�����

void print_stu_node(Stu *pstu);
 //��ʾһ�� Stu �������ݵ�ֵ

void print_stu_data(StuData *pdata);
 //��ʾһ�� StuData �ĸ������ֵ

StuData* new_studata();
 // ���ظ������ֵ��Ϊȱʡֵ��һ���µ� StuData ���ڴ��ַ

Stu* new_stunode();
 // ���ظ������ֵ��Ϊȱʡֵ��һ���µ� Stu ���ڴ��ַ

 /*eg,
prear=add_rear_node(prear);
prear->next=phead;
 */
Stu* add_rear_node(Stu *prear);
 //������β�����һ���µĽ�㣬�������˹���ʼ��������β����ָ��û�����������(����β����ָ��û����������ڲ����и���)
 //����ֵ  0��ʧ�ܣ�1���ɹ���

int init_stu_data(StuData *pdata);
 //�˹���������ʼ��

int get_list_count(Stu *phead);

int get_number();

Stu* get_pre_node(Stu* phead, Stu* pthis);

