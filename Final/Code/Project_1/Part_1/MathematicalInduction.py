def sum_formula(n):
    return n * (n + 1) // 2

def sum_loop(n):
    total = 0
    for i in range(1, n + 1):
        total += i
    return total

n = int(input("Nhập n: "))
print("Tổng 1 + 2 + ... +", n, "=", sum_formula(n))
print("Tổng lặp =", sum_loop(n))