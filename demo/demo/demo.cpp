#include <iostream>


int main()
{	

	int val=0,sum=0;
	std::cout <<"请输入任意多个数，输入end结束"<<std::endl ;

	while (std::cin >>val)
		sum +=val;
	std::cout <<"sum is  "<< sum <<std::endl ;

	/*while (val>=0)
	{
		std::cout << val<<",";
		--val;
	
	}
	std::cout <<std::endl;*/
	return 0;
}