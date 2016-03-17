#include<stdio.h>
#include<math.h>

void menu()
{
	printf("\n\n\n\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |           单利复利计算器              |\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |1.单利计算                             |\n");
	printf("                 |2.复利计算                             |\n");
	printf("                 |3.退出                                 |\n");
	printf("                 |---------------------------------------|\n");
}

void menuone()
{
	printf("\n\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |             单利计算器                |\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |1.算本金和                             |\n");
	printf("                 |2.算本金                               |\n");
	printf("                 |3.算年份                               |\n");
	printf("                 |4.算利率                               |\n");
	printf("                 |5.返回                                 |\n");
	printf("                 |---------------------------------------|\n");
}

void menutwo()
{
	printf("\n\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |             复利计算器                |\n");
	printf("                 |---------------------------------------|\n");
	printf("                 |1.算本金和                             |\n");
	printf("                 |2.算本金                               |\n");
	printf("                 |3.算年份                               |\n");
	printf("                 |4.算利率                               |\n");
	printf("                 |5.返回                                 |\n");
	printf("                 |---------------------------------------|\n");
}


double fulibenjinhe()
//复利计算本息和
{
	
	int i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%d",&i);
	printf("请输入年份\n");
    scanf("%d",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=1+x;
	result=pow(c,j);
	printf("本息和为%d*(1+%lf)^%d=%lf\n",i,x,j,i*result);

}


double fulibenjin()
//复利算本金
{
	
	int i,j;
	double c,x,result;
	printf("请输入你期望得到的本金和\n");
	scanf("%d",&i);
	printf("请输入年份\n");
    scanf("%d",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=1+x;
	result=pow(c,j);
	printf("本金为%d/(1+%lf)^%d=%lf\n",i,x,j,i/result);


}


double fulinianfen()
//复利算年份
{
	
	double i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%lf",&i);
	printf("请输入你期望得到的本息和\n");
    scanf("%lf",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=j/i;
	result=1+x;
	printf("得到你期望得到的本息和需要的年份为%lf\n",log(j/i)/log(1+x));

}

double fulisuanlilv()
{
	
	double i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%lf",&i);
	printf("请输入你期望得到的本金和\n");
    scanf("%lf",&j);
	printf("请输入年份\n");
	scanf("%lf",&x);
	c=j/i;
	result=pow(c,1/x);
	//printf("%lf\n",c);
	//printf("%lf\n",result);
	
	printf("得到你所期望的本息和需要的利率为%lf\n",result-1);

}






double danlijisuanbenjinhe()
{
	
	int i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%d",&i);
	printf("请输入年份\n");
    scanf("%d",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=x*j;
	result=1+c;
	printf("本息和为%d*(1+%lf*%d)=%lf\n",i,x,j,i*result);

}

//单利计算本金
double danlijisuanbenjin()
{
	
	int i,j;
	double c,x,result;
	printf("请输入你期望得到的本金和\n");
	scanf("%d",&i);
	printf("请输入年份\n");
    scanf("%d",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=x*j;
	result=1+c;
	printf("本金为%d/(1+%lf*%d)=%lf\n",i,x,j,i/result);

}


double danlijisuannianfen()
{
	
	double i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%lf",&i);
	printf("请输入你期望得到的本金和\n");
    scanf("%lf",&j);
	printf("请输入利率\n");
	scanf("%lf",&x);
	c=j/i;
	result= c-1;
	//printf("%lf\n",c);
	//printf("%lf\n",result);
	
	printf("得到你所期望的本息和需要的年份为(%lf/%lf-1)/%lf=%lf\n",j,i,x,result/x);

}

double danlisuanlilv()
{
	
	double i,j;
	double c,x,result;
	printf("请输入本金\n");
	scanf("%lf",&i);
	printf("请输入你期望得到的本金和\n");
    scanf("%lf",&j);
	printf("请输入年份\n");
	scanf("%lf",&x);
	c=j/i;
	result= c-1;
	//printf("%lf\n",c);
	//printf("%lf\n",result);
	
	printf("得到你所期望的本息和需要的利率为(%lf/%lf-1)/%lf=%lf\n",j,i,x,result/x);

}





main()
{
	int a,b;
eee:menu();
aaa:printf("请输入所需计算器 :");
	scanf("%d",&a);
	while(a<1||a>3)
	{
		printf("输入有误，请重新输入\n");
		goto aaa;
	}


	//单利计算器
	while(a==1)
	{
fff:	menuone();
bbb:	printf("请输入所需功能 :\n");
		scanf("%d",&b);
		while(b<1||b>5)
		{
			printf("输入有误,请重新输入\n");
			goto bbb;
		}
		while(b==1)
		//单利计算本金和
		{
			danlijisuanbenjinhe();
			goto fff;
		}
		while(b==2)
		//单利计算本金
		{
			danlijisuanbenjin();
			goto fff;

		}

		while(b==3)
		//单利计算年份
		{

			danlijisuannianfen();
			goto fff;
		}
		
		while(b==4)
		//单利算利率
		{
			danlisuanlilv();
			break;
		}


		while(b==5)
		{
			goto eee;
		}


		break;
	}


//复利计算器
	while(a==2)
	{
ddd:    menutwo();
ccc:	printf("请输入所需功能 :\n");
		scanf("%d",&b);
		while(b<1||b>5)
		{
			printf("输入有误,请重新输入\n");
			goto bbb;
		}
		while(b==1)
		//复利计算本金和
		{
			fulibenjinhe();
			goto ddd;	
		}
		while(b==2)
		//复利计算本金
		{
			fulibenjin();
			goto ddd;

		}

		while(b==3)
		//复利计算年份
		{
			fulinianfen();
			goto ddd;
		}

		
		while(b==4)
		//复利算利率
		{
			fulisuanlilv();
			goto ddd;
		}

		while(b==5)
		{
			goto eee;
			
		}

		
		break;
	}


}