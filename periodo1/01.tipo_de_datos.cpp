#include <iostream>
#include <limits>

using namespace std;

int main(){
	
	int imin = numeric_limits<int>::min();  // Valor minimo para un entero
	int imax = numeric_limits<int>::max(); // Valor maximo para un entero
	
	cout << " imin = " << imin << endl;
	cout << " imax = " << imax << endl;
	cout << " tamaño de int: " << sizeof(int) << endl;
	
	float fmin = numeric_limits<float>::min();
	float fmax = numeric_limits<float>::max();
	
	cout << " fmin = " << fmin << endl;
	cout << " fmax = " << fmax << endl;
	cout << " tamaño de float: " << sizeof(float) << endl;
	
	char cmin = numeric_limits<char>::min();
	char cmax = numeric_limits<char>::max();
	
	cout << " cmin = " << cmin << endl;
	cout << " cmax = " << cmax << endl;
	cout << " tamaño de char: " << sizeof(char) << endl;
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << " dmin = " << dmin << endl;
	cout << " dmax = " << dmax << endl;
	cout << " tamaño de double: " << sizeof(double) << endl;
	
	short smin = numeric_limits<short>::min();
	short smax = numeric_limits<short>::max();
	
	cout << " smin = " << smin << endl;
	cout << " smax = " << smax << endl;
	cout << " tamaño de short: " << sizeof(short) << endl;
	
	long lmin = numeric_limits<long>::min();
	long lmax = numeric_limits<long>::max();
	
	cout << " lmin = " << lmin << endl;
	cout << " lmax = " << lmax << endl;
	cout << " tamaño de long: " << sizeof(long) << endl;
	
	long double ldmin = numeric_limits<long double>::min();
	long double ldmax = numeric_limits<long double>::max();
	
	cout << " ldmin = " << ldmin << endl;
	cout << " ldmax = " << ldmax << endl;
	cout << " tamaño de long double: " << sizeof(long double) << endl;
	
	bool bmin = numeric_limits<bool>::min();
	bool bmax = numeric_limits<bool>::max();
	
	cout << " bmin = " << bmin << endl;
	cout << " bmax = " << bmax << endl;
	cout << " tamaño de bool: " << sizeof(bool) << endl;
	
	return 0;
}
