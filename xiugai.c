#include"xiugai.h"
void ch_name()
{
	int flagnum=0; 
	int n,i;
	FILE *p1;
	char choice;
	fd1: 
				system("CLS");//清屏 
				printf("\n请输入编号：");
				scanf("%s",&str1);
				while(getchar()!='\n');
				for(i=0;i<100;i++)
				{
					if(strcmp(a[i].name,str1)==0)
					{
						flagnum=1;
						n=i;
						printf("\n是否确认需要修改该信息(Y/N):");
           				choice=getch();
             			while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    			choice=getch();
      					printf("%c",choice);
	           				if(choice=='Y'||choice=='y')
	             			{
	             				system("CLS");//清屏 
	             				wjwrite(n);
								p1=fopen("wenju.txt","w");
								for(i=0;i<=wjpanduan()+1;i++)
								{
									if(a[i].flag==1)
									{
	               					fprintf(p1,"%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
									a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
									a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);
									}
								}
								fclose(p1);
	           					printf("\n修改成功!");
	           					printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           					break;
	             			}
           					else
           					{
              				printf("\n该条目没有被修改!");
              				printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           					break;
	           				}
					}
					
				}
				if(flagnum==0)
				{
					printf("\n未找到该编号!");
					printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           }
	           else
	           {
	           		flagnum==0;
			   }
	flagch=1;
}
void ch_number()
{
	int flagnum=0; 
	int n,i;
	FILE *p1;
	char choice;
	fd1: 
				system("CLS");//清屏 
				printf("\n请输入编号：");
				scanf("%d",&num1);
				while(getchar()!='\n');
				for(i=0;i<100;i++)
				{
					if(num1==a[i].number)
					{
						flagnum=1;
						n=i;
						printf("\n是否确认需要修改该信息(Y/N):");
           				choice=getch();
             			while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    			choice=getch();
      					printf("%c",choice);
	           				if(choice=='Y'||choice=='y')
	             			{
	             				system("CLS");//清屏 
	             				wjwrite(n);
								p1=fopen("wenju.txt","w");
								for(i=0;i<=wjpanduan()+1;i++)
								{
									if(a[i].flag==1)
									{
	               					fprintf(p1,"%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
									a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
									a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);
									}
								}
								fclose(p1);
	           					printf("\n修改成功!");
	           					printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           					break;
	             			}
           					else
           					{
              				printf("\n该条目没有被修改!");
              				printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           					break;
	           				}
					}
					
				}
				if(flagnum==0)
				{
					printf("\n未找到该编号!");
					printf("\n是否继续修改(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagch=1;
	           }
	           else
	           {
	           		flagnum=0;
			   }
	flagch=1;
}

void change(int x)
{
    system("cls");
	 if(x=='1') 
	{
		ch_name(); 
	}
	else if(x=='2') 
	{
		ch_number();
	}


}
