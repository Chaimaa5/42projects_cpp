#include <iostream>
#include <list>

void merge_insert_sort(std::list<int>& lst) {
  const int INSERTION_SORT_THRESHOLD = 10;

  if (lst.size() < INSERTION_SORT_THRESHOLD) {
    // Perform insertion sort on small lists
    lst.sort();
    return;
  }

  // Divide the list into two sublists
  std::list<int> left, right;
  int i = 0;
  for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
    if (i < lst.size() / 2) {
      left.push_back(*it);
    } else {
      right.push_back(*it);
    }
    i++;
  }

  // Recursively sort the sublists
  merge_insert_sort(left);
  merge_insert_sort(right);

  // Merge the sorted sublists
  lst.clear();
  while (!left.empty() && !right.empty()) {
    if (left.front() <= right.front()) {
      lst.push_back(left.front());
      left.pop_front();
    } else {
      lst.push_back(right.front());
      right.pop_front();
    }
  }
  lst.splice(lst.end(), left);
  lst.splice(lst.end(), right);
}

bool is_digit(std::string n)
{
	for (size_t i = 0; i < n.length(); i++)
	{
		if (!isdigit(n[i]))
			return (0);
	}
	return (1);
}
std::list<int> Parser(int ar, char **av){
	std::list<int> list;
	for (int i = 1; i < ar; i++)
	{
		std::string n = av[i];
		if (is_digit(n))
		{
			list.push_back(atoi(n.c_str()));
			// deque.push_back(atoi(n.c_str()));
		}
		else
		{
			std::cout << "Error.\n";
			break;
		}
	}
	return list;
}
int main(int ar, char **av) {
  std::list<int> lst = Parser(ar, av);
  merge_insert_sort(lst);
  for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  return 0;
}
