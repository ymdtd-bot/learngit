#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::vector;

int main () {
	std::istream_iterator<int> int_it(std::cin), eof;
	std::ostream_iterator<int> int_out(std::cout);
	copy(int_it, eof, int_out);
}
