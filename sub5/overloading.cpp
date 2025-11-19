/*
함수 오버로딩 : c++에는 같은 이름을 가진 함수가 여러개 존재해도 ok! 사용되는 인자를 확인하며 판단한다.

즉 다음과 같은 함수도 무리 없이 작동한다

#include <iostream>

void	print(int x) { std::cout << "int : " << x << std::endl; }
void	print(char x) { std ::cout << "char : " << x << std:: endl; }
void	print(double x) { std::cout << "double : " << x << std::endl; }

int	main() {
	int		a = 1;
	char	b = 'c';
	double	c = 3.2f;

	print(a);
	print(b);
	print(c);

	return 0;
}
오버로딩의 과정은 다음과 같다.
1. 자신과 타입이 일치하는 함수를 찾는다.
2. 일차하는 타입이 없는 경우 형변환 이후 일치하는 함수를 찾는다.
- char, unsigned char, short는 int로 변환
- unsigned short 는 int의 크기에 따라 unsigned int 또는 int로 변환
- float는 double으로 변환
- enum은 int로 변환
3. 위 경우에도 없다면 다음을 따른다.
-numeric 타입은 다른 숫자타입으로 (ex. float -> int)
-Enum도 숫자타입으로
-0은 포인터타입, 숫자타입으로 변환
-포인터는 void 포인터로 변환
ex)
#include <iostream>

void	print(int x) { std::cout << "int : " << x << std::endl; }
//void	print(char x) { std ::cout << "char : " << x << std:: endl; }
void	print(double x) { std::cout << "double : " << x << std::endl; }

int	main() {
	int		a = 1;
	char	b = 'c';
	double	c = 3.2f;

	print(a);
	print(b);
	print(c);

	return 0;
}

출력문

int : 1
int : 99
double : 3.2

*/
