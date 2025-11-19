/*************************객체**************************
인스턴스 매서드 또는 인스턴스 변수 : 객체가 가지고 있는 자기 만의 정보를 나타내는 변수들과 함수들
객체 : 변수와 참고 자료들로 이루어진 스프트웨어 덩어리.
추상화 : 객체가 현실세계의 존재하는 것을 나타내기 위한 과정.


typedef struct Animal
{


	animal.food != 100; -> 불가능
	animal.increase_food(100); -> 가능
}	Animal;


변수들은 객체의 외부로 부터 보호되고 있다. 외부에선 인스턴스 변수의 값을 바꾸지 못하며, 객체 내
인스턴스 함수에서만 가능.
위 의 경우 animal.food != 100 는 외부에서 animal이라는 객체의 인스턴스 변수에 직접 겁근하여 불가능
animal.increase_food(100)는 인스턴스 함수를 통해 값을 수정하는 것이기에 가능.
항상 인스턴스 메소드를 통해 간접적으로 조절하는 것이 ~캡슐화~
-- 캡슐화가 필요한 이유. 내부적으로 어떻게 돌아가는지 몰라도 사용 가능! --
*/

/************************클래스 ***********************
클래스란 : 객체의 설계도, c++에선 이와 같은 클래스로 만들어진 객체를 인스턴스락 부름


#include <iostream>

class Animal {
	private :   <--*접근 지시자
	int	food;
	int	weight;

	public :
	void	set_animal(int _food, int _weight) {
		food = _food;
		weight = _weight;
	}
	void	increase_food(int inc) {
		food += inc;
		weight += (inc / 3);
	}
	void view_stat() {
		std::cout << "이 동물의 food     : " << food << std::endl;
		std::cout << "이 동물의 weight   : " << weight << std::endl;
	}
};

int	main (){
	Animal	animal;
	animal.set_animal(100, 50);
	animal.view_stat();
	animal.increase_food(30);

	animal.view_stat();
	return 0;
}

접근 지시자  = 외부에서 이 멤버들에 접근여부 알려줌.  객체 내에서 보호되고 있는 private. 명시하지 않을 경우 private으로 간주
*/

