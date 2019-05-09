#include "iostream"
using namespace std;
struct time
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
}s;
int main()
{
	cout<<"请输入年份：";
	cin>>s.year;
	cout<<"请输入月份：";
	cin>>s.month;
	cout<<"请输入日期：";
	cin>>s.day;
	cout<<"请输入小时：";
	cin>>s.hour;
	cout<<"请输入分钟：";
	cin>>s.minute;
	cout<<"请输入秒：";
	cin>>s.second;
	cout<<"日期为："<<s.year<<"年"<<s.month<<"月"<<s.day<<"日"<<s.hour<<"时"<<s.minute<<"分"<<s.second<<"秒"<<endl;
	getchar();
	getchar();
}
