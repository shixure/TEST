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
	cout<<"��������ݣ�";
	cin>>s.year;
	cout<<"�������·ݣ�";
	cin>>s.month;
	cout<<"���������ڣ�";
	cin>>s.day;
	cout<<"������Сʱ��";
	cin>>s.hour;
	cout<<"��������ӣ�";
	cin>>s.minute;
	cout<<"�������룺";
	cin>>s.second;
	cout<<"����Ϊ��"<<s.year<<"��"<<s.month<<"��"<<s.day<<"��"<<s.hour<<"ʱ"<<s.minute<<"��"<<s.second<<"��"<<endl;
	getchar();
	getchar();
}
