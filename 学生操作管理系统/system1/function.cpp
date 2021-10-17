#include <iostream>               //类中的函数实现放在该源文件中
#include <cstdlib>
#include <string>
#include "function.h"
using namespace std;
void student::inputstudent()
{
	int len;
	cout << "请输入要录入信息的学生人数： " << endl;
	cin >> len;
	system("cls");
	size = len;
	st = new student[len];
	for (int i = 0; i < len; i++)
	{
		cout << "请输入第" << i + 1 << "个学生的姓名：";
		cin >> st[i].name;
		cout << "请输入第" << i + 1 << "个学生的年龄：";
		cin >> st[i].age;
		cout << "请输入第" << i + 1 << "个学生的学号：";
		cin >> st[i].num;
		cout << "请输入第" << i + 1 << "个学生的语文成绩：";
		cin >> st[i].score[0];
		cout << "请输入第" << i + 1 << "个学生的数学成绩：";
		cin >> st[i].score[1];
		cout << "请输入第" << i + 1 << "个学生的英语成绩：";
		cin >> st[i].score[2];
		st[i].total = st[i].score[0] + st[i].score[1] + st[i].score[2];
		st[i].aver = st[i].total / 3.0;
		system("cls");
	}
}
void student::outputstudent() 
{
	cout << "姓名 年龄 学号 语文 数学 英语 总分 平均分" << endl;
	for (int i = 0; i < size; i++) 
	{
		cout << st[i].name << " " << st[i].age << " " << st[i].num << " " << st[i].score[0] << " " << st[i].score[1]
			<< " " << st[i].score[2] << " " << st[i].total << " " << st[i].aver << endl;
	} 
}
void student::deletestudent() 
{
	cout << " 请输入你要删除的学生的姓名： ";
	string dname;
	cin >> dname;
	int count,i;
	for (i=0; i < size; i++) 
	{
		if (st[i].name == dname) 
		{
			count = i;
			break;
		}
	}
	if (i == size) cout << "没有找到要删除的学生";
	for (i = count; i < size - 1; i++) 
	{
		st[i] = st[i + 1];
	}
	size -= 1;
}
void student::searchstudent() 
{
	cout << "请输入你要查找的学生的姓名：";
	string sname;
	cin >> sname;
	int i;
	for (i = 0; i < size; i++) 
	{
		if (st[i].name == sname) 
		{
			cout << st[i].name << " " << st[i].age << " " << st[i].num << " " << st[i].score[0] << " " << st[i].score[1]
				<< " " << st[i].score[2] << " " << st[i].total << " " << st[i].aver << endl;
		}
		break;
	}
	if (i == size) cout << "没有找到要查找的学生";
}
void student::changestudent()
{
	cout << "请输入你要改变的学生的姓名：";
	string cname;
	cin >> cname;
	int count, i;
	for (i = 0; i < size; i++)
	{
		if (st[i].name == cname)
		{
			count = i;
			break;
		}
	}
	if (i == size) cout << "没有找到要查找的学生";
	else
	{
	cout << "修改前学生的信息：" << endl;
	cout << st[i].name << " " << st[i].age << " " << st[i].num << " " << st[i].score[0] << " " << st[i].score[1]
		<< " " << st[i].score[2] << " " << st[i].total << " " << st[i].aver << endl;
	cout << "请输入你要修改的学生的姓名：";
	cin >> st[i].name;
	cout << "请输入你要修改的学生的年龄：";
	cin >> st[i].age;
	cout << "请输入你要修改的学生的学号：";
	cin >> st[i].num;
	cout << "请输入你要修改的学生的语文成绩：";
	cin >> st[i].score[0];
	cout << "请输入你要修改的学生的数学成绩：";
	cin >> st[i].score[1];
	cout << "请输入你要修改的学生的英语成绩：";
	cin >> st[i].score[2];
	st[i].total = st[i].score[0] + st[i].score[1] + st[i].score[2];
	st[i].aver = st[i].total / 3.0;
	}
}
void student::scortbychinese()
{
	student gdstudent;
	for(int i=0;i<size-1;i++)
		for (int j = i + 1; j < size; j++) 
		{
			if (st[i].score[0] < st[j].score[0]) 
			{
				gdstudent = st[i];
				st[i] = st[j];
				st[j] = gdstudent;
			}
		}
	cout << "按语文成绩进行排序后的学生信息如下： ";
	outputstudent();
}
void student::scortbymath()
{
	student gdstudent;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
		{
			if (st[i].score[1] < st[j].score[1])
			{
				gdstudent = st[i];
				st[i] = st[j];
				st[j] = gdstudent;
			}
		}
	cout << "按数学成绩进行排序后的学生信息如下： ";
	outputstudent();
}
void student::scortbyenglish()
{
	student gdstudent;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
		{
			if (st[i].score[2] < st[j].score[2])
			{
				gdstudent = st[i];
				st[i] = st[j];
				st[j] = gdstudent;
			}
		}
	cout << "按英语成绩进行排序后的学生信息如下： ";
	outputstudent();
}
void student::scortbytotal()
{
	student gdstudent;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
		{
			if (st[i].total < st[j].total)
			{
				gdstudent = st[i];
				st[i] = st[j];
				st[j] = gdstudent;
			}
		}
	cout << "按英语成绩进行排序后的学生信息如下： ";
	outputstudent();
}
