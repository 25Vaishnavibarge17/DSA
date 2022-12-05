lst = []
size = int(input("\nEnter size of the list: \t"))
for i in range(size):
    elements = eval((input("Enter the element: \t")))
    lst.append(elements)
for i in range(1, len(lst)):
        key = lst[i]
        j = i - 1
        while j >= 0 and key < lst[j]:
            lst[j + 1] = lst[j]
            j -= 1
        lst[j + 1] = key
print('\nThe sorted list: \t', lst)
print('\n')
