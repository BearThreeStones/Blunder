#pragma once

#include "Core.h"

namespace Blunder {
class BLUNDER_API Application {
 public:
  Application();
  virtual ~Application();

  void Run();
};

// 在客户端中定义
Application* CreateApplication();
}  // namespace Blunder
