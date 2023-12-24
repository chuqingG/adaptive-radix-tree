# Adaptive Radix Tree

The goal of this project is to study and implement the Adaptive Radix Tree (ART), 
as proposed by Leis et al. ART, which is a trie based data structure, achieves 
its performance, and space efficiency, by compressing the tree both vertically, 
i.e., if a node has no siblings it is merged with its parent, and horizontally, 
i.e., uses an array which grows as the number of children increases. Vertical 
compression reduces the tree height and horizontal compression decreases a node’s size.

## Usage

```cpp
#include <art.hpp>

using namespace art;

int main() {
  art<std::shared_ptr<MyResource>> m;

  // set k
  m.set("k", std::make_shared(new MyResource()));

  // get k
  std::shared_ptr<MyResource> ptr = m.get("k");

  // delete k
  m.del("k");

  return 0;
}
```


## References

* [The Adaptive Radix Tree: ARTful Indexing for Main-Memory Databases](http://www-db.in.tum.de/~leis/papers/ART.pdf)
* [The Adaptive Radix Tree](http://rafaelkallis.com/static/media/the_adaptive_radix_tree_rafael_kallis.23779b20.pdf)
