int a = 5, b = 10, c;
    int *p = &a, *q = &b;
    c = p - q;
    printf("%d", c);