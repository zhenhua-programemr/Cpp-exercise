using namespace std;//一定要添加这行，不然编译string name 时会报错 类以及函数的声明放在该头文件中
class student
{
public:
	void inputstudent();
	void outputstudent();
	void deletestudent();
	void searchstudent();
	void changestudent();
	void scortbychinese();
	void scortbymath();
	void scortbyenglish();
	void scortbytotal();
private:
	student *st;
	int size;
	string name;
	int age;
	int num;
	float score[3];
	float total;
	float aver;
};
