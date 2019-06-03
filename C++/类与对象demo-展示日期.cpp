//ͷ�ļ� 
#include <iostream>
#include <string>
#include<cstring>
using namespace std;
//�ඨ�� 
class Student;//�ȶ����ʹ�� ��ǰ�������� 
class Date{
	private:
		int year;
		int day;
		int month;
	public:
//		int setDate(int , int , int );
		Date(int x,int y,int z){ //���캯������ʱ�ɼ�Ĭ�ϲ���ֵ ����ʱ����  
				year = x;
				month = y;
				day = z;
		} //���캯����ͬ���� ������������ڶ��� �� Date::Date(){} 
		//һ�������ӵ�ж�����캯�� ����
		Date(){};//�޲εĹ��캯�� ���������� 
		~Date(); //Ĭ�������������� ����˳���빹����ȫ�෴ 
		Date(const Date &date); //�������캯������ 
		void Display(const Student &stu); //��Ԫ��Ա���� ���β��� 
		//ʵ����Display��Date�ĳ�Ա���� Student����Ԫ��Ա 
		int getYear();
		int getMonth();
		int getDay();
		friend bool isTrue(Date &A,Date &B);//��Ԫ���� ���� 
}; 
class Student{
	private:
		char *dz;
	public:
	Student(char *zfc);
	~Student();
	friend void Date::Display(const Student &); //��Ԫ��Ա���� 
};
/*int Date::setDate(int x,int y,int z){ 
	year = x;
	month = y;
	day = z;
}*/
Date::Date(const Date &date){
	year = date.year;
	month = date.month;
	day = date.day;
};//�������캯���Ķ��� 
Date::~Date(){};//������������ 
int Date::getYear(){
	return year;
}
int Date::getMonth(){
	return month;
}
int Date::getDay(){
	return day;
}
void Date::Display(const Student &stu)
{
	cout<<stu.dz<<endl;
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
bool isTrue(Date &A,Date &B){//��Ԫ���� ���� 
	return (A.year == B.year&&A.month == B.month&&A.day == B.day);
}


Student::Student(char *zfc){
	if(zfc){
		dz = new char [strlen(zfc)+1];//��Ϊ��֪��ʵ���ַ������� ����Ҫ���붯̬�ռ� 
		strcpy(dz,zfc);//�����ַ��� 
	}else dz= 0;
}
Student::~Student(){
	if(dz)
	delete []dz;//�ͷſռ� 
}
//������ 
int main(){
    Student ZY("computerScience");
	Date *t;//������� ����int   
	Date today(2019,04,19);//������� ����int   
	Date day1(); //����һ��������Ϊday1�ĺ��� 
//	today.setDate(2019,04,19);
	today.Display(ZY);

	t = &today;
//	t -> setDate(2019,04,20);
// (*t).setDate(2019,04,20)
	t -> Display(ZY); //  (*t).Display()
	
	today = Date(1,1,1);//������������ 
	today.Display(ZY);
	Date(2,2,2).Display(ZY);//��������
	
	Date day2(today); //�������캯���ĵ���1 
	day2.Display(ZY); 
	Date day3 = today;  //�������캯���ĵ���2
	day3.Display(ZY);	
	Date attr[5]={Date(2018,1,1),Date(2019,2,1)}; //�������� 
	attr[0].Display(ZY);
	
	Date *p;//����ָ�� 
	p = attr;
	for(;p<attr+2;p++)
	p->Display(ZY); 
	
	Date A (2019,1,1),B(2019,9,1); //��Ԫ���������� 
	cout<<isTrue(A ,B)<<endl;
	
	today.Display(ZY); // ��Ԫ��Ա������ 
	return 0;
}
