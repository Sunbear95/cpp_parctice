#include <iostream>

// int	main() {
// 	const int	&ref = 4;

// 	std::cout << ref << std::endl;
// }

// int	main() {
// 	int	arr[3] = {1, 2, 3};
// 	int(&ref)[3] = arr;

// 	ref[0] = 2;
// 	ref[1] = 3;
// 	ref[2] = 1;

// 	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
// 	return 0;
// }



/**************잘못된 경우******************** */
// int&	function() {
// 	int	a = 2;
// 	return a;
// }
// 이럴 경우 사라지는 a의 주소값을 리턴하는 것(int&)이기 때문에 세그폴트 발생.
//

// int&	function(int& a){
// 	int	a = 5;
// 	return a;
// }

// int	main() {
// 	int	b = 2;
// 	int	c = function(b);
// 	return 0;
// }
// 이 코드의 장점은 만약 c가 엄청 큰 구조체였을 경우 c 전체를 반환하는 것이 아닌 c의 주소만 반환하기에 시간이 단축된다.

