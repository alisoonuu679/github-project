template <typename T>
T generateRandomCode(int n) {
  if (n == 0) {
    return T();
  } else {
    return generateRandomCode<T>(n - 1) + generateRandomCode<T>(n - 1);
  }
}
