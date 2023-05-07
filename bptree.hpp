#ifndef BPTREE_HPP_BPTREE2_HPP
#define BPTREE_HPP_BPTREE2_HPP
#include <fstream>
template<class Key, class T, int M = 100, int L = 100>
class BPTree {
private:

public:
    explicit BPTree(const std::string &name) {}

    ~BPTree() {};

    int size() {}

    void insert(const std::pair<Key, T> &val) {}

    sjtu::vector<T> Find(const Key &key) {}

    void remove(const std::pair<Key, T> &val) {}

    void clear(){}

    void modify(const std::pair<Key, T> &val, T new_val) {}

    std::pair<bool, T> find(const Key &key) {}
};

#endif //BPTREE_HPP_BPTREE2_HPP
