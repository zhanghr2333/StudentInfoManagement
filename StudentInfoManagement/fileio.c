//file i/o;
#include "module.h"

/*
 因为只能修改 phead, prear 的副本的值，需要在调用读取后为 phead, prear 重新获取正确的值
*/
int read_format(Stu *phead, Stu *prear)
{
    FILE *fp;
    fp=fopen("format.txt","r");
    fclose(fp);
    return 1;
}

int write_format(Stu *phead, Stu *prear)
{
    FILE *fp;
    fp=fopen("format.txt","w");
    fclose(fp);
    return 1;
}









