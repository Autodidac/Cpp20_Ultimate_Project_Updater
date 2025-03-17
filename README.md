# Cpp_Ultimate_Project_Updater
# ⚠️ IMPORTANT WARNING

🚨 **Always run the updater in its own directory!** 🚨  
The updater **creates and modifies files in the directory where it runs**.  
Running it inside an existing project folder **may overwrite files**.  
**Recommended:** **Create a new directory where you want the updater to manage files.**

---

# C++ Ultimate Project Updater

A **fully automated, centralized, self-updating entry point** for projects.  
This updater **requires no manual cloning or repeated GitHub downloads**—it **manages all updates and entry points automatically**.

🚀 **Instead of downloading a binary, fork this repository to create your own updater instance!**  
This prevents hitting **GitHub rate limits** since each user has their own repository.

## 🛠️ How to Use

### **🔹 Quick Start (Recommended)**
1. **Fork this repository** by clicking the **"Fork"** button in the upper right corner.
2. **Clone your forked repository** into a **new directory** on your local machine:
   ```sh
   git clone https://github.com/YOUR-USERNAME/Cpp_Ultimate_Project_Updater.git
   cd Cpp_Ultimate_Project_Updater
   ```
3. **Run the updater**:
   - **Windows**: Double-click `updater.exe` or run it from the command line.
   - **Linux/macOS**: Open a terminal in the directory and run:
     ```sh
     chmod +x updater && ./updater
     ```
4. The updater will **automatically fetch and manage all required project files** in the directory.
5. **To get the latest updates**, simply pull changes from your forked repository:
   ```sh
   git pull origin main
   ```

---

## 📦 Keeping Your Updater Synced with This Repository

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

## 🔗 **Releases & Downloads**
If you prefer, you can also get the latest updates by **pulling from GitHub Releases**.

For support or bug reports, open an **[issue](https://github.com/Autodidac/Cpp_Ultimate_Project_Updater/issues)**.

---

