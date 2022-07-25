#ifndef _WENJU_H
#define _WENJU_H
#include "stdio.h"
#define N 100
char str1[20],str2[20];//str1输入名称对比，str2输入类别对比 
long int num1,num2; //num1输入编号对比，num2输入日期对比 

void wjwrite(int i);
int wjmax(void);
int wjpanduan(void); 
struct wenju
{	

	char   name[30];		/*商品名称*/
long int   number;		/*商品编号*/
	char   leibie[20];		/*类别*/
 	char   author[30];		/*生产厂家*/
 	char   variety[12];		/*型号*/
 	int    amount1;			/*库存数量*/
 	int    amount2;			/*当日销售数量*/
 	float  money1;			/*零售价格*/
	float  money2;			/*进货价格*/
	float  reserves;		/*当天销售额*/
	int flag;	//标志位 
}a[N];


struct wenju kong;
#endif
