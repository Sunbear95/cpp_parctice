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

//새로운 단어: 스코프;
// c++의 특이한 점; 변수 선언은 아무대서나 가능. 만약 중괄호 안에서 했다면 중괄호를 벗어나며 변수를 사라진다.
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
		std::cout << i << "th element of list : " << list[i] << std::endl; // 여기선 for 문 안에서 i 가 선언되었기에 이후 코드에서 i에 대해 활용할 수 ㅇ벗다.
	delete[] list;
	return 0;
}