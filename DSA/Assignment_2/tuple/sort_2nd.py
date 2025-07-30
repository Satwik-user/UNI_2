tup=(
    ('Satwik',19,80),
    ('Rahul',20,90),
    ('Rohan',17,91),
    ('John',17,93),
)
print("Original tuple of tuples:",tup)

sorted_tup=tuple(sorted(tup,key=lambda x:x[1]))
print("Sorted by second item:",sorted_tup)