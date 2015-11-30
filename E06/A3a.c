int /* missing return type */ palindrom1(const char feld[], int l /*, int korrekt*/) {
    int i;
    int korrekt = 1;
    i = 0; /* array indices begin with 0 */;
    l = l - 1;
    while (i < l && korrekt) {
        korrekt = feld[i] == feld[l];
        i = i + 1;
        l = l - 1;
    }
    return korrekt;
}

int palindrome(const char *word, int length) {
    return palindrom1(word, length);
}
