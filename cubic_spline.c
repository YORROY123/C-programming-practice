//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//#define N 10  // 設定數據點數量（可調整）
//#define M_PI 3.14159265358979323846
//
//typedef struct {
//    double a, b, c, d, x;  // 三次樣條函數的係數： S(x) = a + b(x - x_i) + c(x - x_i)^2 + d(x - x_i)^3
//} CubicSpline;
//
//void generate_data(double x[], double y[], int n, double xmin, double xmax) {
//    double step = (xmax - xmin) / (n - 1);
//    for (int i = 0; i < n; i++) {
//        x[i] = xmin + i * step;
//        y[i] = sin(x[i]) + cos(x[i]);  // 這是 y = sin(x) + cos(x)
//    }
//}
//
//// 解三對角矩陣求 c
//void solve_tridiagonal(double h[], double a[], double b[], double c[], double d[], int n) {
//    double* alpha = (double*)malloc(n * sizeof(double));
//    double* beta = (double*)malloc(n * sizeof(double));
//    if (alpha == NULL || beta == NULL) {
//        fprintf(stderr, "Memory allocation failed\n");
//        exit(1);
//    }
//
//    alpha[0] = 0;
//    beta[0] = 0;
//
//    for (int i = 1; i < n - 1; i++) {
//        double denom = (2 * (h[i - 1] + h[i]) - h[i - 1] * alpha[i - 1]);
//        alpha[i] = h[i] / denom;
//        beta[i] = (d[i] - h[i - 1] * beta[i - 1]) / denom;
//    }
//
//    c[n - 1] = 0; // c[n-1] 需要設為0，代表邊界條件
//    for (int i = n - 2; i >= 0; i--) {
//        c[i] = beta[i] - alpha[i] * c[i + 1];
//    }
//
//    free(alpha);
//    free(beta);
//}
//
//void cubic_spline(double x[], double y[], int n, CubicSpline splines[]) {
//    double* h = (double*)malloc((n - 1) * sizeof(double));
//    double* a = (double*)malloc(n * sizeof(double));
//    double* b = (double*)malloc(n * sizeof(double));
//    double* c = (double*)malloc(n * sizeof(double));
//    double* d = (double*)malloc(n * sizeof(double));
//
//    if (h == NULL || a == NULL || b == NULL || c == NULL || d == NULL) {
//        fprintf(stderr, "Memory allocation failed\n");
//        exit(1);
//    }
//
//    // 計算 h[i]
//    for (int i = 0; i < n - 1; i++) {
//        h[i] = x[i + 1] - x[i];
//    }
//
//    // 設定 a 值
//    for (int i = 0; i < n; i++) {
//        a[i] = y[i];
//    }
//
//    // 計算三對角矩陣的右側
//    for (int i = 1; i < n - 1; i++) {
//        d[i] = 3 * ((y[i + 1] - y[i]) / h[i] - (y[i] - y[i - 1]) / h[i - 1]);
//    }
//
//    // 解 c
//    solve_tridiagonal(h, a, b, c, d, n);
//
//    // 計算 b 和 d
//    for (int i = 0; i < n - 1; i++) {
//        b[i] = (y[i + 1] - y[i]) / h[i] - h[i] * (c[i + 1] + 2 * c[i]) / 3;
//        d[i] = (c[i + 1] - c[i]) / (3 * h[i]);
//    }
//
//    // 儲存 S(x) 的係數
//    for (int i = 0; i < n - 1; i++) {
//        splines[i].a = a[i];
//        splines[i].b = b[i];
//        splines[i].c = c[i];
//        splines[i].d = d[i];
//        splines[i].x = x[i];
//    }
//
//    free(h);
//    free(a);
//    free(b);
//    free(c);
//    free(d);
//}
//
//
//void print_splines(CubicSpline splines[], int n) {
//    printf("Cubic Spline Functions with Constants:\n");
//    for (int i = 0; i < n - 1; i++) {
//        printf("S%d(x) = %.5f + %.5f(x - %.5f) + %.5f(x - %.5f)^2 + %.5f(x - %.5f)^3   for %.5f <= x <= %.5f\n",
//            i, splines[i].a, splines[i].b, splines[i].x,
//            splines[i].c, splines[i].x,
//            splines[i].d, splines[i].x,
//            splines[i].x, splines[i + 1].x);
//    }
//}
//
//int main() {
//    double x[N], y[N];
//    CubicSpline splines[N - 1];
//
//    // 產生數據點
//    generate_data(x, y, N, 0, 2 * M_PI);
//
//    // 計算三次樣條插值
//    cubic_spline(x, y, N, splines);
//
//    // 印出擬合後的函數
//    print_splines(splines, N);
//
//    return 0;
//}
