#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;
    
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << endl;
    
    int b2 = *&b;
    int c2 = *&c;
    
    cout << &a << " " << &b2 << " " << &c2 << " " << &x << " " << &y << " " << &z << endl;
    
    c = 'F';
    
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << endl;
    
    *y = 'W';
    
    cout << a << " " << b << " " << *&c << " " << x << " " << &y << " " << z << endl;
    
    *x = 6;
    
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << endl;
    
    **z = 7;
    
    cout << a << " " << b << " " << c << " " << x << " " << &y << " " << z << endl;
    
	return 0;
}