#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "MUTANTSTACK :\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack.top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack.size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "s.top = " << s.top() << "\n\n";

	
	std::cout << "STD::LIST :\n";
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << "mlist.top = " << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << "mlist.size = " << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator listIt = mlist.begin();
	std::list<int>::iterator listIte = mlist.end();
	++listIt;
	--listIt;
	while (listIt != listIte)
	{
		std::cout << *listIt << std::endl;
		++listIt;
	}
	std::list<int> sList(mlist);
	std::cout << "sList.top = " << sList.back() << "\n\n";
	return 0;
}