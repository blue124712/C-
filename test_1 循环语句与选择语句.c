#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//#include <unistd.h>

/*
int main()
{
	int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d",&year,&month,&date);

	printf("year=%d\n",year);
	printf("month=%02d\n",month); //%02d 宽度为2，右对齐，左补0
	printf("date=%02d\n", date);

	return 0;
}
*/

/*
int main()
{
	int id = 0;
	float c = 0.0f;
	float math = 0.0f;
	float eng = 0.0f;

	scanf("%d;%f,%f,%f",&id, &c, &math, &eng);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n",id, c, math, eng);

	return 0;
}
*/

/*
//考察转义字符
int main()
{
	int n = printf("Hello world!");
	printf("\n%d\n", n);

	printf("printf(\"Hello world!\\n\");");
	printf("\ncout << \"Hello world!\" << endl;\n");

	return 0;
}
*/

//找最大数
/*
int main()
{
	int arr[4];
	int i = 0;

	for (i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}

	int max = arr[0];
	i = 1;
	while (i < 4)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}

	printf("%d\n", max);

	return 0;
}
*/

//计算球体体积
/*
int main()
{
	double r =0.0f;
	double v = 0.0f;

	scanf("%lf",&r);
	v = 4 / 3.0 * 3.1415926 * r * r * r;
	printf("%.3lf\n",v);

	return 0;
}
*/

//计算BMI
/*
int main()
{
	int weight = 0;
	int high = 0;
	scanf("&d %d",&weight, &high);

	float bmi = weight/(high/100.0)/(high/100.0);
	printf("%.2f\n",bmi);

	return 0;
}
*/

/*
int main()
{
	int i = 0;

	//for循环的初始化部分，判断部分，调整部分是可以省略的
	//for(;;)
	for (i = 1;i <=10;i++)
	{
		if (i == 5)
			continue;

		printf("%d\n",i);
	}
	return 0;
}
*/

/*
int main()
{
	int i = 0;
	for (i = 1;i <= 5;i++)
	{
		printf("hehe\n");
	}
	return 0;
}
*/
/*
int main()
{
	int i = 1;

	do
	{
		if (i == 5)
			break;

		printf("%d\n",i);
		i++;

	} while (i <= 10);
	
	return 0;
}
*/

//计算n的阶乘
/*
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;

	scanf("%d",&n);

	for (i = 1;i <= n;i++)
	{
		ret = ret * i;
	}
	printf("%d\n",ret);

	return 0;
}
*/

//计算1!+2!+3!+4!+......+10!
/*
int main()
{
	int i = 1;
	int n = 0;
	int ret = 1;
	int sum = 0;

	//scanf("%d",&n);

	for (n = 1;n <= 10;n++)
	{
		ret = ret * n;
		sum += ret;
	}
	printf("%d\n",sum);

	return 0;
}
*/

//二分查找
/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;

	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;

	while(left<=right)
	{
	  int mid = (left + right) / 2;
	  if (arr[mid] < k)
	  {
		 left = mid + 1;
	  }
	  else if (arr[mid] > k)
	  {
	     right = mid - 1;
	  }
	  else
	  {
		 printf("找到了，下表是：%d\n",mid);
		 break;
	  }
	}
	return 0;
}
*/

/*
int main()
{
	char arr1[] = "welcome to bit!!!";
	char arr2[] = "#################";

	char buf[] = "abc";
	int left = 0;
	int right = strlen(arr2)-1; //strlen统计\0前字符的个数

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);

		Sleep(1000);
		//清空屏幕
		system("cls");

		left++;
		right--;
	}
	printf("%s\n",arr2);
	return 0;
}
*/

//模拟登录，只允许登录三次
//密码正确提示登录成功，如果三次均输入错误，则退出程序
/*
int main()
{
	int i = 0;
	char password[20] = {0};

	for (i=0;i<3;i++)
	{
		printf("请输入密码：");
		scanf("%s",password); //数组名本身就是地址
		if (strcmp(password, "abcdef") == 0)//password == "abcdef"  返回0则字符串相等
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误！\n");
	}
	if (i == 3)
	{
		printf("三次密码均输入错误！");
	}
	return 0;
}
*/
