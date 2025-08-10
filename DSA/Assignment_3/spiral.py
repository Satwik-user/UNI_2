m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
arr=[[0 for _ in range(m)] for _ in range(n)]

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
        arr[i][col_end]=num
    col_end-=1

    for i in range(col_end-1,col_start-1,-1):
        num+=1
        arr[row_end][i]=num
    cow_end-=1

    for i in range(row_end-1,row_start-1,-1):
        