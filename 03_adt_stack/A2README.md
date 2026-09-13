# CS 210: A2 - C++ & Git Practice
In this assignment, I implemented a stack data structure in
C++ using a C-style array.

`Stack.h` contains the function declarations

`Stack.cpp` contains the function bodies

`main.cpp` has a basic walkthrough of the stack in use,
was also used for testing.

## Reflection Questions
1. After initial construction, `topIndex` holds the value `-1`.
This value makes `isEmpty()` return the right answer with
no special casing because I simply return true if `topIndex == -1`,
and false if not.


2. When someone calls `push()`, we first check if the stack is full.
If it is, we simply return and do not push anything.
All the pushing happens in one line of code: `data[++topIndex] = value;`.
This code increments `topIndex` first, then assigns the next element
of the array to this new topIndex value. If we were to do `topIndex++`,
the assignment would actually happen on the **current** topIndex value, and increment `topIndex`
after. In this order, the current top of the stack would always be overwritten
and lost, ruining our stack's integrity.


3. - `push()` - `O(1)` because it contains if-statement that only contains primitive values for either case, and then does 
two assignments (`++topIndex` and `data`). These are all primitive operations.
   - `pop()` - `O(1)` because it contains if-statement that only contains primitive values for either case, and then does
one assignment (`topIndex--`). These are all primitive operations.
   - `peek()` - `O(1)` because the if-statement only contains primitive operations for
each test case, and simply returns the current top element. Primitive operations.
   - `isEmpty()` - `O(1)` because it's just a boolean value operation.
   - `isFull()` - `O(1)` because it's just a boolean value operation.
   - `size()` - `O(1)` because it's just a boolean value operation.


4. When `push()` gets called while the stack is full, the system prints
`"Stack is full, cannot push."` and then returns `-9999`. `topIndex` does not
change. I chose this behavior because a simple error message is useful, `-9999` also acts as an error value,
and `topIndex` does not need to change if nothing is being pushed.


5. When `pop()` or `peek()` are called while the stack is full, the system prints
   `"Stack is full, cannot pop/peek."` and then returns `-9999`. `topIndex` does not
   change. I chose this behavior because a simple error message is useful, `-9999` also acts as an error value,
   and `topIndex` does not need to change if nothing is being popped.


6. If a caller need more than 100 slots, assuming we are still using C-style arrays as the backing store,
we would most likely have to implement a second array with greater storage space, like 200, then copy every value from
our current array into the new array. In terms of time complexity, this would affect `push()` whenever
we copy all values into a new array, ultimately creating an `O(n)` time complexity.


7. If this stack was built on a linked list instead of an array, one advantage is that there would be no size limit,
since linked lists can grow indefinitely.
One disadvantage is that the design of your implemention matters a lot more. For example, if the bottom
of the stack was at the head node, 
pushing, popping, and peeking would all have `O(n)` time complexity,
because they must traverse down the entire list until they reach the end. It would be smart to make the top of the
stack the head node, but this means more complex implementation.