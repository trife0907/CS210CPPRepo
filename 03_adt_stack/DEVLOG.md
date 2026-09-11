 ## 9/10 - 8:39pm
 
In this session, I took some time to analyze the code and
worked on implementing Stack.cpp. 

I first noticed that Stack.h had differing instructions than what
the Canvas assignment had, so I fixed that first, then I got to
implementing the methods into Stack.cpp.

For the constructor, I only initialized topIndex to -1, because it
made sense for when we increment/decrement later and the # of elements
in our stack changes.

For push(), I made sure to check if the stack was full first,
before going forth with the operation. Same thing for pop() and
peek(), only difference with those is I checked if the stack was empty.

For isEmpty(), I simply just checked whether topIndex == -1, since
after all of our operations, if we ever get back to empty, topIndex
should be correctly decremented to -1. Same idea with isFull(): Check
if topIndex == 99, since the # of elements in that case would equal 100,
which corresponds to the size of our array.

For size(), I simply return topIndex + 1.

If I were to do anything different, I would probably test these functions out
a little bit, especially the edge cases, like if the stack is full
or empty. Unfortunately, however, my laptop is soon to die, and I must
commit and push before it does so.