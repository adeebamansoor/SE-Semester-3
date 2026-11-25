# Doubly Linked List in C++

## Assignment requirements covered

- Defines a `Node` structure with `data`, `prev`, and `next`.
- Creates five nodes dynamically using `new`.
- Takes five integer values from the user.
- Connects all nodes using `prev` and `next`.
- Displays the list using forward traversal.
- Displays the list using backward traversal.
- Counts and displays the total number of nodes.
- Releases allocated memory using `delete`.



## Sample input

```text
10
20
30
40
50
```

## Expected output

```text
Enter value 1: 10
Enter value 2: 20
Enter value 3: 30
Enter value 4: 40
Enter value 5: 50

Forward Traversal:
10 <-> 20 <-> 30 <-> 40 <-> 50 <-> NULL

Backward Traversal:
50 <-> 40 <-> 30 <-> 20 <-> 10 <-> NULL

Total Nodes: 5
```

## Concepts

- `head`: points to the first node.
- `tail`: points to the last node.
- `prev`: points to the previous node.
- `next`: points to the next node.
- Forward traversal starts at `head` and follows `next`.
- Backward traversal starts at `tail` and follows `prev`.

## Time complexity

- Forward traversal: `O(n)`.
- Backward traversal: `O(n)`.
- Moving to a previous or next node through an available pointer: `O(1)`.

## Student details

- **Name:** Adeeba Mansoor Qureshi
- **Roll Number:** 2025-SE-12
- **Submitted to:** Mam Asma
- **Department:** Software Engineering
- **University:** University of Azad Jammu and Kashmir

