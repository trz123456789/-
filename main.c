#include "stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"
#include"menu.h"//�˵� 
#include"delay.h"//��ʱ 
#include"wenju.h"//�ṹ�嶨�弰�ж� 
int flagdel=0;
int flagser=0;
int flagch=0;
//system("CLS");//���� 
int main()
{
	system("mode con cols=80 lines=30");//���ڿ�ȸ߶� 
extern	char str1[20],str2[20];//str1�������ƶԱȣ�str2�������Ա� 
extern	long int num1,num2; //num1�����ŶԱ�
	char choice1,choice11,choice12,choice13,choice14;
    int i=0;
	float sum=0; 
    system("title �ľ�����ϵͳtrz");
    text_init();
	huanyin();
	while(1)
	{
		f1:
		menu1();/*�������˵� */ 
  		printf("\n");
  		printf("����ѡ��(1-6):");
  		choice1=getch();
  		while(choice1!='1'&&choice1!='2'&&choice1!='3'&&choice1!='4'&&choice1!='5'&&choice1!='6')
  		choice1=getch();
  		printf("%c",choice1);
  		if(choice1=='1')//��Ʒ��Ϣ��ѯ 
		{		
			menu2();
			printf("����ѡ��(1-4):");
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
				printf("�ṹ��鿴���س��˳�");
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
		else if(choice1=='2')//��Ʒ��Ϣ¼�� 
		{
			f12:
			menu3();

			add_wenju(wjmax()+1);//¼�뺯�� 	
 
			printf("\n\t\t\t��Y����¼���N������һ������Сд���ɣ�\n"); 
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
		else if(choice1=='3')//��Ʒ��Ϣɾ�� 
		{
			menu4();
			printf("����ѡ��(1-3):");
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
		else if(choice1=='4')//��Ʒ�޸� 
		{
			menu5();
			printf("����ѡ��(1-3):");
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
		else if(choice1=='5')//�����۶�鿴 
		{
			sum=0; 
			system("cls");
			for(i=0;i<100;i++)
			{
				sum=sum+a[i].reserves;
			}
			printf("�����۶�Ϊ��%.2f",sum);
			printf("\n�밴�س��˳�");
			while(getchar()!='\n');
			goto f1;
		}
		else if(choice1=='6')//�˳�ϵͳ
		{
			fflush(stdin);
			system("cls");
	
			printf("���Ѿ���ȫ�˳�ϵͳ!(��������رս���)\n\n\t��ӭ�����ٴ�ʹ��!\n\n");
			break; 
		}
	}
	return 0;
} 

