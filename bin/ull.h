#pragma region HEADER

// Ull class implements an unrolled linked list.
// It's easy to write and use a ULL.
//
// Some parameters are defined in the form of
// macro in the following, but modifying these
// parameters is INVALID. In other words, you
// SHOULD NOT modify any content of this header
// file unless you know what you are doing.

/*
 * 这个库的封装和码风其实很一般, 并没有多少值得借鉴的意义.
 * 本库由 PaperL 于 2021/11 修改,
 * 仅用于程序设计课程教学用途.
 */

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

#define BLOCK_SIZE 173
#define BLOCK_SPLIT_THRESHOLD 170
#define BLOCK_SPLIT_LEFT 85
#define BLOCK_MERGE_THRESHOLD 20

//#define PPL_DEBUG

#pragma endregion

class UllNode {
// Stores key-value data
// The data type of key is `int` and the data type
// of value is `char[64]`, but the constructor only
// accepts `std::string` as value.
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

#ifdef PPL_DEBUG
    void debugPrint();
#endif

};


#endif //ULL_H
