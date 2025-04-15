#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
  int resultado, pid, ppid;
resultado = fork()
  if (resultado < 0)
  printf("algo deu errado!!!\n):
  pid=getpid();
  if(resultado == 0) {
  ppid=getppid();
  printf("eu sou o processo filho, meu PID é %d e meu pai tem pid=%d.\n", pid, ppid);
  }
if(resultado>0) {
  printf("Eu sou o processo pai, meu PID é %d e meu filho tem pid=%d.\n", pid, resultado);
waitpid(resultado, NULL,0);
}
}
