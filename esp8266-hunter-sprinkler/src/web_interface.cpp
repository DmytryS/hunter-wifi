#include <web_interface.h>
#include "LittleFS.h"

void handleHomePage(AsyncWebServerRequest *request)
{
  request->send(LittleFS,"/index.html",String());
}

void handleRunZone(AsyncWebServerRequest *request)
{
  request->send(LittleFS,"/runzone.html",String());
}

void handleStopZone(AsyncWebServerRequest *request)
{
  request->send(LittleFS,"/stopzone.html",String());
}

void handleRunProgram(AsyncWebServerRequest *request)
{
  request->send(LittleFS,"/runprogram.html",String());
}
