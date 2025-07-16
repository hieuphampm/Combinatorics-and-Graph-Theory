def count_arrangements(n_balls, n_boxes):
    return n_boxes ** n_balls

n_balls = int(input("Nhập số lượng bóng: "))
n_boxes = int(input("Nhập số lượng hộp: "))
print("Tổng số cách đặt:", count_arrangements(n_balls, n_boxes))