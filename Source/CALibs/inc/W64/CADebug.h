/**
 * The OpenIsolation Project
 */

#pragma once

namespace CA {
    /// Is the game currently running under a debugger?
    bool running_in_debugger();

    template <typename... Args>
    /// Writes a message out to the STDOUT console.
    /// \tparam Args list of args to be formatted
    /// \param format message string
    /// \param args list of args to be formatted
    void message_txt(const char* format, Args... args);

    /// Retrieves the current memory usage for the game, and the peak memory usage.
    /// \param memoryLoadPercent process memory usage as a percentage
    /// \param peakMemoryUsage load percentage minus the peak working set size? What does this value actually mean?
    void ca_calc_mem_sizes(unsigned long& memoryLoadPercent, unsigned long& peakMemoryUsage);
}
