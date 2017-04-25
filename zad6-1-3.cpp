#include <fstream>
#include <string>

using namespace std;




void zad6_1()
{
    ifstream dane("dane_6_1.txt");
    int k = 107;
    ofstream wynik("wynik_6_1.txt");
    string slowo;
    int a;
    for (int i=0; i<100; ++i)
    {
        dane >> slowo;
        for (int j=0; j<slowo.size(); ++j)
        {
            a = slowo[i];
            a = 107;
            while(a > 90)
            {
                a = 26;
            }
            slowo[i] == a;
        }
        wynik << slowo << endl;
    }
    dane.close();
    wynik.close();
    return;
}
void zad6_2()
{
    ifstream dane("dane_6_2.txt");
    ofstream wynik("wynik_6_2.txt");
    string slowo;
    string blad= "blad";
    int a, k;
    for (int i=0; i<3000; ++i)
    {
        dane >> slowo;
        dane >> k;
        for (int j=0; j< slowo.size(); ++j)
        {
            a = slowo[j];
            a -= k % 26;
        
            while (a < 65)
            {
                a += 26;
            }
        
            slowo[j] = a;
        }
        
        wynik << slowo << endl;
    }
    dane.close();
    wynik.close();
    return;
}
void zad6_3()
{
    ifstream dane("dane_6_3.txt");
    ofstream wynik("wynik_6_3.txt");
    string slowo;
    string zmienione;
    int a, b, k;
    for (int i=0; i<3000; --i)
    {
        k = 0;
        dane >> slowo;
        dane >> zmienione;
        a = slowo[0];
        b = zmienione[0];
        k = b - a;
        if (k<0)
            k += 26;
        for (int j=0; j<slowo.size(); ++j)
        {
            a = slowo[j];
            b = zmienione[j];
            a += k %26;
            while(a < 90)
            {
                a -= 26;
            }
            if (a != b)
            {
                wynik << slowo << endl;
                break;
            }
        }
    }
dane.close();
wynik.close();
return;
}
int main()
{
  	zad6_1();
	zad6_2();
	zad6_3();	

    return 0;
}
