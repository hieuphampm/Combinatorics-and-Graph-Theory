import random

def simulate_probability(n_balls, n_boxes, simulations=100000):
    count_at_least_one_empty = 0

    for _ in range(simulations):
        boxes = [0] * n_boxes
        for _ in range(n_balls):
            box_index = random.randint(0, n_boxes - 1)
            boxes[box_index] += 1
        if 0 in boxes:
            count_at_least_one_empty += 1

    probability = count_at_least_one_empty / simulations
    return probability

n_balls = int(input("Nhập số bóng: "))
n_boxes = int(input("Nhập số hộp: "))

print("Xác suất ít nhất một hộp trống:", simulate_probability(n_balls, n_boxes))