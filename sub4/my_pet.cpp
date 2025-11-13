#include <iostream>

//typedef struct Animal
//{
//	char	name[30];
//	int		age;

//	int		health;
//	int		food;
//	int		clean;
//}	Animal;

//void	creat_animal(Animal *animal){
//	std::cout << "동물 이름 : ";
//	std::cin >> animal->name;

//	std::cout << "동물 나이 : ";
//	std::cin >> animal->age;

//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 100;
//}

//void	play(Animal *animal){
//	animal->health += 20;
//	animal->food -= 10;
//	animal->clean -= 10;
//}

//void	one_day_pass(Animal *animal){
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}

//void	show_status(Animal *animal){
//	std::cout << "동물" << animal->name	<< "의 상태" << std::endl;
//	std::cout << "체력" << animal->health << std::endl;
//	std::cout << "배부름" << animal->food << std::endl;
//	std::cout << "청결" << animal->clean << std::endl;
//}

//int	main(){
//	Animal *list[10];
//	int	animal_num = 0;

//	for(;;){
//	std::cout << "1. 동물 추가하기" << std::endl;
//	std::cout << "2. 놀기" << std::endl;
//	std::cout << "3. 상태보기" << std::endl;

//	int	input;
//	std::cin >> input;

//	switch (input) {
//		int	play_with;
//		case 1:
//			list[animal_num] = new Animal;
//			creat_animal(list[animal_num]);
//			std::cout << animal_num << "번째에 생성"<< std::endl
//			animal_num++;
//			break;
//		case 2:
//			std::cout << "누구랑 놀까 ? ";
//			std::cin >> play_with;

//			if (play_with < animal_num)
//				play(list[play_with]);
//			break;
//		case 3:
//			std::cout << "누굴 볼까 ? ";
//			std::cin >> play_with;
//			if (play_with < animal_num)
//				show_status(list[play_with]);
//			break;
//	}
//	}
//	for (int i = 0; i != animal_num; i++)
//		one_day_pass(list[i]);
//	for (int i = 0; i != animal_num; i++)
//		delete list[i];
//}

typedef struct Bird {
	char	name[30];
	int		age;

	int		health;
	int		food;
	int		clean;

	int		height;
}	Bird;

typedef struct Fish {
	char	name[30];
	int		age;

	int		health;
	int		food;
	int		clean;

	int		deep;
}	Fish;

//객체지향에 대해 알아가보자~~~