def towerOfHanoi(n, from_rod, to_rod, aux_rod):
    if n==0:
        return
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod)
    