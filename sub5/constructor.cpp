#include <iostream>
/*
class Date {
	int	year_;
	int	month_;
	int	day_;

	public:
		void	SetDate(int year, int month, int date);
		void	AddDay(int inc);
		void	AddMonth(int inc);
		void	AddYear(int inc);

		int		GetCurrentMonthTotalDays(int year, int month);

		void	ShowDate();
		//__________생성자___________
		Date(int year, int month, int day) {
			year_ = year;
			month_ = month;
			day_ = day;
		}
};

//보통 객체 안에 복잡한 함수를 내포하지 않는다. 복잡한 함수는 다음과 같은 방법으로 정의한다.

void Date::SetDate(int year, int month, int day) {
	year_ = year;
	month_ = month;
	day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month) {
	static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month != 2) {
		return month_day[month - 1];
	} else if (year % 4 == 0 && year % 100 != 0) {
		return 29;  // 윤년
	} else {
		return 28;
	}
}

void Date::AddDay(int inc) {
  while (true) {
	// 현재 달의 총 일 수
	int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

	// 같은 달 안에 들어온다면;
	if (day_ + inc <= current_month_total_days) {
			day_ += inc;
			return;
	} else {
		// 다음달로 넘어가야 한다.
		inc -= (current_month_total_days - day_ + 1);
		day_ = 1;
		AddMonth(1);
	}
	}
}

void Date::AddMonth(int inc) {
	AddYear((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
			<< " 일 입니다 " << std::endl;
}

//생성자는 생성 후 초기화를 자동으로 해주는 장치, 객체생성시 자동으로 호출되는 함수.
int main() {
	Date day(2011, 3, 1); //객체 생성시 매개변수 입력을 하게하여 초기화를 시킨다. -> 암시적 방법
	//Date day = Date(2012, 3, 1); 위와 동일한 코드; -> 명시적 방법
	day.ShowDate();

	day.AddYear(10);
	day.ShowDate();
	return 0;
}


//생성자를 정의하지 않고 호출될 경우 디폴트 생성자가 호출된다.
//디폴트 생성자의 경우는 다음과 같다.
class	Date {
	int	year_;
	int	month_;
	int	day_;

	public:
	void ShowDate ();

	Date() {
		year_ = 2012;
		month_ = 7;
		day_ = 12;
	}
};

void Date::ShowDate() {
	std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
		<< " 일 입니다 " << std::endl;
}

int	main(){
	Date	day = Date();
	Date	day2;

	day.ShowDate();
	day2.ShowDate();

	return 0;
}
//여기서 day와 day2를 디폴트 생성자로 추가할 수 있었다.
//!!!!!주의점!!!!!!!
//Date day3(); 는 쓰지 말라. => 리턴값이 Date이고 인자가 없는 함수 day3를 정의하는 것으로 인식
*/

/* 명시적으로 디폴트 생성자 사용하기
class Test {
	public:
		Test() = default; //디폴트 생성자를 정의하라
};
