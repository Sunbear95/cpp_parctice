#include <iostream>

//int	change_val(int *p)	{
//	*p = 3;

//	return 0;
//}

//int	main() {
//	int	number = 5;

//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//}


//int	main() {
//	int	a = 3;
//	int& another_a = a;

//	another_a = 5;
//	std::cout << "a : " << a << std::endl;
//	std::cout << "another_a : "<< another_a << std::endl;

//	return 0;
//}

// int	change_val(int& p)
// {
// 	p = 3;

// 	return 0;
// }
// //어떻게 작동되는지 파악할 것. 레퍼런스로 인자를 받는 것.

// int	main()
// {
// 	int	number = 5;

// 	std::cout << number << std::endl;
// 	change_val(number);
// 	std::cout << number << std::endl;
// }


int	main() {
	int	x;
	int	&y = x;
	int	&z = y;

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z<< std ::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
}
