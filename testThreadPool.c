#include"ThreadPool.hpp"
#include<unistd.h>
int print(int number)
{
		std::cout<<number<<std::endl;
}
int main()
{
		ThreadPool *tp = new ThreadPool();
		tp->initThreadPool();

		int i = 0;
		for(;i < 10000;i++){
				Task t;
t.SetTask(i,print);
				tp->PushTask(t);
				sleep(1);
		}
}
