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
 //显示一个 Stu 结点的数据的值

void print_stu_data(StuData *pdata);
 //显示一个 StuData 的各个域的值

StuData* new_studata();
 // 返回各项域的值都为缺省值的一个新的 StuData 的内存地址

Stu* new_stunode();
 // 返回各项域的值都为缺省值的一个新的 Stu 的内存地址


