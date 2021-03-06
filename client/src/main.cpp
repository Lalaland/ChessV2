#include <ClanLib/core.h>
#include <ClanLib/application.h>

#include <ClanLib/core.h>
#include <ClanLib/gl.h>
#include <ClanLib/display.h>
#include <ClanLib/gui.h>
#include <ClanLib/sound.h>
#include <vector>

#include "gui/chessGui.h"
#include "cli/chessCli.h"

#include <pantheios/pantheios.hpp>
#include <pantheios/frontends/stock.h>
#include <pantheios/backends/bec.file.h>


using std::vector;

const PAN_CHAR_T PANTHEIOS_FE_PROCESS_IDENTITY[] = "ChessClient";

int MyMain(const vector<CL_String> &args)
{
   pantheios_be_file_setFilePath("MainLog");

   CL_Console console;
   CL_SetupCore setupCore;
   CL_SetupDisplay setupDisplay;
   CL_SetupGL setupGL;
   CL_SetupGUI setupGUI;

   try
   {
      t_chessGui gui;
      t_chessCli cli;

      gui.init();
      gui.run();
   }

   catch(CL_Exception &exception)
   {
      console.write_line("Error: " + exception.get_message_and_stack_trace());
      
      return -1;
   }
   
   catch(std::exception &exception)
   {
      console.write("Error: %s",exception.what());
      return -2;
   }

   return 0;
}
CL_ClanApplication app(MyMain);
      
      
      
      
      
