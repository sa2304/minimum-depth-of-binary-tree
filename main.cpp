#include <cassert>
#include <iostream>
#include "binary-tree-playground/binary_tree.h"

using namespace std;

class Solution {
 public:
  int minDepth(TreeNode* root) {
    // FIXME
    return 0;
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
