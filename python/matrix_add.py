def add(X,Y):
    result=[
        [X[i][j]+Y[i][j] for j in range (len(X[0]))] 
        for i in range (len(X))
    ]
    return result
    
rows=int(input("enter no. of rows:"))
cols=int(input("enter no. of cols:"))
    
matrix1=[
    [int(input(f"enter value of m1 [{i}][{j}]:"))for j in range (cols)]
    for i in range (rows)
]
matrix2=[
    [int(input(f"enter value of m2 [{i}][{j}]:")) for j in range (cols)] 
    for i in range (rows)
]
    
result_matrix = add(matrix1,matrix2)
    
print("Resultant Matrix:")    
for row in result_matrix:
    print(row)
    
