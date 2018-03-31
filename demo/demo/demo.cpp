#include <iostream>


int main()
{
	int val=10;
	std::cout <<"将0到10从大到小排序为：";
	while (val>=0)
	{
		std::cout << val<<",";
		--val;
	
	}
	std::cout <<std::endl;
	return 0;
}