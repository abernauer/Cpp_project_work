// does not use + operator properly
#include <string>

int main()
{
  const std::string exclam = "!";
  const std::string message = "Hello" + ", world" + exclam;
  return 0;
}
