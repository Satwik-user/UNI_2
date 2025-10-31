def towerOfHanoi(n, from_rod, to_rod, aux_rod):
    if n==0:
        return
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod)
    print(f"Move disk {n} from rod {from_rod} to rod{to_rod}")
    towerOfHanoi(n-1, to_rod)