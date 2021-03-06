#pragma once
#include "stdafx.h"	//I hate this file. Someday it will be useful to me but for now I still hate it.
#include <string>
using namespace std;

class bTREE
{
	struct treeNode {
		string data;
		int time;
	};

private:
	//some data structure to hold your treeNodes together ...
	//DATASTUCTURE treeNodes tree;
	//any helper private variables you need

public:
	bTREE();
	~bTREE();

	int dataInserted();
	int numberOfNodes();

	int insert(string, int);

	int find(string);

	string locate(string);


	friend bool operator==(const bTREE& lhs, const bTREE& rhs);
	friend bool operator!=(const bTREE& lhs, const bTREE& rhs);

	friend std::ostream& operator<<(std::ostream& out, const bTREE& p);

};

