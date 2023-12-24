/**
 * @file leaf_node header
 * @author Rafael Kallis <rk@rafaelkallis.com>
 */

#ifndef ART_LEAF_NODE_HPP
#define ART_LEAF_NODE_HPP

#include "node.hpp"

namespace art {

template <class T> class art;

template <class T> class leaf_node : public node<T> {
public:
  explicit leaf_node(T value);
  bool is_leaf() const override;

  T value_;

  void get_size(int &numNodes, int &numNonleaf, int &totalBranching,
                int &usedBranching, unsigned long &totalKeySize) override;
  int get_height() override;
};

template <class T> leaf_node<T>::leaf_node(T value) : value_(value) {}

template <class T> bool leaf_node<T>::is_leaf() const { return true; }

template <class T>
void leaf_node<T>::get_size(int &numNodes, int &numNonleaf, int &totalBranching,
                            int &usedBranching, unsigned long &totalKeySize) {
  numNodes++;
  totalKeySize += strlen(this->prefix_) + sizeof(this->prefix_len_);
}

template <class T> int leaf_node<T>::get_height() { return 1; }

} // namespace art

#endif
