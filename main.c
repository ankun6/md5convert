#include <stdio.h>
#include "md5.h"

int main()
{
    int i = 0;
    MD5_CTX md5;

    unsigned char encrypt[] = "kunge1998";
    unsigned char decrypt[16];

    MD5Init(&md5);
    MD5Update(&md5, encrypt, strlen((char *)encrypt));
    MD5Final(&md5, decrypt);

    // 打印原始字符串
    printf("字符串：%s", encrypt);

    // 打印16位小写MD5值
    printf("\n16位小写字母：");
    for(i = 4; i != 12; i++)    printf("%02x", decrypt[i]);

    // 打印16大写MD5值
    printf("\n16位大写字母：");
    for (i = 4; i != 12; i++)   printf("%02X", decrypt[i]);

    // 打印32位小写MD5值
    printf("\n32位小写字母：");
    for(i = 0; i != 16; i++)    printf("%02x", decrypt[i]);

    // 打印32位大写MD5值
    printf("\n32位大写字母：");
    for (i = 0; i != 16; i++)   printf("%02X", decrypt[i]);

    return 0;
}
//*/