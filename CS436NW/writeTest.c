�&�Lߋ�	�[�!M^̟��Ahye��{w��p�";N��,�"�����l;�j�bGF�i���(��x�T�JV��A�5T���&�U��Q�Jo[�� �=?2r���a��!`Z?�Eѭ��N)�J'�kE4���W���!���U�^� N!�!�2�%7o[Å�&��G�D�sN^�P�u��x���v�ۣ��X�8g	K/i6�w�?u�,�ia
�����fs!������`N� P~�K�ANwH�N����XK�&��K\�sRخ�)��O���x��'�t�J�OEy˛r�����F[�H�}��L�8�	p���*=�~	`�S��Eq�a�id}�={ݡ�<������.��;YB��[�AU�\J�̅<�Aίv��%�=7�q4�q�O2�8d����+���j�A�.2{̹���1�~��
��ք��V��(铊	��]^��u�loT4/+�R���d�g[}��3({$4�_g"T��_}����Zi+7�+= (sum >> 16);
  cksum = ~sum;

  return cksum;
}

int main(int argc, char *argv[])
{
  unsigned short cksum; 
  unsigned char buf[512];
  int fd;
  int i;

  if(argc != 2){
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return EXIT_FAILURE;     
  }

  fd = open(argv[1], O_CREAT | O_WRONLY, 0644);
  if(fd == -1){
      fprintf(stderr, "ERROR: Unable to create file '%s', errno =%d(%s)\n",
          argv[1], errno, strerror(errno));
      return EXIT_FAILURE;
  }
 srand(2);
    for (i = 0; i < 512; i++) {
        buf[i] = (unsigned char)(rand() % 255);
    }

    cksum = checksum((unsigned short *)&buf[0], 510);
    printf("cksum = 0x%hx \n", cksum);

    memcpy((void *)&buf[510], (void *)&cksum, 2);
       
    if (write(fd, buf, 512) != 512) {
        fprintf(stderr, "Error: unable to write to buffer, errno = %d (%s) \n",
    errno, strerror(errno));
    } 

    if (close(fd) != 0) {
        fprintf(stderr, "Error: unable to close file, errno = %d (%s) \n",
    errno, strerror(errno));
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
