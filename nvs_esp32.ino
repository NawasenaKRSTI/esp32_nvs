#include <Preferences.h>

Preferences preferences;

// Fungsi menulis data int ke alamat tertentu
void writeToNVSInt(uint8_t index, int value) {
  if (index > 7) {
    Serial.println("❌ Index harus 0 - 7");
    return;
  }

  String key = "addr" + String(index);
  preferences.begin("mydata", false);
  preferences.putInt(key.c_str(), value);
  preferences.end();

  Serial.println("✅ Disimpan: " + key + " = " + String(value));
}

// Fungsi membaca data int dari alamat tertentu
void readFromNVSInt(uint8_t index) {
  if (index > 7) {
    Serial.println("❌ Index harus 0 - 7");
    return;
  }

  String key = "addr" + String(index);
  preferences.begin("mydata", true);
  if (preferences.isKey(key.c_str())) {
    int value = preferences.getInt(key.c_str(), 0);
    Serial.println("📖 Dibaca: " + key + " = " + String(value));
  } else {
    Serial.println("⚠️ Tidak ada data di " + key);
  }
  preferences.end();
}

// Fungsi menghapus data dari alamat tertentu
void clearNVSKey(uint8_t index) {
  if (index > 7) {
    Serial.println("❌ Index harus 0 - 7");
    return;
  }

  String key = "addr" + String(index);
  preferences.begin("mydata", false);
  preferences.remove(key.c_str());
  preferences.end();
  Serial.println("🗑️ Dihapus: " + key);
}

void setup() {
  Serial.begin(115200);
  delay(1000);  // Tunggu serial siap
  Serial.println("\n=== ESP32 NVS Multi-Int Storage ===");
  Serial.println("Perintah:");
  Serial.println("  wr(index,value) → Simpan nilai ke index 0-7");
  Serial.println("  rd(index)       → Baca nilai dari index 0-7");
  Serial.println("  clr(index)      → Hapus nilai dari index 0-7\n");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    // WR(index,value)
    if (input.startsWith("wr(") && input.endsWith(")")) {
      String params = input.substring(3, input.length() - 1);
      int comma = params.indexOf(',');
      if (comma > 0) {
        int index = params.substring(0, comma).toInt();
        int value = params.substring(comma + 1).toInt();
        writeToNVSInt(index, value);
      } else {
        Serial.println("❌ Format salah. Gunakan wr(index,value)");
      }
    }

    // RD(index)
    else if (input.startsWith("rd(") && input.endsWith(")")) {
      int index = input.substring(3, input.length() - 1).toInt();
      readFromNVSInt(index);
    }

    // CLR(index)
    else if (input.startsWith("clr(") && input.endsWith(")")) {
      int index = input.substring(4, input.length() - 1).toInt();
      clearNVSKey(index);
    }

    else {
      Serial.println("❌ Perintah tidak dikenal. Gunakan wr(), rd(), atau clr()");
    }
  }
}
