#include <iostream>
#include <cstring>
using namespace std;
class Student{
	private:
		int age;
		char *name;
	public:
		Student(int TrueAge,char* TrueName);
		Student();
		void SetMember(int , char*);
		int Getage();
		char* Getname();
		~Student();		
};

Student::Student(){
	age = 0;
	name= "unnamed";
}

Student::Student(int TrueAge,char* TrueName){
	age = TrueAge;
	if(TrueName)
	{
		name = new char [strlen(TrueName)+1];
		strcpy(name,TrueName);
	}
}

void Student::SetMember(int newAge, char *newName)
{
	age = newAge;
	if(newName)
	{
		name = new char [strlen(newName)+1];
		strcpy(name,newName);
	}
}
int Student::Getage()
{
	return age;
}
char* Student::Getname()
{
	return name;
}
Student::~Student()
{
	if(name)
	delete []name;
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
