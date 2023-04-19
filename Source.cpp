#include<iostream>
#include<windows.h>
#include"Foo.h"
//#include"Poo.h"

#define PI 3.14
#define E 2.71

#define forever for(int fori = 0;;fori++)
#define begin {
#define end }

#define sum(a, b) a + b 

#define print_arr(arr,len) std::cout<<'[';\
for(int i = 0; i < len; i++)\
std::cout<< arr[i] <<", ";\
std::cout<<"\b\b]\n"

#define NUM 0

#if NUM < 0 

void func() {
	std::cout << "Hello world!\n";
}
#elif NUM < 0
void func() {
	std::cout << "Wow!\n";
}

#else
void func() {
	std::cout << "Bye world!\n";
}
#endif


#ifdef NUM //#ifndef обратное значение
const int L = 10;
#else
const int L =20
#endif













int main () begin
	setlocale (LC_ALL, "rus");
int n, m;

func();
std::cout << L << std::endl;
// Объекты препроцессора
	/*std::cout << "Pi = " << PI << std::endl;
	std::cout << "E = " << E << std::endl;

	forever{

	Sleep(20);
	std::cout << '.';
	if (fori >= 100)
		break;
	}
	*/
// Макросы препроцессора
/*
std::cout << "Enter 2 numbers -> ";
std::cin >> n >> m;
std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;


const int size = 5;
int arr[size]{ 1,2,3,4,5 };
print_arr(arr, size);


#undef PI
//std::cout << PI << std::endl;//Error
#define PI 3
std::cout << PI << std::endl;
*/




	return 0;
end