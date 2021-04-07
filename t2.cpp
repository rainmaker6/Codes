//Meta Template for Msort
//Warning:: input array with spaces not new line
#include <iostream>
#include <string>
#include <sstream>
#include <string.h>
#include <vector>

using namespace std;

namespace KW {

	template<typename RI>
	void merge(RI left, RI end_left,
		RI right, RI end_right,
		RI out) {
		// while there is data in both input sequences
		while (left != end_left && right != end_right) {
			// find the smaller and
			// insert it into the output sequence
			if (*left < *right) {
				*out++ = *left++;
			}
			else {
				*out++ = *right++;
			}
		}

		// Assert: one of the sequences has more items to copy.
		// Copy remaining input from left sequence into ouput
		while (left != end_left) {
			*out++ = *left++;
		}

		//copy remaining input from right sequence into output
		while (right != end_right) {
			*out++ = *right++;
		}
	}
	template<typename RI>
	void merge_sort(RI first, RI last) {
		if (last - first > 1) {
			// split table into two new half tables
			typedef typename std::iterator_traits<RI>::value_type value_type;
			RI middle = first + (last - first) / 2;
			std::vector<value_type> left_table(first, middle);
			std::vector<value_type> right_table(middle, last);

			// sort the halves
			KW::merge_sort(left_table.begin(), left_table.end());
			KW::merge_sort(right_table.begin(), right_table.end());

			// merge the halves back into the original table.
			merge(left_table.begin(), left_table.end(),
				right_table.begin(), right_table.end(),
				first);
		}
	}

}

int main()
{
	
	string str;
	int count = 0;
	getline(cin, str);
	stringstream ss;
	ss << str;
	int nums = 0;
	while (ss >> nums) {
		count++;
	}
	
	//create vector
	vector<int> arr;

	//int *arr = new int[count];
	//memset(arr, 0, sizeof(int)* count);

	int num = 0;
	count = 0;
	ss.clear();
	ss << str;
	while (ss >> num) {
		arr.push_back(num);
		count++;
	}

	// call the sort function using the vector iterators
	KW::merge_sort(arr.begin(), arr.end());
	//quickSort(arr, 0, count - 1);

	for (int i = 0; i < count; ++i) {
		cout << arr[i] << " ";
	}
	//delete[] arr;
	system("PAUSE");
}

