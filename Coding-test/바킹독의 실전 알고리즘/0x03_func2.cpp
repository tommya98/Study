int func2(int arr[], int N) {
  int mem[101] = {
      0,
  };

  for (int i = 0; i < N; i++) {
    if (mem[100 - arr[i]] == 1) {
      return 1;
    }
    mem[arr[i]] = 1;
  }

  return 0;
}