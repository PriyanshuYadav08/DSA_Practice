x=int(input("Enter the number of elements in the list - "))
list1=[]
for i in range(x):
    element=int(input("Enter the element - "))
    list1.append(element)

def contains_duplicate(list1):
    seen = set()
    for i in range(len(list1)):
        if list1[i] in seen:
            return True
        seen.add(list1[i])
    return False

print(contains_duplicate(list1))