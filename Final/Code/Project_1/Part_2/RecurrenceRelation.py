def recurrence(n):
    a = [0] * (n + 1)
    a[1] = 1
    for i in range(2, n + 1):
        a[i] = a[i - 1] + 2 * i - 1
    return a[n]

n = int(input("Nhập n: "))
print(f"a_{n} theo truy hồi =", recurrence(n))
print(f"Giá trị kỳ vọng (n^2) =", n ** 2)