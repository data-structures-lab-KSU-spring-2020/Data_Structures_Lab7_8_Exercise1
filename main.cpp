#include <cstdlib>
#include <iostream>
#include <set>
#include <algorithm>
#include "node2.h"
#include "bag5.h"

using namespace std;

int main()
{
    bag<int> my_bag;
	
	cout << "Empty int bag created. Attempting to run print_value_range(20, 10)" << endl;
	
	cout << "Nothing." << endl;
	
	cout << "\nInserting int values into bag." << endl;
	
	for (int i = 1; i < 5; i++){
		my_bag.insert(i*10);
	}
	
	for (int i = 4; i > 0; i--){
		my_bag.insert(i*10);
	}
	
	my_bag.print_bag();
	cout << "\nRunning print_value_range(20, 10)" << endl;
	my_bag.print_value_range(20, 10);
    
	cout << "\nRunning print_value_range(20, 10000)" << endl;
	my_bag.print_value_range(20, 10000);
	
	cout << "\nRemoving repetition." << endl;
	my_bag.remove_repetition();
	my_bag.print_bag();
	
	
	return EXIT_SUCCESS;
}
