#include"wenjian.h"
#include"wenju.h"
#include "stdio.h"
#include"delete.h"
void text_init(void)
{
	FILE *p1;
	int x; 
    if((p1=fopen("wenju.txt","r"))==NULL)
    {
      	p1=fopen("wenju.txt","w");
      	fclose(p1);
    }
  	 p1=fopen("wenju.txt","r");
    while(!feof(p1))
    {
    	x=wjmax()+1;
      	fscanf(p1,"%s %d %s %s %s %d %d %f %f %f\n",
		&a[x].name,&a[x].number,&a[x].leibie,&a[x].author,&a[x].variety,
		&a[x].amount1,&a[x].amount2,&a[x].money1,&a[x].money2,&a[x].reserves);
		a[x].flag=1;
    }
    fclose(p1);
}
void add_wenju(int i) 
{
    char choice;
    FILE *p1;
   
    system("cls");
    wjwrite(i);
    
		fflush(stdin);
      	printf("是否保存该条目(y/n):");
      	choice=getch();
		while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n')
      	    choice=getch();
      	printf("%c",choice);
     	if(choice=='Y'||choice=='y')
        {
        	fflush(stdin);
        	p1=fopen("wenju.txt","a");
	        fprintf(p1,"%s %d %s %s %s %d %d %.2f %.2f %.2f\n",
					a[i].name,a[i].number,a[i].leibie,a[i].author,a[i].variety,
					a[i].amount1,a[i].amount2,a[i].money1,a[i].money2,a[i].reserves);
	        fclose(p1);
        	printf("\n该条目已添加到wenju.txt文件中!\n");
       	}
        else
        {
       		printf("\n本条目未保存!\n");
        }

}

 void delete_wenju(int x)
{
    system("cls");
    		 if(x=='1') 
			{
				del_name(); 
			}
			else if(x=='2') 
			{
				del_number();
			}
//			else if(x=='3') 
//			{
//				del_leibie();
//			}

}

    
