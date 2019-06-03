#include <iostream>
#include <string>
using namespace std;
class Girl;
class Boy{
	private:
		int Age;
		string Name;
	public:
		Boy(string,int);
		~Boy();
		void Display();
		friend void VisitBoyGirl(Boy &, Girl &);
};
class Girl{
	private:
		int Age;
		string Name;
	public:
		Girl(string,int);
		~Girl();
		void Display();
		friend void  VisitBoyGirl(Boy &, Girl &);
};
Boy::Boy(string name,int age)
{
	Age = age;
	if(name.length() >0 )
	Name = name;
	cout<<"����Boy�вι��캯��"<<endl;
}
Boy::~Boy()
{
	if(Name.length()>0)
		Name="";
	cout<<"����Boy��������"<<endl;
};

Girl::Girl(string name,int age)
{
	Age = age;
	if(name.length() >0 )
	Name = name;
	cout<<"����Girl�вι��캯��"<<endl;
}
Girl::~Girl()
{
	if(Name.length()>0)
		Name="";
	cout<<"����Girl��������"<<endl;
};
void Girl::Display()
{
	cout<<"Ů������:"<<Name<<"--����:"<<Age<<endl; 
}
void Boy::Display()
{
	cout<<"�к�����:"<<Name<<"--����:"<<Age<<endl; 
}
void VisitBoyGirl(Boy &boy, Girl &girl)
{
	cout<<"���ö�����ΪBoy��Girl����Ԫ����:"<<endl;
	boy.Display();
	girl.Display(); 
}
int main()
{
	Boy boy("John",18);
	Girl girl("Tina",3); 
	boy.Display();
	girl.Display();
	VisitBoyGirl(boy,girl);
	return 0;
}
