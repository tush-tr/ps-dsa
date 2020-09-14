# you can use a regular list as a queue in Python but it's very inefficient to do so and that's because removing
#  items from the front of a list requires a big O of linear time complexity because all the subsequent items have 
#  to be shifted down in their slots when you do that. There's a much more efficient data structure called a deque
#   object that we can use in Python's collections module so I'm going to import that here
from collections import deque

# TODO: Create an empty  deque object that will function as a queue

queue = deque()

# TODO: Add some items to the queue
queue.append(1)
queue.append(2)
queue.append(3)
queue.append(4)


# TODO: print the queue contents
print(queue)


# TODO: pop an item off the front of the queue

x = queue.popleft()
print(x)
print(queue)