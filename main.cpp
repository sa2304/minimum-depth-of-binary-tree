#include <cassert>
#include <iostream>
#include "binary-tree-playground/binary_tree.h"

using namespace std;

class Solution {
 public:
  int minDepth(TreeNode* root) {
    int min_depth = 0;
    if (root) {
      queue<TreeNode*> q;
      q.push(root);
      while(not q.empty()) {
        ++min_depth;
        size_t count = q.size();
        for (size_t i = 0; i < count; ++i) {
          TreeNode* node = q.front();
          q.pop();
          if (not node->left and not node->right) {
            return min_depth;
          } else {
            if (node->left) {
              q.push(node->left);
            }
            if (node->right) {
              q.push(node->right);
            }
          }
        }
      }
    }

    return min_depth;
  }
};

void TestMinDepth() {
  Solution s;
  assert(2 == s.minDepth(stringToTreeNode("[3,9,20,null,null,15,7]"s)));
  assert(5 == s.minDepth(stringToTreeNode("[2,null,3,null,4,null,5,null,6]"s)));
//  assert( == s.minDepth(stringToTreeNode("[]"s)));

}

int main() {
  TestMinDepth();
  std::cout << "Ok!" << std::endl;
  return 0;
}
