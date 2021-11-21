#pragma region HEADER

// Ull class implements a unrolled linked list.
// It's easy to write and use a ULL.
//
// Some parameters are defined in the form of
// macro in the following, but modifying these
// parameters is invalid. In other words, you
// SHOULD NOT modify any content of this header
// file unless you know what you are doing.
//
// Modified by PaperL on 2021/11.
// Used for teaching in the ACM Class.

#define ULL_EXPORT
#ifdef ULL_EXPORT
#define ULL_API __declspec(dllexport)
#else
#define ULL_API __declspec(dllimport)
#endif

#ifndef ULL_H
#define ULL_H

#include <cstdio>
#include <iostream>
#include <fstream>

#include <algorithm>

#include <vector>
#include <string>
#include <cstring>

#define BLOCK_SIZE 100
#define BLOCK_SPLIT_THRESHOLD 90
#define BLOCK_SPLIT_LEFT 45
#define BLOCK_MERGE_THRESHOLD 10

//#define PaperL_Debug

#pragma endregion

class UllNode {
// Stores your data
public:
    int offset;
    char str[64];

    bool operator<(const UllNode &x) const;
    // Compares str

    UllNode();

    UllNode(const int &arg1, const std::string &arg2);

    UllNode &operator=(const UllNode &right);
};

class UllBlock {
// For ULL class internal use only
public:
    int nxt;
    int pre;
    int num;
    UllNode array[BLOCK_SIZE];

    UllBlock();

    UllBlock &operator=(const UllBlock &right);
};

class Ull {
// 'Unrolled Linked List'
// A data structure used for file data storage.
// The advantage is that it is easy to write.
// But it is inferior to 'B+ Tree' in performance.
private:
    const std::string file_name;
    std::fstream fi, fo, fi2, fo2, fip, fip2, fop, fop2;
    // File Input/Output fstream objects
    // P for private methods

    inline int nextBlock(const int &offset);

    inline void delBlock(const int &offset);

    void mergeBlock(const int &offset1, const int &offset2);

    void splitBlock(const int &offset);

public:
    Ull(const std::string &arg);

    ~Ull();

    void findNode(const std::string &key, std::vector<int> &array);
    // Returns an empty array if the node doesn't exist

    void addNode(const UllNode &node);

    int deleteNode(const UllNode &node);

#ifdef PaperL_Debug
    void debugPrint();
#endif

};


#endif //ULL_H
