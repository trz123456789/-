#include"wenju.h"

void wjwrite(int i)
{
	fflush(stdin);
	printf("\n\n\n请输入名称：");
	scanf("%s",&a[i].name);
	while(getchar()!='\n');
	printf("请输入编号：");
	scanf("%d",&a[i].number);
	while(getchar()!='\n');
	printf("请输入类别：");
	scanf("%s",&a[i].leibie);
	while(getchar()!='\n');
	printf("请输入厂家：");
	scanf("%s",&a[i].author);
	while(getchar()!='\n');
	printf("请输入型号：");
	scanf("%s",&a[i].variety);
	while(getchar()!='\n');
	printf("请输入库存：");
	scanf("%d",&a[i].amount1);
	while(getchar()!='\n');
	printf("请输入当日销售量：");
	scanf("%d",&a[i].amount2);
	while(getchar()!='\n');
	printf("请输入零售价：");
	scanf("%f",&a[i].money1);
	while(getchar()!='\n');
	printf("请输入进价：");
	scanf("%f",&a[i].money2);
	while(getchar()!='\n');
	a[i].reserves=a[i].amount2*a[i].money1;
	a[i].flag=1; 
}
int wjmax(void)
{
	int i;
	int max=-1; 
	for(i=0;i<N;i++)
	{
		if(a[i].flag==1)
		max=i;
	}
	return max;
}
int wjpanduan(void)
{
	int i;
	for(i=0;i<N;i++)
	{
		if(a[i].flag==1)
		return i;
		break;
	}
	return -1;
}

