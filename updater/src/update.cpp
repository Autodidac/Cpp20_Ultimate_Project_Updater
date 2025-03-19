#include "config.hpp"
#include "update.hpp"

#include <cstdlib>
#include <filesystem>
#include <iostream>

#define LEAVE_NO_FILES_ALWAYS_REDOWNLOAD

// Configuration overrides
namespace urls {
    const std::string github_base = "https://github.com/";
    const std::string github_raw_base = "https://raw.githubusercontent.com/";

    const std::string owner = "Autodidac/";
    const std::string repo = "Cpp20_Ultimate_Project_Updater";
    const std::string branch = "main/";

    const std::string version_url = github_raw_base + owner + repo + "/" + branch + "/include/config.hpp";
    const std::string binary_url = github_base + owner + repo + "/releases/latest/download/updater";
}

// ✅ **Platform-independent execution function**
void launch_executable(const std::string& executable) {
    if (!std::filesystem::exists(executable)) {
        std::cerr << "[ERROR] Executable not found: " << executable << "\n";
        return;
    }

#if defined(_WIN32)
    std::cout << "[INFO] Launching: " << executable << "\n";
    system(("start \"\" \"" + executable + "\"").c_str());
#elif defined(__APPLE__) || defined(__linux__)
    std::cout << "[INFO] Setting executable permissions: " << executable << "\n";
    system(("chmod +x \"" + executable + "\"").c_str());
    std::cout << "[INFO] Running: " << executable << "\n";
    system(("\"" + executable + "\" &").c_str()); // Runs in the background
#else
    std::cerr << "[ERROR] Unsupported OS. Cannot launch executable.\n";
#endif
}

int main() {
#ifdef LEAVE_NO_FILES_ALWAYS_REDOWNLOAD
#if defined(_WIN32)
    system("del /F /Q replace_updater.bat >nul 2>&1");
    system(("rmdir /s /q \"" + std::string(config::REPO.c_str()) + "-main\" >nul 2>&1").c_str());
#else
    system("rm -rf replace_updater");
#endif
#endif

    bool updated = check_for_updates(urls::version_url);

    if (updated) {
        std::cout << "[INFO] New version available! Updating...\n";
        update_project(urls::version_url, urls::binary_url);
    }
    else {
#if defined(_WIN32)
        system("cls");
#else
        system("clear");
#endif
        std::cout << "[INFO] No updates available.\n";
    }

    /// Your Source Runs Here, later on this will include a callback to internal automated cross platform entrypoint

    return 0;
}
