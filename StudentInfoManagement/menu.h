//menu
#include "module.h"

/*
 ���˵�
 ���˵���Ĺ���
 ���أ�0��ʾʧ�ܣ�1��ʾ�ɹ���
*/

int add_rear(Stu *phead, Stu *prear);
//���ģʽ
//�������β�����ѧ����Ϣ

int search_by_seq(Stu *phead, Stu *prear);
//ѧ�Ų�ѯģʽ
//ͨ��ѧ�Ų�ѯѧ����Ϣ

int search_by_name(Stu *phead, Stu *prear);
//������ѯģʽ
//ͨ��������ѯѧ����Ϣ

int edit_stu_info(Stu *phead, Stu *prear);
//�޸���Ϣģʽ
//����Ҫ�޸ĵ�ѧ����ѧ�ţ������ѯ�����ѧ�����޸���ѧ����Ϣ��
//����һ���Ѿ�ѡ�е�ѧ�������Զ���޸��䲻ͬ�������Ϣ��

