#pragma once

#include "Core.h"

namespace Blunder {
class BLUNDER_API Application {
 public:
  Application();
  virtual ~Application();

  void Run();
};

// �ڿͻ����ж���
Application* CreateApplication();
}  // namespace Blunder
