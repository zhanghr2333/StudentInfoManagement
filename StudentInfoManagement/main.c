/*
StudentInfoManagementSystem version 0.1.1
About : git://github.com/OhnkytaBlabdey/StudentInfoManagement
Email : 1263189143@qq.com
*/

#include "menu.h"
#include "fileio.h"

int main()
{
    Stu *phead = new_stunode();
    Stu *prear = new_stunode();
    phead->next=prear;
    prear->next=phead;
    prear->id = 1;
    //print_stu_node(get_pre_node(phead,phead));
    //print_stu_node(phead);
    //print_stu_node(prear);
    add_rear(phead,prear);
    search_by_seq(phead,prear);
    search_by_name(phead,prear);
    edit_stu_info(phead, prear);
    return 0;
}
