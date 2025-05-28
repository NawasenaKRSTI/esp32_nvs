# 📦 ESP32 NVS Multi-Int Storage

Program ini menggunakan **NVS (Non-Volatile Storage)** pada **ESP32** untuk menyimpan, membaca, dan menghapus data integer (`int`) di delapan slot berbeda (`index 0-7`) menggunakan library `Preferences`.

## 📚 Library Digunakan

```cpp
#include <Preferences.h>
```

Library `Preferences` digunakan untuk menyimpan data ke memori flash ESP32 secara permanen, bahkan saat device dimatikan atau reset.

---

## 🧠 Penjelasan Fungsi

### `writeToNVSInt(uint8_t index, int value)`

Menyimpan nilai integer ke NVS dengan key `"addr<index>"`.

* Validasi index (0–7)
* Menyimpan dengan namespace `"mydata"`
* Contoh key: `addr3`
* ✅ Menampilkan pesan sukses atau error

---

### `readFromNVSInt(uint8_t index)`

Membaca nilai integer dari NVS berdasarkan key `"addr<index>"`.

* Cek apakah key ada di NVS
* Menampilkan data jika ada
* ⚠️ Menampilkan pesan jika data tidak ditemukan

---

### `clearNVSKey(uint8_t index)`

Menghapus nilai yang tersimpan di key `"addr<index>"`.

* 🗑️ Menampilkan pesan konfirmasi penghapusan

---

## 🛠️ `setup()`

Menyiapkan komunikasi serial dan memberikan petunjuk perintah yang bisa digunakan pengguna.

---

## 🔁 `loop()`

Membaca input dari Serial dan memproses perintah:

### Perintah yang didukung:

#### 📝 Simpan nilai

```bash
wr(index,value)
```

Contoh:

```bash
wr(2,123)
```

➡️ Menyimpan `123` ke `addr2`

---

#### 📖 Baca nilai

```bash
rd(index)
```

Contoh:

```bash
rd(2)
```

➡️ Membaca nilai dari `addr2`

---

#### 🗑️ Hapus nilai

```bash
clr(index)
```

Contoh:

```bash
clr(2)
```

➡️ Menghapus nilai dari `addr2`

---

## ⚠️ Catatan

* Index harus berada di antara `0` hingga `7`
* Jika perintah salah, akan muncul pesan error

---

## 🖥️ Contoh Output di Serial Monitor

```
=== ESP32 NVS Multi-Int Storage ===
Perintah:
  wr(index,value) → Simpan nilai ke index 0-7
  rd(index)       → Baca nilai dari index 0-7
  clr(index)      → Hapus nilai dari index 0-7

>> wr(2,123)
✅ Disimpan: addr2 = 123

>> rd(2)
📖 Dibaca: addr2 = 123

>> clr(2)
🗑️ Dihapus: addr2
```

---

## 📌 Kegunaan

Cocok untuk aplikasi seperti:

* Menyimpan konfigurasi
* Menyimpan status terakhir
* Menyimpan data setting yang ingin dipertahankan setelah restart

---

Jika Anda ingin, saya juga bisa bantu membuat **versi GUI sederhana** via web atau serial input interaktif berbasis tombol.
