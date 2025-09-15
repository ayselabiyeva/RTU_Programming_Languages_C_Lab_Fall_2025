
#include <stdio.h>

int main(int argc, char *argv[]) {
  // This is my first C program after 2 years!
  printf("Hello, RTU World from C Lab in 2025 Aysel Abiyeva was here (231ADB279) :) !\n");
  printf("You passed %d argument(s).\n", argc - 1);
  for (int i = 1; i < argc; ++i) {
    printf("  arg[%d] = %s\n", i, argv[i]);
  }
  return 0;
}
