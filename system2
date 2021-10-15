class Student//学生类
{
public:
	~Student();//析构函数
    void InputStudent(void);//输入学生信息
    void OutputStudent(void);//输出学生信息
    void DeleteStudent(void);//删除学生信息
    void SearchStudent(void);//查找学生信息
    void ChangeStudent(void);//修改学生信息
    void ScortByChinese(void);//对学生的语文成绩排序
    void ScortByMath(void);  //对学生的数学成绩排序
    void ScortByEnglish(void);//对学生的英语成绩排序
    void ScortByTotal(void);//对学生的总分排序
 
private:
    Student *St;     //学生类指针
    int Size;       //学生的人数    
    string Name;    //姓名
    int Age;        //年龄
    int No;         //学号
    float Score[3];//三科的成绩
    float Total;  //总分
    float Ave;   //平均分
};

#include <iostream>
#include <cstdlib>
#include <string>
 
using namespace std;
 
class Student//学生类
{
public:
	~Student();//析构函数
    void InputStudent(void);//输入学生信息
    void OutputStudent(void);//输出学生信息
    void DeleteStudent(void);//删除学生信息
    void SearchStudent(void);//查找学生信息
    void ChangeStudent(void);//修改学生信息
    void ScortByChinese(void);//对学生的语文成绩排序
    void ScortByMath(void);  //对学生的数学成绩排序
    void ScortByEnglish(void);//对学生的英语成绩排序
    void ScortByTotal(void);//对学生的总分排序
 
private:
    Student *St;     //学生类指针
    int Size;       //学生的人数    
    string Name;    //姓名
    int Age;        //年龄
    int No;         //学号
    float Score[3];//三科的成绩
    float Total;  //总分
    float Ave;   //平均分
};
 
//析构函数
Student::~Student()
{
	delete(St);
}
 
//输入学生的信息
void Student::InputStudent(void)
{
    int len;//学生的人数
    cout<<"请输入学生的人数:";
    cin>>len;
 
    system("cls");
 
    Size = len;
 
    St = new Student[Size];
 
    for(int i=0; i<len; i++)
    {
        cout<<"请输入第"<<i+1<<"个学生的姓名:";
        cin>>St[i].Name;
 
        cout<<"请输入第"<<i+1<<"个学生的年龄:";
        cin>>St[i].Age;
 
        cout<<"请输入第"<<i+1<<"个学生的学号:";
        cin>>St[i].No;
 
        cout<<"请输入第"<<i+1<<"个学生的语文成绩:";
        cin>>St[i].Score[0];
 
        cout<<"请输入第"<<i+1<<"个学生的数学成绩:";
        cin>>St[i].Score[1];
 
        cout<<"请输入第"<<i+1<<"个学生的英语成绩:";
        cin>>St[i].Score[2];
 
        St[i].Total = St[i].Score[0] + St[i].Score[1] + St[i].Score[2];
 
        St[i].Ave = St[i].Total / 3.0f;
 
        system("cls");
    }
}
 
//输出学生的信息
void Student::OutputStudent(void)
{
    cout<<"姓名  年龄   学号   语文   数学  英语  总分  平均分"<<endl;
 
    for(int i=0; i<Size; i++)
    {
        cout<<St[i].Name<<"  "<<St[i].Age<<"  "<<St[i].No<<"  "<<St[i].Score[0]<<"  "<<St[i].Score[1]<<"  "<<St[i].Score[2]<<"  "
               <<St[i].Score[2]<<"  "<<St[i].Total<<"  "<<St[i].Ave<<endl;
    }
}
 
void Student::DeleteStudent(void)//删除学生信息
{
    string str;
    cout<<"请输入你需要删除的学生的姓名:";
    cin>>str;
 
    int num;//标记姓名相等时的下标
 
    //寻找姓名相等时的下标
    for(int i=0; i<Size; i++)
    {
        //当姓名相等时
        if(str == St[i].Name)
        {
            num = i;
        }
    }
 
    //将后面的学生向前移
    for(int j=num+1; j<Size; j++)
    {
        St[j-1] = St[j];
    }
 
    Size -= 1;//学生人数减少一个 
}
 
void Student::SearchStudent(void)//查找学生信息
{
    string name;
    cout<<"请输入你需要查找的学生的姓名:";
    cin>>name;
 
    int i;
 
    for(i=0; i<Size; i++)
    {
        if(name == St[i].Name)
        {
            break;
        }
    }
 
    cout<<St[i].Name<<" "<<St[i].Age<<" "<<St[i].No<<" "<<St[i].Score[0]<<" "<<St[i].Score[1]<<" "
           <<St[i].Score[2]<<" "<<St[i].Total<<" "<<St[i].Ave<<endl;
}
 
