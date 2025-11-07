#include <iostream>
#include <string>

int	main() {
	long	lucky_number = 3;
	std::cout << "내 비밀 수를 맞추어 보시오~" << std::endl;

	std::string input;


	while (1) {
		std::cout << "입력 : ";
		std::getline(std::cin, input);
		if (lucky_number == std::strtol(input.c_str(), NULL, 10)) {
			std::cout << "맞추셨습니다." << std::endl;
			break;
		} else{
			std::cout << "다시 생각해보세요" << std::endl;
		}
	}
	return 0;
}
