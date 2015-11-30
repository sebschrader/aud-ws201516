int palindrom2(const char *word, const int length) {
    if (length <= 1) {
        return 1;
    }
    return word[0] == word[length - 1] && palindrom2(word + 1, length - 2);
}

int palindrome(const char *word, const int length) {
    return palindrom2(word, length);
}
