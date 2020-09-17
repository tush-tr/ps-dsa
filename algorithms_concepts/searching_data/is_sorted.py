# Determine if a list is sorted or not
items1 = [6,8,19,20,23,41,49,53,56,87]
items2 = [6,20,8,234,34,5,5,32,5,56,5]

def is_sorted(itemlist):
    #TODO: using the brute force method
    # for i in range(0,len(itemlist)-1):
    #     if itemlist[i] > itemlist[i+1]:
    #         return False

    return all(itemlist[i] <= itemlist[i+1] for i in range(len(itemlist)-1))


    # return True
print(is_sorted(items1))
print(is_sorted(items2))
