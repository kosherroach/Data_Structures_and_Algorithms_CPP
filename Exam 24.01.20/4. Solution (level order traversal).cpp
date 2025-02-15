// github.com/andy489

// https://www.hackerrank.com/contests/sda-2019-2020-exam-2e3nr4rr/challenges/challenge-2352

#include <iostream>
#include <map>
#include <queue>

using namespace std;

struct Node {
    Node *left;
    Node *right;
    int value;

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

class BST {

public:
    BST() {
        root = NULL;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void printLeftProfile() {
        queue<Node *> q;
        q.push(root);
        int r(0);
        while (!q.empty()) {
            int s = (int) q.size();
            while (s--) {
                Node *cur = q.front();
                q.pop();
                if (cur->left) 
                    q.push(cur->left);
                if (cur->right) 
                    q.push(cur->right);
                if (!m.count(r)) 
                    m[r] = cur->value;
            }
            ++r;
        }
        for (const auto &kvp:m)
            cout << kvp.second << ' ';
    }

private:
    map<int, int> m;
    Node *root;

    Node *insert(Node *curNode, int value) {
        if (curNode == NULL) {
            curNode = new Node(value);
        } else if (curNode->value < value) {
            curNode->right = insert(curNode->right, value);
        } else if (curNode->value > value) {
            curNode->left = insert(curNode->left, value);
        } else {
            //if we already have this value at the tree - do nothing
        }
        return curNode;
    }
};

int main() {
    int n, i(0);
    cin >> n;
    int value;
    BST tree;
    for (; i < n; ++i) {
        cin >> value;
        tree.insert(value);
    }
    return tree.printLeftProfile(), 0;
}
