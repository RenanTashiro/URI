/*
Nome:      Recuperação da Árvore
ID:        1191
Resposta:  Accepted
Linguagem: C++
Tempo:     0.268s
Tamanho:   1,65 KB
Submissao: 25/12/15 15:26:36
*/
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

struct nodeTree {
    struct nodeTree *previousNode;
    char value;
    int weight;
    struct nodeTree *nextNode;
};

typedef struct nodeTree NodeTree;
typedef NodeTree *NodeTreePtr;

void insertTree(NodeTreePtr *nodeTree, char value, int weight)
{
    if(*nodeTree == NULL) {
        *nodeTree = (NodeTree*)malloc(sizeof(NodeTree));
        (*nodeTree)->previousNode = NULL;
        (*nodeTree)->value = value;
        (*nodeTree)->weight = weight;
        (*nodeTree)->nextNode = NULL;
    }
    else {
        if(weight < (*nodeTree)->weight) {
            insertTree(&(*nodeTree)->previousNode, value, weight);
        } else {
            insertTree(&(*nodeTree)->nextNode, value, weight);
        }
    }
}

void posOrder(NodeTreePtr node)
{
    if(node != NULL) {
        posOrder(node->previousNode);
        posOrder(node->nextNode);
        cout << node->value;
    }
}

void setWeight(string str, char target, map<char,int> &W)
{
	int i;
	for(i = 0; i < (int) str.size(); i++) {
		if(str[i] == target) {
			W[str[i]] = 0;
			break;
		}
	}
	for(int j = i-1; j >= 0; j--) {
		W[str[j]] = W[str[j+1]] - 1;
	}
	for(int j = i+1; j < (int) str.size(); j++) {
		W[str[j]] = W[str[j-1]] + 1;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	
	string S1, S2;
	
	while(cin >> S1 >> S2) 
	{
		NodeTreePtr treePtr = NULL;		
		map<char,int> W;
		
		setWeight(S2, S1[0], W);

		for(int i = 0; i < (int) S1.size(); i++) {
			insertTree(&treePtr, S1[i], W[S1[i]]);
		}
		
		posOrder(treePtr);
		cout << endl;
	}
}
