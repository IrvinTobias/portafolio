#include <iostream>

using namespace std;

int main() {
	
	char bloques[3]={'A','B','C'};
	char *ptr = &bloques[0];
	char temp;
	temp = bloques[0];
	cout << "temp "<< temp << endl;
	temp= *(bloques + 2);
	cout << "*temp "<< temp << endl;
	temp= *(ptr+1);
	cout << "*temp "<< temp << endl;
	temp= *ptr;
	cout << "*temp "<< temp << endl;
	ptr = bloques + 1;
	cout << "ptr "<< ptr << endl;
	temp= *ptr;
	cout << "*temp "<< temp << endl;
	temp= *(ptr+1);
	cout << "*temp "<< temp << endl;
	ptr = bloques;
	cout << "*ptr "<< ptr << endl;
	temp= *++ptr;
	cout << "*temp "<< temp << endl;
	temp= ++*ptr;
	cout << "*temp "<< temp << endl;
	temp= *ptr++;
	cout << "*temp "<< temp << endl;
	temp= *ptr;
	cout << "*temp "<< temp << endl;

}
