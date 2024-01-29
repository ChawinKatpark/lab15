#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &w, int &x, int &y, int &z) {
    int money[] = {w, x, y, z};
    int n = sizeof(money) / sizeof(money[0]);

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(money[i], money[j]);
    }
    
    w = money[0];
    x = money[1];
    y = money[2];
    z = money[3];
}