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

    // ��ӡԭʼ�ַ���
    printf("�ַ�����%s", encrypt);

    // ��ӡ16λСдMD5ֵ
    printf("\n16λСд��ĸ��");
    for(i = 4; i != 12; i++)    printf("%02x", decrypt[i]);

    // ��ӡ16��дMD5ֵ
    printf("\n16λ��д��ĸ��");
    for (i = 4; i != 12; i++)   printf("%02X", decrypt[i]);

    // ��ӡ32λСдMD5ֵ
    printf("\n32λСд��ĸ��");
    for(i = 0; i != 16; i++)    printf("%02x", decrypt[i]);

    // ��ӡ32λ��дMD5ֵ
    printf("\n32λ��д��ĸ��");
    for (i = 0; i != 16; i++)   printf("%02X", decrypt[i]);

    return 0;
}
//*/