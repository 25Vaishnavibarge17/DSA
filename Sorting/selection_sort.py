lst = []
size = int(input("\nEnter size of the list: \t"))
for i in range(size):
    elements = eval((input("Enter the element: \t")))
    lst.append(elements)
for i in range(len(lst)):
        minindx = i
        for j in range(i+1,len(lst)):
            if lst[j]<lst[minindx]:
                minindx=j
        (lst[i],lst[minindx])=(lst[minindx],lst[i])
print('The array after sorting in Ascending Order by selection sort is:')
print(lst)
