#include <iostream>


int main()
{	

	int sum=0;
	for (int val=-100;val<=100;++val)
		sum +=val;
	std::cout <<"��-100��100�ĺ�Ϊ��"<< sum <<std::endl ;

	/*while (val>=0)
	{
		std::cout << val<<",";
		--val;
	
	}
	std::cout <<std::endl;*/
	return 0;
}