# ⚡ Speedtest Beta - C++

Sebuah tool CLI sederhana berbasis **C++** untuk mengukur kecepatan internet. Tool ini membungkus eksekusi dari `speedtest-cli` di sistem dan menampilkan hasilnya langsung dari terminal.

---

## 📄 Deskripsi

`speedtestbeta.cpp` adalah alat berbasis CLI yang menjalankan perintah `speedtest-cli` dari dalam program C++, lalu menangkap dan menampilkan output-nya ke pengguna.  

Ini adalah proyek pembelajaran untuk memahami:
- Cara menjalankan perintah sistem dari C++
- Cara membaca hasil dari perintah eksternal
- Integrasi sistem dan jaringan di Linux

---

## 📦 Requirements

- **Linux-based OS**
- C++ compiler (`g++`)
- `speedtest-cli` dari Ookla atau Python

---

## ⚙️ Instalasi

### 1. Install `speedtest-cli`

Untuk Debian/Ubuntu:

```bash
sudo apt update
sudo apt install speedtest-cli
```

> Kamu bisa cek apakah sudah terinstal dengan:
> ```bash
> speedtest-cli --version
> ```

### 2. Clone dan Kompilasi Proyek

```bash
git clone https://github.com/ridhoyaka/speedtest-beta.git
cd speedtest-beta
g++ -std=c++11 -o speedtest speedtestbeta.cpp
```

### 3. Jalankan Aplikasinya

```bash
./speedtest
```

---

## 🖥️ Contoh Output

---

## 📌 Catatan

- Program ini hanya bekerja jika `speedtest-cli` sudah terinstal di sistem.
- `system()` dalam C++ digunakan untuk menjalankan command-line tool dari dalam program.
- Versi ini masih sangat sederhana dan cocok untuk dipelajari atau dikembangkan lebih lanjut.

---

## 🧠 Apa yang Bisa Dipelajari?

- Interaksi C++ dengan sistem operasi
- Penggunaan `system()` di C++
- Pengukuran kecepatan internet via CLI

---

## 📄 Lisensi

MIT License – bebas digunakan dan dimodifikasi

---

## 👨‍💻 Penulis

**Ridho Muhammad Wahid**  
- 🌐 [LinkedIn](https://www.linkedin.com/in/ridho-muhammad-wahid-b50761344/)  
- 📫 ridhoyaka999@gmail.com
