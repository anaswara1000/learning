numbers=[int(x) for x in input("enter no.s seperated by spaces:").split()]

largest=numbers[0]
second_largest=numbers[0]
smallest=numbers[0]

for num in numbers:
    if num>largest:
        second_largest=largest
        largest=num
    elif num>second_largest and num!=largest:
        second_largest=num
    else:
        smallest=num
        
print("largest number:",largest)
print("second_largest number:",second_largest)
print("smallest number:",smallest)
