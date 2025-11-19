#include <iostream>

class Date {
	int	year_;
	int	month_;
	int	day_;

	public:
	void	SetDate(int year, int month, int date) {
		year_ = year;
		month_ = month;
		day_ = date;
	}
	void	AddDay(int inc) {
		day_ += inc;
		if (day_ > 28 && month_ == 2)
		{
			AddMonth(1);
			AddDay(-28);
		}
		else if (day_ > 30 && (month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))
		{
			AddMonth(1);
			AddDay(-30);
		}
		else if (day_ > 31)
		{
			AddMonth(1);
			AddDay(-31);
		}
	}
	void	AddMonth(int inc) {
		month_ += inc;
		if (month_ > 12)
		{
			AddYear(1);
			AddMonth(-12);
		}
	}
	void	AddYear(int inc) {
		year_ += inc;
	}

	void	ShowDate() {
		std::cout << "오늘의 날짜는 " << year_ << "년" << month_ << "월" << day_ << "일 입니다" << std::endl;
	}
};

int	main() {
	Date	date;
	date.SetDate(2025,2,28);
	date.ShowDate();
	date.AddDay(1);
	date.ShowDate();

	date.AddMonth(1);
	date.ShowDate();
	date.AddDay(365);
	date.ShowDate();

	date.AddDay(1);
	date.ShowDate();

	return 0;
}
