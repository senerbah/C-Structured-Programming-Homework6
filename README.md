# C-Structured-Programming-Homework6  
**Karakter Sayımı (Character Count) Uygulaması**

Bu proje, Paul Deitel ve Harvey Deitel’in *C How to Program (7th Edition)* kitabındaki **11.16 – Outputting Character Count to a File** alıştırmasına uygun olarak geliştirilmiş bir C programını içerir. Program, bir metin dosyasını karakter karakter okuyarak her harfin (a–z) kaç kere geçtiğini sayar ve sonuçları `count.dat` adlı bir çıktı dosyasına yazar.

---

## 📚 Ders ve Ödev Bilgileri

- **Ders Adı:** Veri Yapıları ve Algoritmalar  
- **Ders Kodu:** 590616 - 2526G  
- **Ödev No:** Ödev 6  
- **Teslim Tarihi:** 22/11/2025  

---

## 👩‍🎓 Öğrenci Bilgileri

- **Ad Soyad:** Bahtınur Şener  
- **Öğrenci No:** 91250000022  

---

## 👨‍🏫 Öğretim Elemanları

- **Ders Sorumlusu:** Prof. Dr. Geylani KARDAŞ  
- **Araştırma Görevlisi:** Araş. Gör. Cemil Aybars URAL  
- **Üniversite:** Ege Üniversitesi  
- **Enstitü:** Uluslararası Bilgisayar Enstitüsü  

---

## 🧩 Problem Tanımı

Verilen bir metin dosyasını:

- `fgetc` fonksiyonunu kullanarak **karakter karakter** okumak,  
- Her bir **harfin (a–z)** dosyada kaç kere geçtiğini saymak,  
- Büyük/küçük harf farkı gözetmemek (örneğin `A` ve `a` aynı kabul edilir),  
- Sonuçları `count.dat` adlı bir dosyaya aşağıdaki formatta yazmak amaçlanmaktadır:

```text
Character   Count
a           12
b           18
c           9
...
z           0
