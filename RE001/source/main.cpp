#include <iostream>
//#include <concepts>

//template <typename T>
//requires std::integral<T>
//T add(T a, T b){
//	return a+b;
//}
int add(int a,int b)
{
return a+b;
}

int main(){
	std::cout << "Hellor from C++ with CMake on Windows" << std::endl;
	std::cout << "the sum is : " << add(7,3) << std::endl;
	return 0;
}