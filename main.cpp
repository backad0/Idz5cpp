#include <iostream>
#include "cmake-build-debug/_deps/googletest-src/googletest/include/gtest/gtest.h"
#include "BinaryTree.cpp"

TEST(Tree, Test1){
    vector<bool> arr1{};
    BinaryTree binaryTree1(2);
    try {
        arr1.push_back(false);
        binaryTree1.insert(4, arr1);
        arr1.push_back(false);
        binaryTree1.insert(8, arr1);
        arr1.push_back(true);
        binaryTree1.insert(93, arr1);
        arr1.pop_back();
        arr1.push_back(true);
        arr1.push_back(true);
        arr1.push_back(true);
        arr1.push_back(true);
        binaryTree1.insert(13, arr1);
    }
    catch (exception & ex) {
        cout << "Elem adding error" << endl;
    }

    cout << "tree1:" << endl;
    std::cout << binaryTree1;

    BinaryTree testBinT = binaryTree1;
    cout << "tree2" << endl;
    std::cout << testBinT;

    cout << endl;
    cout << "deleteLeaves:" << endl;
    binaryTree1.deleteLeaves();
    std::cout << binaryTree1;

    cout << endl;
    cout << "tree3" << endl;
    BinaryTree bin(binaryTree1);
    cout << bin << endl;



    cout << endl;
    cout << "delete tree1:" << endl;
    std::cout << binaryTree1;
    binaryTree1.clear();
    std::cout << binaryTree1 << endl;


    vector<bool> arr2{};
    BinaryTree binaryTree2(42);

    try {
        arr2.push_back(true);
        binaryTree2.insert(16, arr2);
        arr2.pop_back();
        arr2.push_back(false);
        binaryTree2.insert(2, arr2);
        arr2.push_back(false);
        binaryTree2.insert(5, arr2);
    }
    catch (exception & ex) {
        cout << "Elem adding error" << endl;
    }
    cout <<endl<< "binaryTree2:"<< endl << binaryTree2 << endl;
    //count of even
    EXPECT_EQ(3,binaryTree2.countOfEven());
    //average
    EXPECT_EQ(16.25,binaryTree2.average());
    //is all positive
    EXPECT_TRUE(binaryTree2.allPositive());

    cout <<endl<<  "add -1" << endl;
    binaryTree2.insert(-1, arr2);
    //is all positive
    EXPECT_FALSE(binaryTree2.allPositive());

    cout << endl;
    vector<bool> arr4{};
    BinaryTree binaryTree5;

    try {
        binaryTree5.insert(1, arr4);
        arr4.push_back(false);
        binaryTree5.insert(2, arr4);
        arr4.push_back(false);
        binaryTree5.insert(-1, arr4);
        arr4.pop_back();
        arr4.push_back(true);
        binaryTree5.insert(22, arr4);
        arr4.push_back(true);
        binaryTree5.insert(33, arr4);
    }
    catch (exception & ex) {
        cout << "Elem adding error" << endl;
    }

    cout << "tree5:" << endl << binaryTree5 << endl;

    cout << endl;
    arr4.clear();

    try {
        arr4.push_back(true);
        binaryTree5.insert(11, arr4);
        arr4.push_back(true);
        binaryTree5.insert(20, arr4);
        arr4.push_back(false);
        binaryTree5.insert(99, arr4);
    }
    catch (exception & ex) {
        cout << "Elem adding error" << endl;
    }

    cout<<"tree5 with new stick"<<endl << binaryTree5 << endl;

    arr4.clear();

    try {
        arr4.push_back(true);
        arr4.push_back(true);
        arr4.push_back(false);
    }
    catch (exception & ex) {
        cout << "Elem adding error" << endl;
    }

    //search fo elem
    vector<bool> bArr = binaryTree5.searchElem(99);
    EXPECT_TRUE(arr4 == bArr);
}