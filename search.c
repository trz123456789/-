#include"search.h"

void ser_name()
{
	int flag=0;
	char choice;
	int i;
	fd1:
		system("CLS");//清屏 
		printf("\n请输入名称：");
		scanf("%s",&str1);
		while(getchar()!='\n');
		system("CLS");//清屏 
		printf("查找如下\n");
		for(i=0;i<100;i++)
		{
				if(strcmp(a[i].name,str1)==0)
				{
					flag=1; 
					printf("\t%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
					a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
					a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);	
				}  					
		}
		if(flag==0) 
		{
			printf("\n该条目未找到!");
			printf("\n是否继续查找(Y/N):");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
				choice=getch();
				printf("%c",choice);
				if(choice=='Y'||choice=='y')
				goto fd1;
				else
				flagser=1;
    	}
    	else
    	{
    	printf("\n查找结束，请按回车退出");
		while(getchar()!='\n');
    	flag=0;
    	}
	flagser=1;
}
void ser_number()
{
	int flag=0;
	char choice;
	int i;
	fd1:
		system("CLS");//清屏 
		printf("\n请输入编号：");
		scanf("%d",&num1);
		while(getchar()!='\n');
		system("CLS");//清屏 
		printf("查找如下\n");
		for(i=0;i<100;i++)
		{
				if(a[i].number==num1)
				{
					flag=1; 
					printf("\t%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
					a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
					a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);	
				}  					
		}
		if(flag==0) 
		{
			printf("\n该条目未找到!");
			printf("\n是否继续查找(Y/N):");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
				choice=getch();
				printf("%c",choice);
				if(choice=='Y'||choice=='y')
				goto fd1;
				else
				flagser=1;
    	}
    	else
    	{
    	printf("\n查找结束，请按回车退出");
		while(getchar()!='\n');
    	flag=0;
    	}
	flagser=1;
}
void ser_leibie()
{
	int flag=0;
	char choice;
	int i;
	fd1:
		system("CLS");//清屏 
		printf("\n请输入类别：");
		scanf("%d",&num1);
		while(getchar()!='\n');
		system("CLS");//清屏 
		printf("查找如下\n");
		for(i=0;i<100;i++)
		{
				if(strcmp(a[i].leibie,str2)==0)
				{
					flag=1; 
					printf("\t%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
					a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
					a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);	
				}  					
		}
		if(flag==0) 
		{
			printf("\n该类别不存在!");
			printf("\n是否继续查找(Y/N):");
				choice=getch();
				while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
				choice=getch();
				printf("%c",choice);
				if(choice=='Y'||choice=='y')
				goto fd1;
				else
				flagser=1;
    	}
    	else
    	{
    	printf("\n查找结束，请按回车退出");
		while(getchar()!='\n');
    	flag=0;
    	}
	flagser=1;
}
void search_wenju(int x)
{
    system("cls");
		 if(x=='1') 
		{
			ser_name(); 
		}
		else if(x=='2') 
		{
			ser_number();
		}
		else if(x=='3') 
		{
			ser_leibie();
		}

}
