int fibo(int x) {
  if (x < 2) {
    return 1;
  }

  return fibo(x - 1) + fibo(x - 2);
}

int job() {
  return fibo(25);
}