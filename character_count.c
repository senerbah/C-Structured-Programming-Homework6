#include <stdio.h>
#include <ctype.h>   // isalpha(), tolower() için

int main() {

    FILE *inputFile;     // Okunacak dosya
    FILE *outputFile;    // Yazılacak dosya (count.dat)
    
    char fileName[100];  // Kullanıcıdan alınacak dosya adı
    int counts[26] = {0}; // a-z arasındaki karakter sayıları
    int ch;               // fgetc tarafından okunacak karakter

    // 1) Kullanıcıdan giriş dosyası adını al
    printf("Okunacak dosyanın adını giriniz: ");
    scanf("%s", fileName);

    // 2) Dosyayı okumak için aç
    inputFile = fopen(fileName, "r");
    if (inputFile == NULL) {
        printf("HATA: Dosya açılamadı! Dosya adını kontrol edin.\n");
        return 1;
    }

    // 3) Dosyayı karakter karakter oku
    // fgetc() her seferinde bir karakter döndürür
    while ((ch = fgetc(inputFile)) != EOF) {

        // Eğer okunan karakter bir harf ise
        if (isalpha(ch)) {

            // Büyük harfleri küçült (A=a, B=b ...)
            ch = tolower(ch);

            // 'a' harfi 0. indexe karşılık gelir
            // Örn: ch = 'a' → counts[0], ch = 'b' → counts[1]
            counts[ch - 'a']++;
        }
    }

    // Okuma işlemi bittiğinde dosyayı kapat
    fclose(inputFile);

    // 4) Sonuçlar için count.dat dosyasını aç
    outputFile = fopen("count.dat", "w");
    if (outputFile == NULL) {
        printf("HATA: count.dat dosyası oluşturulamadı.\n");
        return 1;
    }

    // 5) Sonuçları dosyaya yaz
    fprintf(outputFile, "Character   Count\n");

    for (int i = 0; i < 26; i++) {
        fprintf(outputFile, "%c           %d\n", 'a' + i, counts[i]);
    }

    // Yazma işlemi bittiğinde dosyayı kapat
    fclose(outputFile);

    printf("İşlem tamamlandı. Sonuçlar count.dat dosyasına yazıldı.\n");

    return 0;
}