void Student::ChangeStudent(void)//修改学生信息
{
     string name;
    cout<<"请输入你需要修改的学生的姓名:";
    cin>>name;
 
    int i;
 
    for(i=0; i<Size; i++)
    {
        if(name == St[i].Name)
        {
            break;
        }
    }
    
    cout<<"修改前学生的信息:"<<endl;
      cout<<St[i].Name<<" "<<St[i].Age<<" "<<St[i].No<<"  "<<St[i].Score[0]<<" "<<St[i].Score[1]<<" "
           <<St[i].Score[2]<<" "<<St[i].Total<<" "<<St[i].Ave<<endl<<endl;
 
    cout<<"请输入学生的姓名:";
    cin>>St[i].Name;
 
    cout<<"请输入学生的年龄:";
    cin>>St[i].Age;
 
    cout<<"请输入第个学生的学号:";
    cin>>St[i].No;
 
    cout<<"请输入学生的语文成绩:";
    cin>>St[i].Score[0];
 
    cout<<"请输入学生的数学成绩:";
    cin>>St[i].Score[1];
 
    cout<<"请输入第学生的英语成绩:";
    cin>>St[i].Score[2];
 
    St[i].Total = St[i].Score[0] + St[i].Score[1] + St[i].Score[2];
 
    St[i].Ave = St[i].Total / 3.0f;
}
 
void Student::ScortByChinese(void)//对学生的语文成绩排序
{
    //提供插入数组中的数据
    for(int i=1; i<Size; i++)
    {
        int j = i-1;
 
        //插入数组中的数据
        Student temp = St[i];
 
        while(temp.Score[0] > St[j].Score[0] && j>=0)
        {
            St[j+1]  = St[j];
			
			j--;
        }
 
        St[++j] = temp;
    }
}
 
void Student::ScortByMath(void)//对学生的数学成绩排序
{
	//提供插入数组中的数据
    for(int i=1; i<Size; i++)
    {
        int j = i-1;
 
        //插入数组中的数据
        Student temp = St[i];
 
        while(temp.Score[1] > St[j].Score[1] && j>=0)
        {
            St[j+1]  = St[j];
			
			j--;
        }
 
        St[++j] = temp;
    }
}
 
void Student::ScortByEnglish(void)//对学生的英语成绩排序
{
	//提供插入数组中的数据
    for(int i=1; i<Size; i++)
    {
        int j = i-1;
 
        //插入数组中的数据
        Student temp = St[i];
 
        while(temp.Score[2] > St[j].Score[2] && j>=0)
        {
            St[j+1]  = St[j];
			
			j--;
        }
 
        St[++j] = temp;
    }
}
 
void Student::ScortByTotal(void)//对学生的总分排序
{
	//提供插入数组中的数据
    for(int i=1; i<Size; i++)
    {
        int j = i-1;
 
        //插入数组中的数据
        Student temp = St[i];
 
        while(temp.Total  > St[j].Total && j>=0)
        {
            St[j+1]  = St[j];
	
			j--;
        }
 
        St[++j] = temp;
    }
}
 
void main()
{
    cout<<"================================================================================\n"<<endl;  
    cout<<"================================================================================\n"<<endl;  
    cout<<"*************************欢迎使用学生成绩管理系统*******************************\n"<<endl;  
    cout<<"-----------------------------------------------------------------制作人:梅沙小子\n"<<endl;  
    cout<<"********************************************************************************\n"<<endl;  
    cout<<"================================================================================\n"<<endl;  
    
    cout<<"请按任意将进入学生管理系统:"<<endl;  
    getchar();  
    system("cls");  
  
    cout<<"================================================================================\n\n";  
    cout<<"------------------------ 请选择要操作的命令：-----------------------------------\n\n";  
    cout<<"-------------------------- 1 输入学生信息--------------------------------------\n\n";  
    cout<<"-------------------------- 2 输出学生信息--------------------------------------\n\n";  
    cout<<"-------------------------- 3 删除学生信息--------------------------------------\n\n";  
    cout<<"-------------------------- 4 查找学生信息--------------------------------------\n\n";  
    cout<<"-------------------------- 5 修改学生信息--------------------------------------\n\n";  
    cout<<"-------------------------- 6 将学生的语文成绩按从大到小排----------------------\n\n";  
    cout<<"-------------------------- 7 将学生的数学成绩按从大到小排----------------------\n\n";  
    cout<<"-------------------------- 8 将学生的英语成绩按从大到小排----------------------\n\n";  
    cout<<"-------------------------- 9 将学生的总成绩按从大到小排------------------------\n\n";  
    cout<<"================================================================================\n\n";  
    
    int Item;//操作命令
 
    Student st;//学生对象
 
    while(1)  
   {  
        cout<<"请选择操作命令:";  
        cin>>Item;  
        system("cls");//清屏  
  
       switch(Item)  
        {  
            case 1://输入学生信息  
            {  
                st.InputStudent();  
            }  
            break;  
  
            case 2://输出学生信息  
            {  
                st.OutputStudent();  
            }  
            break;  
  
          case 3://删除学生信息  
            {  
                st.DeleteStudent();  
           }  
            break;  
  
            case 4://查找学生信息  
            {  
                st.SearchStudent();  
            }  
            break;  
  
            case 5://修改学生信息  
            {  
               st.ChangeStudent();   
            }              
            break;  
 
            case 6://对学生的语文成绩排序  
            {  
                st.ScortByChinese();  
               st.OutputStudent();  
            }  
            break;  
  
            case 7://对学生的数学成绩排序  
            {  
                st.ScortByMath();  
                st.OutputStudent();  
            }  
            break;  
  
            case 8://对学生的英语成绩排序  
            {  
                st.ScortByEnglish();  
                st.OutputStudent();  
            }  
            break;  
  
            case 9://对学生的总分排序  
            {  
                st.ScortByTotal();  
                st.OutputStudent();
            }  
            break;  
            default:  
            break;  
        }  
    }  
  
    system("pause");  
}
