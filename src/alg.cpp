// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = i +1; j < len; j++) {
if (arr[i] + arr[j] == value) {
  count++;
}
}
}
return count;
}
int countPairs2(int *arr, int len, int value) {
int count = 0;
for (int i = 0; i < len - 1; i++) {
for (int j = len - 1; j > i; j--) {
if (arr[i] + arr[j] == value) {
  count++;
}
}
}
return count;
}
int countPairs3(int *arr, int len, int value) {
int count = 0;
for (int a = 0; a < len - 1; a++) {
int x = a; int y = len;
while (x < y - 1) {
int z = (x + y) / 2;
if (arr[a] + arr[z] == value) {
count++;
int b = z + 1;
while ((arr[a] + arr[b] == value) && (b < y)) {
count++;
b++;
}
b = z - 1;
while ((arr[a] + arr[b] == value) && (b > x)) {
count++;
b--;
}
break;
}
if (arr[a] + arr[z] > value)
y = z;
else
x = z;
}
}
return count;
}
