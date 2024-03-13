//
// The OpenIsolation Project
//

#include <cstdint>

namespace CATHODE {
  /// <summary>
  ///   Responsible for loading `COMMANDS.BIN` buffer files, and adding each command from the buffer, to CATHODE.
  /// </summary>
  class CommandBuffer {
  public:
    /// <returns>Total number of commands inside the buffer.</returns>
    std::uint32_t num_commands() const;
    /// <summary>
    ///   Returns a command by its index in the buffer file.
    /// </summary>
    /// <param name="index">The index of the desired command.</param>
    /// <returns>Presumably, the command's ShortGuid.</returns>
    std::uint32_t get_command(std::uint32_t index) const;
    /// <summary>
    ///   Initialise a new buffer for storing and reading the contents of a buffer file.
    /// </summary>
    /// <param name="numCommands">Expected number of commands (0 if unknown).</param>
    /// <param name="size">Expected size of the buffer (0 if unknown).</param>
    CommandBuffer(std::uint32_t numCommands, std::uint32_t size);
    ~CommandBuffer();
    /// <summary>
    ///   Loads a `COMMANDS.BIN` buffer file to memory, and parses it.
    /// </summary>
    /// <param name="file">Path to the `COMMANDS.BIN` buffer file.</param>
    void load(const char* file);
  private:
    /// <summary>
    ///   Pointer to memory pool containing all loaded commands data.
    /// </summary>
    void* commandData;
    /// <summary>
    ///   Final command in the buffer.
    /// </summary>
    std::uint32_t endCommand;
    /// <summary>
    ///   Total number of commands in the buffer.
    /// </summary>
    std::uint32_t numCommands;
    void* unk1;
    std::uint32_t unk2;
    std::uint32_t unk3;
  };
};
