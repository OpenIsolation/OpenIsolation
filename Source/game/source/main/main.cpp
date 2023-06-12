#include <iostream>
#include <Windows.h>

// Game Globals
int _g_exit_code = 0;
//PC_CMDLINE_OPTIONS* _pc_cmdline_options;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
  char cVar1;
  LPSTR cmdLineArgs = GetCommandLineA();
  char* pcVar3;

  if (*cmdLineArgs == '\"') {
    cmdLineArgs = cmdLineArgs + 1;

    do {
      pcVar3 = cmdLineArgs;
      cVar1 = *pcVar3;
      cmdLineArgs = pcVar3 + 1;
    } while (cVar1 != '\"' && cVar1 != '\0');

    if (cVar1 != '\"') {
      cmdLineArgs = pcVar3;
    }
  }

  //PC_CMDLINE_OPTIONS::process((PC_CMDLINE_OPTIONS *)&_pc_cmdline_options, cmdLineArgs);
  //game_main();

  return _g_exit_code;
}
