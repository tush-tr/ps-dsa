#using a hashtable to count individual items


# defining a set of items that we want to count

items = ["apple","pear","orange","banana","apple",
        "orange","pear","apple","banana","orange",
        "apple","kiwi","pear","apple","orange"]
#TODO: create a hashtable object to hold the items and counts
counter = dict()

#TODO: iterate over each item and increment the count for each time
for item in items:
    if(item in counter.keys()):
        counter[item] +=1
    else:
        counter[item] = 1


#Print the results
print(counter)
