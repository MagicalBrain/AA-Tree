#pragma once
#include <iostream>

using namespace std;

typedef int KeyType;

typedef struct AANode
{
	KeyType data;
	AANode *left, *right;
	int level;
}AANode;

typedef struct AATree
{
	AANode *root;
}AATree;