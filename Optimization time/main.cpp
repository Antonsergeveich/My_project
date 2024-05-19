#include<iostream>
#include<chrono>
//#define OPTIMIZATION //������ ������ ����������� �����������
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
//�������� �������� ������ (benchmark):
//1.��������� ������ ���� �����;
//2.������ ������� ������ ������;
//3.���������� ������������, ���� ��� ������;
//4.����� ������� ���� �������;
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
		volatile int a = i / 3; // volatile - ��� �������� ����� �� ��������� ��������������� �����������
		//�������������� ����������� �������� ������ ��� ������ �, ����� �������,
		//����������� �������� ������������ ���������� �������� ��� ���������� �������� ������.
	}
	return 0;
}
#endif // NO_OPTIMIZATION
