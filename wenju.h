#ifndef _WENJU_H
#define _WENJU_H
#include "stdio.h"
#define N 100
char str1[20],str2[20];//str1�������ƶԱȣ�str2�������Ա� 
long int num1,num2; //num1�����ŶԱȣ�num2�������ڶԱ� 

void wjwrite(int i);
int wjmax(void);
int wjpanduan(void); 
struct wenju
{	

	char   name[30];		/*��Ʒ����*/
long int   number;		/*��Ʒ���*/
	char   leibie[20];		/*���*/
 	char   author[30];		/*��������*/
 	char   variety[12];		/*�ͺ�*/
 	int    amount1;			/*�������*/
 	int    amount2;			/*������������*/
 	float  money1;			/*���ۼ۸�*/
	float  money2;			/*�����۸�*/
	float  reserves;		/*�������۶�*/
	int flag;	//��־λ 
}a[N];


struct wenju kong;
#endif
