#include "Blunder.h"

class Sandbox : public Blunder::Application {
 public:
  Sandbox() {}
  ~Sandbox() {}
};

Blunder::Application* Blunder::CreateApplication() { return new Sandbox(); }