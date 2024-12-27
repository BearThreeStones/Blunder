#pragma once

#ifdef BLUNDER_PLATFORM_WINDOWS

extern Blunder::Application* Blunder::CreateApplication();

int main(int argc, char** argv) { auto app = Blunder::CreateApplication();
  app->Run();
  delete app;
}

#endif