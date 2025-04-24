#include <stdio.h>
#include <string.h>

// Chuong trình con 1.1: So sánh và thay th? các ký t? khác nhau
void so_sanh_va_thay_the(char s1[], char s2[]) {
    int len1 = strlen(s1);  // L?y d? dài c?a xâu s1
    int len2 = strlen(s2);  // L?y d? dài c?a xâu s2
    int max_len = (len1 > len2) ? len1 : len2;  // L?y d? dài l?n nh?t gi?a s1 và s2
    int so_ky_tu_khac = 0;  // Bi?n d?m s? ký t? khác nhau

    // In ra hai xâu ban d?u
    printf("Xâu 1: %s\n", s1);
    printf("Xâu 2: %s\n", s2);

    // So sánh t?ng ký t? trong hai xâu
    for (int i = 0; i < max_len; i++) {
        // N?u c? hai xâu d?u có ký t? t?i v? trí i và chúng khác nhau
        if (i < len1 && i < len2 && s1[i] != s2[i]) {
            s1[i] = '#';  // Thay ký t? khác nhau trong xâu s1 b?ng '#'
            s2[i] = '#';  // Thay ký t? khác nhau trong xâu s2 b?ng '#'
            so_ky_tu_khac++;  // Tang s? ký t? khác nhau
        }
    }

    // In ra các xâu sau khi thay d?i
    printf("Xâu 1 sau thay d?i: %s\n", s1);
    printf("Xâu 2 sau thay d?i: %s\n", s2);
    // In ra s? lu?ng ký t? khác nhau
    printf("S? ký t? khác nhau: %d\n", so_ky_tu_khac);
}

int main() {
    char s1[100], s2[100];  // Khai báo hai xâu ký t? s1 và s2

    // Nh?p hai xâu t? ngu?i dùng
    printf("Nh?p xâu 1: ");
    scanf("%s", s1);
    printf("Nh?p xâu 2: ");
    scanf("%s", s2);

    // G?i chuong trình con d? so sánh và thay th? ký t?
    so_sanh_va_thay_the(s1, s2);

    return 0;  // K?t thúc chuong trình
}

