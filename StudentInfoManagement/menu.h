//menu
#include "module.h"

/*
 主菜单
 主菜单里的功能
 返回：0表示失败，1表示成功。
*/

int add_rear(Stu *phead, Stu *prear);
//添加模式
//在链表的尾部添加学生信息

int search_by_seq(Stu *phead, Stu *prear);
//学号查询模式
//通过学号查询学生信息

int search_by_name(Stu *phead, Stu *prear);
//姓名查询模式
//通过姓名查询学生信息

int edit_stu_info(Stu *phead, Stu *prear);
//修改信息模式
//输入要修改的学生的学号，如果查询到这个学生，修改其学生信息。
//对于一个已经选中的学生，可以多次修改其不同方面的信息。

