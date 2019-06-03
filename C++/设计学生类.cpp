#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Student{
	private:
		int age;
		string name;
	public:
		Student(int TrueAge,string TrueName);
		Student();
		void SetMember(int , string);
		int Getage();
		string Getname();
		~Student();		
};

Student::Student(){
	age = 0;
	name= "unnamed";
}

Student::Student(int TrueAge,string TrueName){
	age = TrueAge;
	if(TrueName.length()>0)
	{
		name=TrueName;
	}
}

void Student::SetMember(int newAge, string newName)
{
	age = newAge;
	if(newName.length()>0)
	{
		name=newName;
	}
}
int Student::Getage()
{
	return age;
}
string Student::Getname()
{
	return name;
}
Student::~Student()
{
	if(name.length()>0)
		name="";
}

int main( )
{
	Student stu[3]={Student(13,"wang")} ;   /*��һ��Ԫ���ô��ι��캯����ʼ�����ڶ�������Ԫ�����޲ι��캯����ʼ����Ĭ������Ϊ 0 ������Ϊ "unnamed"*/
	stu[2].SetMember(12,"zhang");           /*�޸ĵ�����Ԫ�ص����ݳ�Աֵ*/
	cout<<stu[0].Getage( )<<","<<stu[0].Getname( )<<"\n";
	cout<<stu[1].Getage( )<<","<<stu[1].Getname( )<<"\n"; 
	cout<<stu[2].Getage( )<<","<<stu[2].Getname( )<<"\n"; /*������ɸ���һ��ѭ��*/
    return 0;
}
