#include <iostream>
#include <fstream>


void sort(int A[],int N)
{
 for(int n = 1;n < N;n++) {
   int mover = A[n];
   int k = n;
   while(k > 0) {
     if(A[k-1] < mover) {
       A[k] = A[k-1];
       k--;
     } else
       break;
   }
   A[k] = mover;
 }
}

int main (int argc, const char * argv[])
{
 std::ifstream in;
 std::ofstream out;

 int N = 100;
 int n = 0;
 int k;
 int* A = new int[N];

 in.open("liczby.txt");

 int x;
 while(in >> x) {
   if(n == N) {
     int* B = new int[2*N];
     for(k = 0;k < n;k++)
       B[k] = A[k];
     delete[] A;
     A = B;
     N *= 2;
   }
   A[n] = x;
   n++;
 }
 in.close();

 std::cout << "Wczytywanie liczb. " << std::endl;

 sort(A,n);

 out.open("posortowane.txt");
 for(k = 0;k < n;k++)
   out << A[k] << std::endl;
 out.close();

 delete[] A;

 std::cout << "Sortowanie i zapisywanie w pliku posortowane.txt." << std::endl;

 return 0;
}
