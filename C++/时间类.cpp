#include <iostream>
using namespace std;
class Time{
	private:
		int Hour;
		int Minute;
		int Second;
	public:
	Time(int  ,int ,int );
	~Time();
    Time(const Time &time);
	void ModifyTime(int,int,int);
	int GetHour();	
	int GetMinute();	
	int GetSecond();
	void PrintTime();
	void IncreaceOneSecond();
	friend void f(Time t);
};


void f(Time t)
{
	t.PrintTime();
}
//**********�������������************* 
Time::Time(int h,int m,int s)
{
	Hour = h;
	Minute = m;
	Second = s;
	cout<<"�����вι��캯��"<<endl;
}
Time::Time(const Time &time)
{
	Hour = time.Hour;
	Minute = time.Minute;
	Second = time.Second;
	cout<<"���ÿ������캯��"<<endl;
}
Time::~Time()
{
	cout<<"������������"<<endl;
}
///*************����|���ʱ��|����һ�뺯��**************  
void Time::ModifyTime(int nh,int nm,int ns)
{
	Hour = nh;
	Minute = nm;
	Second = ns;
	cout<<"���ĺ��ʱ��Ϊ��"<<endl;
}
void Time::PrintTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl; 
} 
void Time::IncreaceOneSecond()
{
	if(Second>=0&&Second<=58)
		Second += 1;	
	else if(Second == 59)
	{
	    if(Minute>=0 && Minute<=58)
	    	Minute +=1;
	    else if(Minute == 59)
	    {
	    	Minute = 0;
	    	if(Hour>=0 && Hour<=23)
	    		Hour += 1;
	    	else if(Hour == 24)
				Hour ;	
		}
		
		if(Hour == 23 && Minute == 59 && Second ==59 )
			Hour = Minute = Second = 0;
			
		Second = 0;	
	}
	cout<<"ʱ���Ѿ�����һ��"<<endl;
	cout<<"����һ����ʱ����"<<Hour<<":"<<Minute<<":"<<Second<<endl; 
}
//*******************��ȡʱ�亯��************** 
int Time::GetHour()
{
	return Hour;
}
int Time::GetMinute()
{
	return Minute;
}
int Time::GetSecond()
{
	return Second;
}
//********************������********************
int main()
{
	Time today(19,23,54), *p;
	p = &today;
	today.PrintTime();
	today.ModifyTime(23,59,59);
	p -> PrintTime();
	cout<<"��ǰʱ���ʱΪ��"<<today.GetHour()<<endl; 
	cout<<"��ǰʱ��ķ�Ϊ��"<<p ->GetMinute()<<endl; 
	cout<<"��ǰʱ�����Ϊ��"<<today.GetSecond()<<endl; 
	today.IncreaceOneSecond();
	Time NewDay(today);
	cout<<"���ÿ�������������ʱ��Ϊ:"<<endl;
	NewDay.PrintTime();
	cout<<"����f������"<<endl;
	f(NewDay);
	return 0;
} 
