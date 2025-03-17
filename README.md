# Cpp_Ultimate_Project_Updater

## ⚠️ IMPORTANT WARNING

🚨 **Always run the updater in its own directory!** 🚨  
The updater **creates and modifies files in the directory where it runs**.  
Running it inside an existing project folder **may overwrite files**.  
**Recommended:** **Create a new directory where you want the updater to manage files.**  

---

## 🌟 About

C++ Ultimate Project Updater is a **fully automated, centralized, self-updating entry point** for projects.  

🚀 **Instead of downloading a binary, fork this repository to create your own updater instance!**  
This prevents hitting **GitHub rate limits** since each user has their own repository.

### **🔹 What Does This Updater Do?**
When executed, the updater will:
- ✅ **Automatically download and install dependencies**, including:
  - **LLVM+Clang (standalone binary or built from source)**
  - **7-Zip**
  - **Ninja (build system)**
- ✅ **Download & update the updater source and compiled binaries**  
- ✅ **Build the updater if needed**  
- ✅ **Ensure that all required dependencies are available** before executing the main program  

Everything happens **automatically**, with no manual intervention required.

---

## 🛠️ How to Use

### **🔹 Quick Start (Recommended)**
1. **Fork this repository** by clicking the **"Fork"** button in the upper right corner.
2. **Clone your forked repository** into a **new directory** on your local machine:
   ```sh
   git clone https://github.com/YOUR-USERNAME/Cpp_Ultimate_Project_Updater.git
   cd Cpp_Ultimate_Project_Updater
   ```
3. **Run the updater**:
   - **Windows**: Double-click `updater.exe` or run it from the command line:
     ```sh
     updater.exe
     ```
   - **Linux/macOS**: Open a terminal in the directory and run:
     ```sh
     chmod +x updater
     ./updater
     ```
4. The updater will **automatically fetch and manage all required project files** in the directory.
5. **To get the latest updates**, simply pull changes from your forked repository:
   ```sh
   git pull origin main
   ```

---

## 🔄 Keeping Your Updater Synced with This Repository

Since your fork is **independent**, you’ll need to **manually sync it** with the latest changes from this repository.

### **🔹 Syncing with Upstream Updates**
1. **Add this repository as an upstream remote**:
   ```sh
   git remote add upstream https://github.com/Autodidac/Cpp_Ultimate_Project_Updater.git
   ```
2. **Fetch the latest changes from the original repo**:
   ```sh
   git fetch upstream
   ```
3. **Merge upstream updates into your fork**:
   ```sh
   git merge upstream/main
   ```
4. **Push the updates to your GitHub fork**:
   ```sh
   git push origin main
   ```

---

## 🔗 Releases & Downloads

If you prefer, you can also get the latest updates by **pulling from GitHub Releases**.

For support or bug reports, open an **[issue](https://github.com/Autodidac/Cpp_Ultimate_Project_Updater/issues)**.

---

## 🛠️ Building from Source

### **🔹 Prerequisites**
The updater will **automatically download and install**:
- **LLVM+Clang** (either a standalone binary installer or built from source)
- **7-Zip** (used for extraction)
- **Ninja** (for fast builds)
- **The updater source code and binaries**

However, if you prefer to build manually, ensure you have:
- **Windows:** Microsoft Visual Studio with CMake
- **Linux/macOS:** Clang/GCC with CMake and Ninja

### **🔹 Build Instructions**
**Windows (MSVC + CMake)**
```sh
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022"
cmake --build . --config Release
```

**Linux/macOS (Clang/GCC + Ninja)**
```sh
mkdir build
cd build
cmake .. -G Ninja
ninja
```

### **🔹 Running the Updater from Source**
After building, run:
```sh
./updater
```
or on Windows:
```sh
updater.exe
```

---

## 📜 License

This project is licensed under the **MIT License** – see the **[LICENSE](LICENSE)** file for details.

---

## 🤝 Contributing

Contributions are welcome! To contribute:
1. **Fork the repository**
2. **Create a feature branch**
   ```sh
   git checkout -b feature-branch
   ```
3. **Commit your changes**
   ```sh
   git commit -m "Added new feature"
   ```
4. **Push to your fork and open a Pull Request**
   ```sh
   git push origin feature-branch
   ```

---

## ⭐ Acknowledgments

Special thanks to **Autodidac** for developing this centralized updater system.

---
