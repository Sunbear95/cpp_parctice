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
/*

#include <iostream>

int main() {
  int i = 1, sum = 0;

  while (i <= 10) {
    sum += i;
    i++;
  }

  std::cout << "합은 : " << sum << std::endl;
  return 0;
}
위와 다른 점은 위는 getline으로 개행 전 까지만 입력을 받음. 하지만 cin의 경우 버퍼 플래시가 일어나지
않아 개행부분이 계속 입력값에 남아있었고, 그것이 원인이 되어 int값이 아닌 다른 값이 들어올 경우 지속해서
개행을 ent로 읽어 "다시 생각해보세요"가 반복해서 출력됨.

*/