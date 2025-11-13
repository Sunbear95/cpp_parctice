#include <iostream>

//int	main()
//{
//	int	*p = new int;
//	*p = 10;

//	std::cout << *p << std::endl;

//	delete p;
//	return 0;
//}

//int a = 5;

//delete &a;
// 위는 오류가 일어남(heap이 아닌 영역을 해제하려 함)


int	main()
{
	int	arr_size;
	int	*list;
	std::cout << "array size : ";
	std::cin >> arr_size;
	list = new int[arr_size];
	for (int i = 0; i < arr_size; i++)
		std::cin >> list[i];
	for (int i = 0; i < arr_size; i++)
		std::cout << i << "th element of list : " << list[i] << std::endl;
	delete[] list;
	return 0;
}