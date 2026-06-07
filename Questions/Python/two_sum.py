x=int(input("Enter the target number: "))
y=int(input("enter the number of elements in the list: "))
a=[]
for i in range(y):
    a.append(int(input("Enter the element: ")))




# for i in range(len(a)):
#     if a[i]>x:
#         continue
#     if a[i]<x:
#         if x-a[i] in a:
#             print("The two numbers are: ",a[i],"and",x-a[i])
#             break




for i in range(len(a)):
    for j in range(i + 1, len(a)):
        if a[i] + a[j] == x:
            print(i, j)
            break
        
        
        
        
# x = int(input("Enter target: "))
# n = int(input("Enter number of elements: "))

# seen = set()

# for _ in range(n):
#     num = int(input("Enter element: "))

#     if x - num in seen:
#         print("The two numbers are:", num, "and", x - num)
#         break

#     seen.add(num)