## 📘 Tentang Riset:

* **Judul: Implementasi Penyimpanan Non-Volatile (NVS) pada ESP32 Menggunakan Arduino IDE**
* **Tim/Divisi:** KRSTI / NAWASENA
* **Tipe Perangkat:** ESP32
* **Tanggal:** 26/05/2025 – 27/05/2025
* **Status:** ✅ *Selesai*

---

## 📚 Latar Belakang

Dalam pengembangan sistem tertanam, sering kali dibutuhkan penyimpanan data yang dapat bertahan meskipun perangkat dimatikan atau di-reset. ESP32 menyediakan fitur Non-Volatile Storage (NVS) untuk menyimpan pasangan kunci-nilai di memori flash. Implementasi NVS menggunakan Arduino IDE memiliki tantangan tersendiri, terutama dari sisi kompatibilitas dan pemahaman API. Proyek ini ditujukan untuk mempelajari dan mengimplementasikan NVS menggunakan Arduino IDE pada ESP32.

---

## 🎯 Tujuan

* Mempelajari konsep dan mekanisme kerja NVS pada ESP32.
* Mengimplementasikan penyimpanan dan pembacaan data menggunakan NVS di Arduino IDE.
* Menyediakan contoh kode dan dokumentasi agar mudah direplikasi oleh pengembang lain.

---

## 📁 Struktur Folder
Struktur direktori proyek untuk memudahkan navigasi:
```
📦 esp32_nvs               → File utama
├── 📜 nvs_esp32.ino       → Source code utama
├── 📜 tutorial.md         → Dokumen Penggunaan Code
└── 📜 README.md           → Tempat SDR
```

---

## 🔬 Metodologi


| Komponen             | Deskripsi                  | Versi/Info Tambahan                                                   |
| -------------------- | -------------------------- | --------------------------------------------------------------------- |
| **Platform**         | ESP32 DevModule            | Arduino core ESP32 v3.0.0                                             |
| **Bahasa**           | C++                        | -                                                                     |
| **IDE**              | Arduino IDE                | v2.3.0                                                                |
| **Komunikasi**       | -                          | -                                                                     |
| **Library**          | NVS library untuk Arduino  | [espressif/arduino-esp32](https://github.com/espressif/arduino-esp32) |
| **Framework**        | Arduino Framework          | Arduino core ESP32                                                    |
| **Tipe Penyimpanan** | Non-Volatile Storage (NVS) | Berbasis flash internal                                               |
| **Tipe Data Uji**    | `int`, `String`            | Tipe dasar key-value                                                  |

### 📋 Langkah-langkah:

1. Menginstal dan mengkonfigurasi Arduino IDE untuk ESP32.
2. Menginstal library NVS yang kompatibel.
3. Mengembangkan dan menguji kode untuk menyimpan dan membaca data menggunakan NVS.


---

## ⚙️ Perancangan Sistem

Sistem terdiri dari ESP32 yang menjalankan program Arduino untuk menyimpan dan membaca data dari NVS. Data disimpan dalam format *key-value*, memungkinkan akses yang efisien dan terstruktur.

![flowchart\_esp32\_nvs](https://github.com/user-attachments/assets/74e29b2c-452e-4fb3-a026-fb38fde6bd05)

---

## 🧪 Eksperimen & Evaluasi

### ✅ Pengujian Fungsi:

* Menyimpan berbagai tipe data (misalnya, `int`, `String`) ke NVS.
* Membaca kembali data untuk memastikan integritas penyimpanan.

### 📈 Evaluasi:

* Menilai keandalan penyimpanan setelah reset atau kehilangan daya.
* Menganalisis batasan ukuran dan jumlah data yang dapat disimpan.

---

## 📊 Analisis & Pembahasan

Implementasi NVS pada ESP32 menggunakan Arduino IDE terbukti dapat menyimpan data secara persisten dengan cara yang sederhana. Namun, ada batasan ukuran memori dan kompleksitas saat menyimpan data besar atau terstruktur. Fitur ini ideal digunakan untuk menyimpan konfigurasi sistem, status, atau parameter penting lainnya.

---

## ✅ Kesimpulan & Rencana Lanjut

### 📌 Kesimpulan:

* NVS pada ESP32 dapat diimplementasikan dengan sukses menggunakan Arduino IDE.
* Cocok untuk menyimpan data konfigurasi dan status sistem secara persisten.

### 🚀 Rencana Lanjut:

* Mengintegrasikan NVS ke dalam proyek robotika untuk menyimpan parameter konfigurasi.
* Mengeksplorasi NVS lebih lanjut untuk keperluan *data logging* atau histori operasi perangkat.

---

## 🕒 Riwayat Revisi

| Versi | Tanggal    | Deskripsi Perubahan    | Penulis   |
| ----- | ---------- | ---------------------- | --------- |
| 1.0   | 2025-05-26 | Draft awal dokumentasi | WenaHarle |
| 1.1   | 2025-05-27 | Pengujian              | Rifat     |

---
