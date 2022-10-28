#include <iostream>
#include "MyAVLTree.hpp"
#include "runtimeexcept.hpp"
#include <string>
#include <cassert>

int main()
{
	MyAVLTree<int, std::string> tree;
	tree.insert(5, "foo");
	tree.insert(3, "sna");
	tree.insert(10, "bar");
	tree.insert(12, "twelve");
	tree.insert(15, "fifteen");

	std::vector<int> trav = tree.inOrder();
	std::vector<int> expected = { 3, 5, 10, 12, 15 };
	assert(trav == expected);

}