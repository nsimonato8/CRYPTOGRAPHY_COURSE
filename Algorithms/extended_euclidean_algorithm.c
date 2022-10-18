void extended_gcd(a, b)
{
    int old_r = a, r = n;
    int old_s = 1, s = 0;
    int old_t = 0, t = 1;

    while (!r){
        q = floor(old_r / r);

        old_r = r;
        r = old_r − q * r;

        old_s = s;
        s = old_s − q * s;

        old_t = t;
        t = old_t − q * t;
    }

    printf("Bézout coefficients: %d, %d", old_s, old_t);
    printf("greatest common divisor: %d", old_r);
    printf("quotients by the gcd: %d, %d", t, s);
}
