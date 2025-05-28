**Judul Proyek:**
Implementasi Penyimpanan Non-Volatile (NVS) pada ESP32 Menggunakan Arduino IDE

**Tim:**
Divisi KRSTI – Workshop Robotika 

**Deskripsi Singkat:**
Proyek ini bertujuan untuk mengeksplorasi dan mengimplementasikan penyimpanan data secara non-volatile pada mikrokontroler ESP32 menggunakan Arduino IDE. Dengan memanfaatkan NVS, data penting dapat disimpan secara permanen di memori flash, memungkinkan perangkat untuk mempertahankan informasi meskipun terjadi pemadaman daya atau reset sistem.

---

## 1. 📚 Latar Belakang

Dalam pengembangan sistem tertanam, seringkali diperlukan penyimpanan data yang dapat bertahan meskipun perangkat dimatikan atau di-reset. ESP32 menyediakan fitur Non-Volatile Storage (NVS) yang memungkinkan penyimpanan pasangan kunci-nilai di memori flash. Namun, implementasi NVS pada Arduino IDE memiliki tantangan tersendiri, terutama dalam hal kompatibilitas dan pemahaman API. Proyek ini bertujuan untuk memahami dan mengimplementasikan NVS pada ESP32 menggunakan Arduino IDE.

---

## 2. 🎯 Tujuan

* Mempelajari konsep dan mekanisme kerja NVS pada ESP32.
* Mengimplementasikan penyimpanan dan pembacaan data menggunakan NVS di Arduino IDE.
* Menyediakan contoh kode dan dokumentasi untuk mempermudah replikasi oleh pengembang lain.

---

## 3. 🔬 Metodologi

* **Perangkat Keras:**

  * ESP32 Dev Board

* **Perangkat Lunak:**

  * Arduino IDE dengan dukungan board ESP32
  * Library NVS untuk Arduino([GitHub][1])

* **Langkah-langkah:**

  1. Menginstal dan mengkonfigurasi Arduino IDE untuk ESP32.
  2. Menginstal library NVS yang kompatibel dengan Arduino.
  3. Mengembangkan dan menguji kode untuk menyimpan dan membaca data menggunakan NVS.

---

## 4. ⚙️ Perancangan Sistem

Sistem terdiri dari ESP32 yang menjalankan program Arduino untuk menyimpan dan membaca data dari NVS. Data disimpan dalam format pasangan kunci-nilai, memungkinkan akses yang efisien dan terstruktur.

---

## 5. 🧪 Eksperimen & Evaluasi

* **Pengujian Fungsi:**

  * Menyimpan berbagai tipe data (misalnya, integer, string) ke NVS.
  * Membaca kembali data yang disimpan untuk memastikan integritas.

* **Evaluasi:**

  * Menilai keandalan penyimpanan data setelah reset atau pemadaman daya.
  * Mengamati batasan ukuran dan jumlah data yang dapat disimpan.

---

## 6. 📊 Analisis & Pembahasan

Implementasi NVS pada ESP32 menggunakan Arduino IDE memungkinkan penyimpanan data yang persisten dengan cara yang relatif sederhana. Namun, terdapat beberapa pertimbangan, seperti batasan ukuran memori dan kompleksitas dalam mengelola data yang lebih besar atau kompleks. Penggunaan NVS cocok untuk menyimpan konfigurasi atau data kecil yang perlu dipertahankan antar sesi.

---

## 7. ✅ Kesimpulan & Rencana Lanjut

* **Kesimpulan:**

  * NVS pada ESP32 dapat diimplementasikan dengan sukses menggunakan Arduino IDE, memungkinkan penyimpanan data yang persisten.
  * Fitur ini sangat berguna untuk aplikasi yang memerlukan penyimpanan konfigurasi atau status sistem.

* **Rencana Lanjut:**

  * Mengintegrasikan NVS dalam proyek robotika untuk menyimpan parameter konfigurasi.
  * Mengeksplorasi penggunaan NVS untuk menyimpan data log atau histori operasi perangkat.

---

## 8. 🕒 Riwayat Revisi

| Versi | Tanggal    | Deskripsi Perubahan    | Penulis               |
| ----- | ---------- | ---------------------- | --------------------- |
| 1.0   | 2025-05-28 | Draft awal dokumentasi | WenaHarle |
