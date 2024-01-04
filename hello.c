#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/rsa.h>

int main(void)
{
    // สร้างคีย์ RSA-key แบบ Lattice-based cryptography ขนาด 4096-bits
    RSA * key = RSA_generate_key(4096, RSA_F4, NULL, NULL);

    // แปลงข้อความ "สวัสดี ชาวโลก" เป็นข้อมูลไบต์
    int len = strlen("สวัสดี ชาวโลก");
    unsigned char *plaintext = malloc(len * sizeof(unsigned char));
    strncpy((char *)plaintext, "สวัสดี ชาวโลก", len);

    // เข้ารหัสข้อมูลไบต์ด้วยคีย์ RSA-key
    unsigned char *ciphertext = malloc(RSA_size(key));
    int ciphertext_len = RSA_encrypt(key, plaintext, len, ciphertext);

    // แสดงข้อความที่เข้ารหัส
    printf("Ciphertext: ");
    for (int i = 0; i < ciphertext_len; i++) {
        printf("%02x ", ciphertext[i]);
    }
    printf("\n");

    // ถอดรหัสข้อความที่เข้ารหัสด้วยคีย์ RSA-key
    unsigned char *plaintext2 = malloc(RSA_size(key));
    int plaintext2_len = RSA_decrypt(key, ciphertext, ciphertext_len, plaintext2);

    // แสดงข้อความที่ถอดรหัส
    printf("Plaintext: %s\n", plaintext2);

    // ลบข้อมูล
    free(plaintext);
    free(ciphertext);
    free(plaintext2);

    return 0;
}
