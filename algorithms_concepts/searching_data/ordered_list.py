# ?Searching for an item in an ordered list
# This technique uses a binary search



items = [6,8,19,20,23,41,49,53,56,87]


def binarysearch(item,itemlist):
    #get the list size
    listsize = len(itemlist) - 1
    # Start at the two ends of the list
    loweridx = 0
    upperidx = listsize


    while loweridx <= upperidx:
        pass
        #TODO: calculate the middle point
        midpt = (loweridx + upperidx) // 2



        #TODO: if item is found, return the index
        if itemlist[midpt] == item:
            return midpt



        #TODO: otherwise get the next midpoint
        if item > itemlist[midpt]:
            loweridx = midpt + 1
        else:
            upperidx = midpt -1

    if loweridx > upperidx:
        return None

print(binarysearch(23,items))
print(binarysearch(87,items))
print(binarysearch(250,items))
    
    