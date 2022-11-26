#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>
template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(MutantStack<T> const &M){
			*this = M;
		}
		MutantStack<T> & operator=(MutantStack<T> const &M){
			(void)M;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		iterator begin() {
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
		const_iterator cbegin() {
			return (this->c.cbegin());
		}
		const_iterator cend(){
			return (this->c.cend());
		}

		reverse_iterator rbegin(){
			return (this->c.rbegin());
		}
		reverse_iterator rend(){
			return (this->c.rend());
		}
};