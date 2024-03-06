// 条件を満たす区間の数

int right = 0;
FOR(left, 0, n){
    while(right < n && 条件){
        // rightを右に動かす処理
    }

    // 何かしらの処理
    cnt += right - left - 1;

    // leftとrightの最小距離の条件
    if(left == right){   //例 leftがrightに追いついたら
        right++; //等
    }
}