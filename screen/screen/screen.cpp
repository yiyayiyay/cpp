#include <iostream>
#include <string>
using namespace std;
//类的定义
//同一类型的多个数据成员
//使用类型别名来简化类
//成员函数可被重载-定义重载成员函数
//显法指定inline成员函数2种，内部有一种。

class Screen
{
public:
	typedef std::string::size_type index;//定义别名用index代替所有的std::string::size_type 
	Screen(index ht=0,index wd=0):contents(ht * wd,'a'),cursor(0),height(ht),width(wd)//ht*wd个空格,有参数的构造函数
	{}
	Screen(index ht,index wd,const std::string &conts);
	char get()const;//将公共函数写在类的外面	
	//char get()const
	//{
	//	return contents[cursor];
	//}
    inline char get(index r,index c)const;//变成内联函数
	//char get(index r,index c)const//第二个get及成员函数的重载
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
inline char Screen::get() const//加inline变成内联，不加就算类的外部函数
{
	return contents[cursor];
}
char Screen::get(index r,index c)const//第二个get及成员函数的重载
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
	cout <<"测试一下"<<endl;
	return 0;
}