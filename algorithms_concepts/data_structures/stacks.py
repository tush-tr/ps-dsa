# in the case of Python, we can just use a regular list to represent a stack and a queue.

# Try out the python stack functions

# I'm going to start by just declaring an empty list that will be our stack, so I'm 
# going to call that stack and I'll just make an empty list.

# TODO: Create a new empty stack

stack = []

# TODO: push items onto the stack
# Now I'll add some items to the stack using append function
# in some of the languages we can use push function but in python we use list functions
stack.append(1)
stack.append(2)
stack.append(3)
stack.append(4)
# So i pushed 4 items to the stack

# TODO: print the stack contents

print(stack)


# TODO: pop an item off the stack

# for removing an item from the stack we use pop function

x = stack.pop()
print(x)   # this will output 4
print(stack)  # this will output removes last item from stack [1, 2, 3]



