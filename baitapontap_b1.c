#include <stdio.h>
#include <string.h>

// Chuong tr�nh con 1.1: So s�nh v� thay th? c�c k� t? kh�c nhau
void so_sanh_va_thay_the(char s1[], char s2[]) {
    int len1 = strlen(s1);  // L?y d? d�i c?a x�u s1
    int len2 = strlen(s2);  // L?y d? d�i c?a x�u s2
    int max_len = (len1 > len2) ? len1 : len2;  // L?y d? d�i l?n nh?t gi?a s1 v� s2
    int so_ky_tu_khac = 0;  // Bi?n d?m s? k� t? kh�c nhau

    // In ra hai x�u ban d?u
    printf("X�u 1: %s\n", s1);
    printf("X�u 2: %s\n", s2);

    // So s�nh t?ng k� t? trong hai x�u
    for (int i = 0; i < max_len; i++) {
        // N?u c? hai x�u d?u c� k� t? t?i v? tr� i v� ch�ng kh�c nhau
        if (i < len1 && i < len2 && s1[i] != s2[i]) {
            s1[i] = '#';  // Thay k� t? kh�c nhau trong x�u s1 b?ng '#'
            s2[i] = '#';  // Thay k� t? kh�c nhau trong x�u s2 b?ng '#'
            so_ky_tu_khac++;  // Tang s? k� t? kh�c nhau
        }
    }

    // In ra c�c x�u sau khi thay d?i
    printf("X�u 1 sau thay d?i: %s\n", s1);
    printf("X�u 2 sau thay d?i: %s\n", s2);
    // In ra s? lu?ng k� t? kh�c nhau
    printf("S? k� t? kh�c nhau: %d\n", so_ky_tu_khac);
}

int main() {
    char s1[100], s2[100];  // Khai b�o hai x�u k� t? s1 v� s2

    // Nh?p hai x�u t? ngu?i d�ng
    printf("Nh?p x�u 1: ");
    scanf("%s", s1);
    printf("Nh?p x�u 2: ");
    scanf("%s", s2);

    // G?i chuong tr�nh con d? so s�nh v� thay th? k� t?
    so_sanh_va_thay_the(s1, s2);

    return 0;  // K?t th�c chuong tr�nh
}

