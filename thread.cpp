#include<iostream>
#include<thread>
using namespace std;
void foo(int i)
{
  cout<<"Thread running..\n"<<i;
}
int main()
{
  thread t_obj(foo,10);
  t_obj.join();
}
