// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int co = 0;
  for (int i = 0; i < size; i++) {
      if (arr[i] == value) {
          co++;
      }
  }
  return co;
  return 0; // если ничего не найдено
}
