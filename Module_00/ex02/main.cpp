#include "Account.cpp"

int main()
{
	

	struct timeval tv;
	struct tm tm_local;
	
	gettimeofday(&tv, NULL);
	localtime_r(&tv.tv_sec, &tm_local);
	std::cout << "[" << (tm_local.tm_year + 1900);
	std::cout << std::setw(2) << (tm_local.tm_mon + 1);
	std::cout << std::setw(2) << (tm_local.tm_mday) << "_";
	std::cout << std::setw(2) << (tm_local.tm_hour);
	std::cout << std::setw(2) << (tm_local.tm_min);
	std::cout << std::setw(2) << (tm_local.tm_sec) << "] ";
	return 0;
}
