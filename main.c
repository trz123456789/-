#include "stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"
#include"menu.h"//菜单 
#include"delay.h"//延时 
#include"wenju.h"//结构体定义及判断 
int flagdel=0;
int flagser=0;
int flagch=0;
//system("CLS");//清屏 
int main()
{
	system("mode con cols=80 lines=30");//窗口宽度高度 
extern	char str1[20],str2[20];//str1输入名称对比，str2输入类别对比 
extern	long int num1,num2; //num1输入编号对比
	char choice1,choice11,choice12,choice13,choice14;
    int i=0;
	float sum=0; 
    system("title 文具销售系统trz");
    text_init();
	huanyin();
	while(1)
	{
		f1:
		menu1();/*调出主菜单 */ 
  		printf("\n");
  		printf("请您选择(1-6):");
  		choice1=getch();
  		while(choice1!='1'&&choice1!='2'&&choice1!='3'&&choice1!='4'&&choice1!='5'&&choice1!='6')
  		choice1=getch();
  		printf("%c",choice1);
  		if(choice1=='1')//商品信息查询 
		{		
			menu2();
			printf("请您选择(1-4):");
			choice11=getch();
			while(choice11!='1'&&choice11!='2'&&choice11!='3'&&choice11!='4'&&choice11!='9')
  			choice11=getch();
  			printf("%c",choice11);
  			if(choice11=='4')
			{
				choice11=' '; 
				goto f1;
			}
			else if(choice11=='9')
			{
			choice11=' '; 
			system("cls");
				for(i=0;i<10;i++)
				printf("\t%s %d %s %s %s %d %d %.2f %.2f %.2f %d\n",
				a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
				a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves,a[i].flag);
				printf("结构体查看，回车退出");
			while(getchar()!='\n');
			goto f1;
			}
			else if(choice11=='1'||choice11=='2'||choice11=='3') 
			{
				search_wenju(choice11);
				if(flagser==1)
				{
					flagser=0;
					goto f1;
				}
			}	  
		}
		else if(choice1=='2')//商品信息录入 
		{
			f12:
			menu3();

			add_wenju(wjmax()+1);//录入函数 	
 
			printf("\n\t\t\t按Y继续录入或按N返回上一级（大小写均可）\n"); 
			choice12=getch();
			while(choice12!='Y'&&choice12!='y'&&choice12!='N'&&choice12!='n')
  			choice12=getch();
  			printf("%c",choice12);
  			if(choice12=='N'||choice12=='n')
			{
				choice12=' ';
				goto f1;
			}
			else if(choice12=='Y'||choice12=='y')
			{
				choice12=' ';
				goto f12;
			}
		}
		else if(choice1=='3')//商品信息删除 
		{
			menu4();
			printf("请您选择(1-3):");
			choice13=getch();
			while(choice13!='1'&&choice13!='2'&&choice13!='3')
  			choice13=getch();
  			printf("%c",choice13);
  			if(choice13=='3')
			{
				choice13=' ';
				goto f1;
			}
			else if(choice13=='1'||choice13=='2') 
			{
				delete_wenju(choice13);
				if(flagdel==1)
				{
					flagdel=0;
					goto f1;
				}
			}
	
		}
		else if(choice1=='4')//商品修改 
		{
			menu5();
			printf("请您选择(1-3):");
			choice14=getch();
			while(choice14!='1'&&choice14!='2'&&choice14!='3')
  			choice14=getch();
  			printf("%c",choice14);
  			if(choice14=='3')
			{
				choice14=' ';
				goto f1;
			}
			else if(choice14=='1'||choice14=='2') 
			{
				change(choice14);
				if(flagch==1)
				{
					flagch=0;
					goto f1;
				}
			}
			
		}
		else if(choice1=='5')//总销售额查看 
		{
			sum=0; 
			system("cls");
			for(i=0;i<100;i++)
			{
				sum=sum+a[i].reserves;
			}
			printf("总销售额为：%.2f",sum);
			printf("\n请按回车退出");
			while(getchar()!='\n');
			goto f1;
		}
		else if(choice1=='6')//退出系统
		{
			fflush(stdin);
			system("cls");
	
			printf("你已经安全退出系统!(按任意键关闭界面)\n\n\t欢迎您的再次使用!\n\n");
			break; 
		}
	}
	return 0;
} 

