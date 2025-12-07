import sys


def solve():
    # 1. Đọc và xử lý file CSV trước
    # Cấu trúc dict: {(species, island): [sum_length, sum_depth, count]}
    data_map = {}

    try:
        with open('penguins.csv', 'r', encoding='utf-8') as f:
            # Bỏ qua dòng tiêu đề
            header = f.readline()

            for line in f:
                row = line.strip().split(',')

                # Kiểm tra dòng có đủ số lượng cột tối thiểu không
                if len(row) < 4:
                    continue

                species = row[0].strip()
                island = row[1].strip()
                bill_length = row[2].strip()
                bill_depth = row[3].strip()

                # Kiểm tra dữ liệu bị thiếu (rỗng)
                if not bill_length or not bill_depth:
                    continue

                try:
                    l_val = float(bill_length)
                    d_val = float(bill_depth)

                    key = (species, island)

                    if key not in data_map:
                        # [tổng_độ_dài, tổng_độ_sâu, số_lượng]
                        data_map[key] = [0.0, 0.0, 0]

                    data_map[key][0] += l_val
                    data_map[key][1] += d_val
                    data_map[key][2] += 1

                except ValueError:
                    # Bỏ qua nếu dữ liệu không chuyển được sang số
                    continue

    except FileNotFoundError:
        # Trường hợp không thấy file csv
        pass

    # 2. Xử lý các bộ test từ Input
    # Sử dụng sys.stdin để đọc input chuẩn
    try:
        # Đọc số lượng bộ test
        input_line = sys.stdin.readline()
        if not input_line:
            return
        n = int(input_line.strip())

        for _ in range(n):
            line = sys.stdin.readline().strip()
            if not line:
                break

            # Tách tên loài và tên đảo từ input (cách nhau bởi khoảng trắng)
            # Lưu ý: Tên loài/đảo có thể chứa khoảng trắng không?
            # Theo ví dụ "Adelie Torgersen" thì tách theo khoảng trắng.
            parts = line.split()
            if len(parts) < 2:
                print("Invalid")
                continue

            # Giả sử tên loài là phần đầu, tên đảo là phần sau
            # Nếu tên có dấu cách thì cần logic tách khác,
            # nhưng theo format đề bài thường là 1 từ.
            req_species = parts[0]
            req_island = parts[1]

            key = (req_species, req_island)

            if key in data_map and data_map[key][2] > 0:
                total_len = data_map[key][0]
                total_dep = data_map[key][1]
                count = data_map[key][2]

                avg_len = total_len / count
                avg_dep = total_dep / count

                print(f"{avg_len:.4f} {avg_dep:.4f}")
            else:
                print("Invalid")

    except ValueError:
        pass


if __name__ == "__main__":
    solve()