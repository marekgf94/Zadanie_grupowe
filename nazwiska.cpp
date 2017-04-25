#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std ;

int main()
{
multiset<string> s;
std::cout << "Wczytywanie nazwisk. " << std::endl;
ifstream in("nazwiska.txt");
std::cout << "Sortowanie i zapisywanie w pliku nazwiska_sort.txt." << std::endl;
ofstream out("nazwiska_sort.txt");
copy(istream_iterator<string>(in),istream_iterator<string>(),inserter(s,s.begin()));
copy(s.begin(),s.end(),ostream_iterator<string>(out,"\n"));
}
