﻿
#include "update.hpp"

// this basically just leaves ninja.zip when commented out, but will be configured better in the future
#define LEAVE_NO_FILES_ALWAYS_REDOWNLOAD

// configuration overrides 
namespace urls {
    const std::string github_base = "https://github.com/"; // base github url
    const std::string github_raw_base = "https://raw.githubusercontent.com/"; // raw base github url, for source downloads

    const std::string owner = "Autodidac/"; // github project developer username for url 
    const std::string repo = "Cpp_Ultimate_Project_Updater"; // whatever your github project name is
    const std::string branch = "main/"; // incase you need a different branch than githubs default branch main 

    // It's now using this internal file to fetch update versions internally without version.txt file that can be modified
    const std::string version_url = github_raw_base + owner + repo + "/" + branch + "/include/config.hpp";
    //const std::string source_url = github_base + owner + repo + "/archive/refs/heads/main.zip";
    const std::string binary_url = github_base + owner + repo + "/releases/latest/download/updater.exe";
}

int main() {
    // 🔄 **Cleanup Restart Script on Restart & Old Files on Update**
#ifdef LEAVE_NO_FILES_ALWAYS_REDOWNLOAD
#if defined(_WIN32)
    system("del /F /Q replace_updater.bat >nul 2>&1");
    system(("rmdir /s /q \"" + std::string(config::REPO.c_str()) + "-main\" >nul 2>&1").c_str());
#else
    system("rm -rf replace_updater");
#endif
#endif

    if (check_for_updates(urls::version_url)) {
        std::cout << "[INFO] New version available!\n";
        update_project(urls::version_url, urls::binary_url);
    }
    else {
        // Clear console before showing "No updates available."
#if defined(_WIN32)
        system("cls");
#else
        system("clear");
#endif
        std::cout << "[INFO] No updates available.\n";
    }

    return 0;
}