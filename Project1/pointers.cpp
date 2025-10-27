int* max_of_massiv(int* p, int* q) {
    int* pmax = p;
    for (; p != q; ++p) {
        if (*p > *pmax) {
            pmax = p;
        }
    }
    return pmax;
}

bool max2(int* p, int* q, int* res) {
    if (p == q) {
        return false;
    }
    *res = *p;
    for (; p != q; ++p) {
        if (*p > *res) {
            *res = *p;
        }
    }
    return true;
}

unsigned str_of_len(const char* str){
    const char *start = str;
    while (*str != '/ 0') {
        *str++;  
    }
    return str - start;
}