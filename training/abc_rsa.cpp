// Punti: 100.0
long long esp_vel_mod(long long c, long long d, long long N) {
    long long ris = 1;
    c = c % N;
    while (d > 0) {
        if (d % 2 == 1) {
            ris = (ris * c) % N;
        }
        d = d >> 1;
        c = (c * c) % N;
    }
    return ris;
}
// Declaring functions
void decifra(int N, int d, int L, int *messaggio, char *plaintext) {
  plaintext[L] = '\0';
  for (int i = 0; i < L; i++) {
    plaintext[i] = static_cast<char>(esp_vel_mod(messaggio[i], d, N));
  }
}