char kthCharacter(int k) {
    const int MAX = 100000;
    char* word = (char*)malloc(MAX);
    word[0] = 'a';
    word[1] = '\0';

    while ((int)strlen(word) < k) {
        int len = strlen(word);
        for (int i = 0; i < len; i++) {
            word[len + i] = (word[i] == 'z') ? 'a' : word[i] + 1;
        }

        word[2 * len] = '\0';
    }

    char res = word[k - 1];
    free(word);
    return res;
}