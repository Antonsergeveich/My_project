#include<iostream>
#include<chrono>
//#define OPTIMIZATION //Пример плохой оптимизации компилятора
#define  NO_OPTIMIZATION
class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using microseconds = std::chrono::microseconds;
public:
	Timer()
		: start_(clock_t::now())
	{
	}
	
	~Timer()
	{
		const auto finish = clock_t::now();
		const auto us =
			std::chrono::duration_cast<microseconds>
			(finish - start_).count();
		std::cout << us << " us" << std::endl;
	}
private:
	const clock_t::time_point start_;
};
//Измеряем скорость работы (benchmark):
//1.Измерений должно быть много;
//2.Одному прогону верить нельзя;
//3.Компилятор оптимизирует, надо ему мешать;
//4.Перед тестами надо греться;
#ifdef OPTIMIZATION
//Optimization
int main()
{
	Timer t;
	for (int i = 0; i < 100 * 1000 * 1000; ++i)
	{
		int a = i / 3;
	}
	return 0;
}
#endif // OPTIMIZATION
#ifdef NO_OPTIMIZATION
int main()
{
	Timer t;
	for (int i = 0; i < 100 * 1000 * 1000; ++i)
	{
		volatile int a = i / 3; // volatile - Это ключевое слово не позволяет оптимизирующему компилятору
		//оптимизировать последующие операции чтения или записи и, таким образом,
		//неправильно повторно использовать устаревшее значение или пропускать операции записи.
	}
	return 0;
}
#endif // NO_OPTIMIZATION
