ビット先端策
#############################################################
*** ビット数固定ver **********
// 3ビットのビット列をすべて列挙する
for (int bit = 0; bit < (1 << 3); bit++) {
  bitset<3> bits(bit);
  // ビット列の右端から捜査，1ならif実行
  for (int i = 0; i < N; i++) {
    if (bits.test(i)) {

    }
  }
}

*** ビット数可変ver **********
// nビットのビット列をすべて列挙する
for (int bit = 0; bit < (1<<n); bit++) {
  // ビット列の右端から捜査，1ならif実行
  for (int i = 0; i < n; i++) {
    if(bit & (1<<i)){
    }
  }
}
#############################################################

// 二分探索
    long long left = -1, right = L + 1;
    while (right - left > 1) {
        long long mid = (left + right) / 2;
        if (条件) left = mid;
        else right = mid;
    }

