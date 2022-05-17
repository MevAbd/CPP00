#include <stdio.h>

int	nb = 1;
int f(void){ return 2 ;}

namespace Foo
{
	int	nb = 3;
	int f(void){ return 4 ;}
}

namespace Bar
{
	int	nb = 5;
	int f(void){ return 6 ;}
}

namespace Mev = Bar ;

int main(void)
{
	std::cout << "HELLO WORLD!" ;
	printf("    nb == [%d] fonction == [%d]\n", nb, f());
	printf("Foo nb == [%d] fonction == [%d]\n", Foo::nb, Foo::f());
	printf("Bar nb == [%d] fonction == [%d]\n", Bar::nb, Bar::f());
	printf("Mev nb == [%d] fonction == [%d]\n", Mev::nb, Mev::f());
	return (0);
}
