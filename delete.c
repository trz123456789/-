#include"delete.h"
int del;
char choice;
FILE *p1;
void del_name()
{
	int flagnum=0; 
	int n; 
	fd1: 
				system("CLS");//���� 
				printf("\n���������ƣ�");
				scanf("%s",&str1);
				while(getchar()!='\n');
				for(del=0;del<100;del++)
				{
					if(strcmp(a[del].name,str1)==0)
					{
						flagnum=1;
						n=del;
						printf("\n�Ƿ�ȷ����Ҫɾ�����ľ�(Y/N):");
           				choice=getch();
             			while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    			choice=getch();
      					printf("%c",choice);
	           				if(choice=='Y'||choice=='y')
	             			{
	             				for(n=del;n<99;n++)
								{				
	               				a[n]=a[n+1];
								}
								p1=fopen("wenju.txt","w");
								for(del=0;del<=wjpanduan()+1;del++)
								{
									if(a[del].flag==1)
									{
	               					fprintf(p1,"%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
									a[del].name,a[del].number,a[del].leibie,a[del].author,a[del].variety,
									a[del].amount1,a[del].amount2,a[del].money1,a[del].money2,a[del].reserves);
									}
								}
								fclose(p1);
	           					printf("\nɾ���ɹ�!");
	           					printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           					break;
	             			}
           					else
              				printf("\n����Ŀû�б�ɾ��!");
              				printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           					break;
					}
					
				}
				if(flagnum==0)
				{
					printf("\nδ�ҵ��ñ��!");
					printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           }
	           else
	           {
	           		flagnum=0;
			   }
}
void del_number()
{
	int flagnum=0; 
	int n; 
	fd1: 
				system("CLS");//���� 
				printf("\n�������ţ�");
				scanf("%d",&num1);
				while(getchar()!='\n');
				for(del=0;del<100;del++)
				{
					if(num1==a[del].number)
					{
						flagnum=1;
						n=del;
						printf("\n�Ƿ�ȷ����Ҫɾ�����ľ�(Y/N):");
           				choice=getch();
             			while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    			choice=getch();
      					printf("%c",choice);
	           				if(choice=='Y'||choice=='y')
	             			{
	             				for(n=del;n<99;n++)
								{				
	               				a[n]=a[n+1];
								}
								p1=fopen("wenju.txt","w");
								for(del=0;del<=wjpanduan()+1;del++)
								{
									if(a[del].flag==1)
									{
	               					fprintf(p1,"%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
									a[del].name,a[del].number,a[del].leibie,a[del].author,a[del].variety,
									a[del].amount1,a[del].amount2,a[del].money1,a[del].money2,a[del].reserves);
									}
								}
								fclose(p1);
	           					printf("\nɾ���ɹ�!");
	           					printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           					break;
	             			}
           					else
           					{
              				printf("\n����Ŀû�б�ɾ��!");
              				printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           					break;
	           				}
					}
					
				}
				if(flagnum==0)
				{
					printf("\nδ�ҵ��ñ��!");
					printf("\n�Ƿ����ɾ���ľ�(Y/N):");
	           					choice=getch();
             					while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    					choice=getch();
      							printf("%c",choice);
	           					if(choice=='Y'||choice=='y')
	           					goto fd1;
	           					else
	           					flagdel=1;
	           }
	           else
	           {
	           		flagnum=0;
			   }
}
//void del_leibie()
//{
//
//	flagdel=1;
//} 


