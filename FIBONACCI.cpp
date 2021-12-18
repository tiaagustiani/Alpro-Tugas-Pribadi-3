#include <iostream>
using namespace std;

int main()
{
    int n; 
	int f1 = 0;
	int f2 = 1;
	int berikutnya = 0;
	
	cout << "Deret Fibonacci: \n";
	
    for (int i = 1; i <= 13; ++i)
    {
        // Mencetak dua deret bilangan fibonacci pertama.
        if(i == 1)
        {
            cout << " " << f1<<", ";
            continue;
        }
        if(i == 2)
        {
            cout << f2 << ", ";
            continue;
        }
        berikutnya = f1 + f2;
        f1 = f2;
        f2 = berikutnya;
        
         // Mencetak deret bilangan fibonacci berikutnya.
        cout << berikutnya << ", ";
   
    }
    cout << "dst.";
	return 0;
}
