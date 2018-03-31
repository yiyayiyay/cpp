#include <iostream>


int main()
{	

	int sum=0;
	for (int val=1;val<=10;++val)
		sum +=val;
	std::cout <<"将0到10的和为："<< sum <<std::endl ;

	/*while (val>=0)
	{
		std::cout << val<<",";
		--val;
	
	}
	std::cout <<std::endl;*/
	return 0;
}