#include <iostream>
using namespace std;

int func (int x)
{
	if (x!=0)
		x=0;
	return x;
}

int main()
{
	int x;
	cin>>x;
	if (func(x)==0)
		cout<<"Hello, World!"<<endl; //написано сообщение под вывод в консоль и указано начало с новой строчки
return 0;
}
