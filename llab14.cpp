/* Оцените сложность алгоритма в лучшем, среднем и худшем случае.
Рассчитайте примерное время работы алгоритма.Запрограммируйте его.
Определите реальное время работы
(воспользуйтесь классом Timer https ://ravesli.com/urok-129-tajming-koda-vremya-vypolneniya-programmy/)
и сравните с расчетным.* /

/*Вариант 4.
Дана последовательность из N чисел.Найдите номер первого нечетного числа.*/

#include <iostream>
#include <chrono>
#include <array>
class Timer
{
private:
	// Псевдонимы типов используются для удобного доступа к вложенным типам
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};
int main()

{
	


	int mas[100000];

	int n;
	std::cin >> n;

	
	for (int i = 0; i < n; i++)
		std::cin >> mas[i];
	Timer t;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)
		{
			std::cout << mas[i] << " " << i + 1 << std::endl;
			break;
		}
	}

	std::cout << "Time elapsed: " << t.elapsed() << '\n';

	return 0;
}
/*Лучший случай 1
Средний случай O(n)
Худший случай Θ(n)*/
