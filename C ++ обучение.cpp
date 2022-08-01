int main()
{
	int a; // 4 байт под число
	__int32 b; // указать количество байт
	
	short s; // 2 байт под число 65000

	long long ll; // 8 байт -2^63  2^63 - 1

	unsigned long long ull; // 0 2^64-1 111111111111111111111111111111111111111
	__int8 b;




	char ch; // 1 байт
	ch = 100;

	unsigned char uch;

	ch = 'a'; // символы указываются через одинарные

	"string"; // Через двойные строка

	//ch ="string"; так нельзя тк в один символ строка не записывается
	float f; // 4 байт (как на int)

	double d; // 8 байт (как на int)

	long double ld; // 10 байт

	bool bl; // 1 бит
	bl = true;
	bl = false;

	bool bl2;

	int in; // 4 байт


	f = 1.23223;

	f = 123e100; // 123 * 10^100

	f = 123e-10; // 123 * 10^-10   0,0000000123
	/*
	это
	многострочный
	комментарий
	*/


	const unsigned char cch = 1002; // не меняется
	//const int ci = 5;
	//a = ci + ci;


	const int child = 25;

	int child2 = 325;


	child + child2;













}

