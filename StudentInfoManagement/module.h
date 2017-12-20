//module
typedef struct {
    int seq; //学号 eg, 2436
    char name[13]; //姓名 eg, 张三
    int age; //年龄 eg, 16
    char gender[5]; //性别 eg, 男
    char birthday_str[12]; //出生日期的字符形式 eg,1999/11/23
    int birthday[3]; //出生日期 eg, {1999, 11, 23}
    char addr[20]; //地址 eg, 红旗路116号
    char tel[15]; //电话 eg, 17023354321
    char email[30]; //E-mail eg, AbyssRising@foxmail.com
} StuData; //学生的信息内容

typedef struct node {
    StuData data; //学生信息内容
    struct node * next; //指向下一个学生结点
} Stu; //学生结点
void print_stu_node(Stu *pstu);

void print_stu_data(StuData *pdata);

StuData* new_studata();

Stu* new_stunode();

