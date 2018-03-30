#include <iostream>
#include <string>
using namespace std;
//��Ķ���
//ͬһ���͵Ķ�����ݳ�Ա
//ʹ�����ͱ���������
//��Ա�����ɱ�����-�������س�Ա����
//�Է�ָ��inline��Ա����2�֣��ڲ���һ�֡�

class Screen
{
public:
	typedef std::string::size_type index;//���������index�������е�std::string::size_type 
	Screen(index ht=0,index wd=0):contents(ht * wd,'a'),cursor(0),height(ht),width(wd)//ht*wd���ո�,�в����Ĺ��캯��
	{}
	Screen(index ht,index wd,const std::string &conts);
	char get()const;//����������д���������	
	//char get()const
	//{
	//	return contents[cursor];
	//}
    inline char get(index r,index c)const;//�����������
	//char get(index r,index c)const//�ڶ���get����Ա����������
	//{
	//	index row=r * width;
	//	return contents[row + c];
	//}
private:
	std::string contents;
	index cursor;
	index height,width;


};
Screen::Screen(index ht, index wd, const std::string &conts):contents(conts),cursor(0),height(ht),width(wd)
{}
inline char Screen::get() const//��inline������������Ӿ�������ⲿ����
{
	return contents[cursor];
}
char Screen::get(index r,index c)const//�ڶ���get����Ա����������
{
	index row=r * width;
	return contents[row + c];
}
int main()
{
	Screen a(10,100);
	cout <<a.get()<<endl;
	cout<<a.get(2,8)<<endl;
	Screen b(3,6,"hello screen class");
	cout<<b.get()<<endl;
	cout<<b.get(0,4)<<endl;
	Screen::index idx;
	cout <<"����һ��"<<endl;
	return 0;
}