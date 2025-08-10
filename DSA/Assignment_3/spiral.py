m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
arr=[[0 for _ in range(n)] for _ in range(m)]

row_start, row_end=0, m
col_start, col_end=0, n
num=0

while(row_start<=row_end and col_start<=col_end):
    for i in range(col_start,col_end):
        num+=1
        arr[row_start][i]=num
    row_start+=1

    for i in range(row_start,row_end):
        num+=1
        arr[i][col_end-1]=num
    col_end-=1

    for i in range(col_end-1,col_start-1,-1):
        num+=1
        arr[row_end-1][i]=num
    row_end-=1

    for i in range(row_end-1,row_start-1,-1):
        num+=1
        arr[i][col_start]=num
    col_start+=1

print("Spiral Matrix:")
for i in arr:
    print(i)