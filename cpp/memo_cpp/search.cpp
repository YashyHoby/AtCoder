#include "template.h"

// vec内から，targetの有無を判定
// log(N)+1
template <typename T>
auto custom_binary_search(std::vector<T>& vec, T target) {
  ull low = 0;
  ull high = (ull)vec.size() - 1;
  while(low <= high){
    ull mid = low + (high - low) / 2;
    if (vec.at(mid) == target){
      return true;
    }else if(vec.at(mid) < target){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return false;
}

// std 
template <typename T>
bool std_binary_search(vector<T>& vec, T target){
  return binary_search(vec.begin(), vec.end(), target);
}
/*--------------------------------------------------*/
// vec内の，target以上の要素のうち，最小の要素位置を取得
// O(logN)
template <typename T>
auto std_lower_bound(vector<T>& vec, T target) {
  //sort(vec.begin(), vec.end());
  auto iter = lower_bound(vec.begin(), vec.end(), target);
  ull index = distance(vec.begin(), iter);
  auto value = *iter;
  //条件を満たす値がない場合 vec.size() を返す．（以下は返り値を-1に変更）
  //if(index==(ull)vec.size()) return -1;
  return index;
}

// vec内の，targetより大きいの要素のうち，最小の要素位置を取得
template <typename T>
auto std_upper_bound(vector<T>& vec, T target) {
  //sort(vec.begin(), vec.end());
  auto iter = upper_bound(vec.begin(), vec.end(), target);
  ull index = distance(vec.begin(), iter);
  auto value = *iter;
  //条件を満たす値がない場合 vec.size() を返す．（以下は返り値を-1に変更）
  //if(index==(ull)vec.size()) return -1;
  return index;
}
/*--------------------------------------------------*/
// 最小値検索 O(n)
template <typename T>
auto std_min_element(vector<T>& vec){
  auto iter = min_element(vec.begin(), vec.end());
  ull index = distance(vec.begin(), iter);
  auto value = *iter;
  return value;
}

// 最大値検索 O(n)
template <typename T>
auto std_max_element(vector<T>& vec){
  auto iter = max_element(vec.begin(), vec.end());
  ull index = distance(vec.begin(), iter);
  auto value = *iter;
  return value;
}
/*--------------------------------------------------*/