# Bubble Sort Algorithm

def bubblesort(dataset):
    #TODO: start with an array length and decrement each line
    for i in range(len(dataset)-1,0,-1):
        for j in range(i):
            if dataset[j]  > dataset[j+1]:
                temp = dataset[j] # Swapping the values
                dataset[j] = dataset[j+1]
                dataset[j+1] = dataset[j]
            
        print("Current state: ",dataset)

def main():
    list1 = [6,20,8,19,56,23,87,41,49,53]
    bubblesort(list1)
    print("Result: = ",list1)
if __name__ == "__main__":
    main()
