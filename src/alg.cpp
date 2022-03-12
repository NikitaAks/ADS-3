// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int i = 0;
  for (int j = 0; j < size; j++) {
    if (value == arr[j])
      i += 1;
  }
    return i;
  return 0;
}
