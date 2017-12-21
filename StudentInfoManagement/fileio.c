//file i/o;
#include "module.h"

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









