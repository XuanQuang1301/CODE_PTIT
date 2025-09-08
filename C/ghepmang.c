#include <stdio.h>

// Hàm để ghép các phần tử của hai dãy và in ra kết quả
void mergeArrays(int M, int N, char order, int a[], int b[]) {
    int result[M + N]; // Dãy kết quả có thể có tối đa M + N phần tử
    int i = 0, j = 0, k = 0;

    // Lặp qua các phần tử của hai dãy và ghép vào dãy kết quả theo yêu cầu
    while (i < M && j < N) {
        if (order == 'T') {
            if (a[i] < b[j])
                result[k++] = a[i++];
            else
                result[k++] = b[j++];
        } else if (order == 'G') {
            if (a[i] > b[j])
                result[k++] = a[i++];
            else
                result[k++] = b[j++];
        } else if (order == 'F') {
            result[k++] = a[i++];
        } else if (order == 'A') {
            result[k++] = b[j++];
        }
    }

    // Nếu còn phần tử chưa được ghép vào dãy kết quả, ghép vào
    while (i < M)
        result[k++] = a[i++];
    while (j < N)
        result[k++] = b[j++];

    // In ra dãy kết quả
    for (int x = 0; x < k; x++)
        printf("%d ", result[x]);
    printf("\n");
}

int main() {
    int T; // Số lượng testcase
    scanf("%d", &T);

    while (T--) {
        int M, N; // Độ dài của hai dãy
        char order; // Ký tự biểu thị yêu cầu sắp xếp
        scanf("%d %d %c", &M, &N, &order);

        int a[M], b[N];

        for (int i = 0; i < M; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < N; i++)
            scanf("%d", &b[i]);

        // Gọi hàm ghép dãy và in kết quả
        mergeArrays(M, N, order, a, b);
    }

    return 0;
}
