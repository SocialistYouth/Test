#include <process_copy.h>

int check_pram(int arg_num, const char * src_file, int pro_num)
{
    if(agr_num < 3) {
        printf("Param error: missing required pram ... \n");
        exit(-1);
    }
    if(access(src_file,F_OK) != 0 ) {
        printf("Param error : file does not exist ... \n");
        exit(-1);
    }
    if(pro_num <= 0 || pro_num > 100) {
        printf("Param error : the number of process can't be less than 0 an d grater than 100 ... \n");
        exit(-1);
    }
    return 0;
}
