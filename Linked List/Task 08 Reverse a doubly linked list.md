## Reverse a doubly linked list

[Judge System](https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem)

This challenge is part of a tutorial track by [MyCodeSchool](https://www.youtube.com/user/mycodeschool)

You’re given the pointer to the head node of a doubly linked list. Reverse the order of the nodes in the list. The head node might be NULL to indicate that the list is empty. Change the *next* and *prev* pointers of all the nodes so that the direction of the list is reversed. Return a reference to the head node of the reversed list.

#### Function Description

Complete the reverse function in the editor below. It should return a reference to the head of your reversed list.

reverse has the following parameter(s):

- head: a reference to the head of a DoublyLinkedList

#### Input Format

The first line contains an integer <img src="https://latex.codecogs.com/svg.latex?\Large&space;t">, the number of test cases.

Each test case is of the following format:

- The first line contains an integer <img src="https://latex.codecogs.com/svg.latex?\Large&space;n">, the number of elements in the linked list.
- The next <img src="https://latex.codecogs.com/svg.latex?\Large&space;n"> lines contain an integer each denoting an element of the linked list.

#### Constraints
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{t}\le{10}">
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;0\le{n}\le{1000}">
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;0\le{DoublyLinkedListNode.data}\le{1000}">

#### Output Format

Return a reference to the head of your reversed list. The provided code will print the reverse array as a one line of space-separated integers for each test case.

#### Sample Input
```
1
4
1
2
3
4
```
#### Sample Output
```
4 3 2 1 
```
#### Explanation

The initial doubly linked list is: <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\leftrightarrow{2}\leftrightarrow{3}\leftrightarrow{4}\rightarrow{NULL}"><br>
The reversed doubly linked list is: <img src="https://latex.codecogs.com/svg.latex?\Large&space;4\leftrightarrow{3}\leftrightarrow{2}\leftrightarrow{1}\rightarrow{NULL}">

