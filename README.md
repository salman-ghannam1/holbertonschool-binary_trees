# Binary Trees

## 📌 Description
This project focuses on understanding and implementing **Binary Trees** using the C programming language.  
It explores tree structures, node relationships, recursion, and tree traversal algorithms while adhering to the **Holberton/ALX Betty coding style**.

---

## 🌳 What is a Binary Tree?
A binary tree is a hierarchical data structure in which:
- Each node has **at most two children**
- The children are referred to as **left** and **right**
- Each node may have a pointer to its **parent**

---

## 🧠 Concepts Covered
- Binary tree structure
- Parent, child, sibling, and uncle relationships
- Recursion
- Tree traversal techniques
- Height, depth, and balance factor
- Full and perfect binary trees
- Memory management
- Clean and readable C code

---

## 🛠 Data Structure

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child
 * @right: Pointer to the right child
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
