def count_coin_combinations(total):
    count = 0
    # c: số đồng xu mệnh giá 5
    for c in range(total // 5 + 1):
        remain_after_5 = total - 5 * c
        # b: số đồng xu mệnh giá 2
        for b in range(remain_after_5 // 2 + 1):
            a = remain_after_5 - 2 * b
            # a phải là số nguyên không âm
            if a >= 0:
                count += 1
                print(f"(a={a}, b={b}, c={c})")
    return count

total = int(input("Nhập n: "))
result = count_coin_combinations(total)
print(f"Tổng số cách chọn đồng xu để được {total}: {result}")
