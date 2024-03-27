#include "template.h"

// 辞書
void map_demo(string key, int value){
  map<string, int> dict;  //<key, value>
  dict[key] = value;      //登録 O(logN)
  cout << dict.at(key);   //参照 O(logN)
  dict.erase(key);        //削除 O(logN)
  if(dict.count(key))     //所持判定 O(logN)
  dict.size();            //要素数 O(1)

  for(auto p: dict){      //範囲forはpair型，keyの値が小さい順
    auto k = p.first;
    auto v = p.second;
  }
}

// キュー（先入れ先出し）
void queue_demo(int value){
  queue<int> que;
  que.push(value);        //後ろへ追加 O(1)
  cout << que.front();    //先頭参照 O(1)
  que.pop();              //先頭削除 O(1)
  if(que.empty())         //空でtrue O(1)
  que.size();             //要素数 O(1)      
}

// 優先度付きキュー（最小or最大値出し）
void priority_queue_demo(int value){
  priority_queue<int> pri_que_max;
  pri_que.push(value);        //後ろへ追加 O(logN)
  cout << pri_que.top();      //最大値参照 O(1)
  pri_que.pop();              //最大値削除 O(logN)
  if(pri_que.empty())         //空でtrue O(1)
  pri_que.size();             //要素数 O(1)    

  priority_queue<int, vector<int>, greater<int>> pri_que_min;  //逆順になる

}

// 重複無しデータ（昇順格納・重複除外）
void set_demo(int value){
  set<int> uni_data;
  uni_data.insert(value);   //登録 O(logN)
  uni_data.erase(value);    //削除 O(logN)
  if(dict.count(value))     //所持判定 O(logN)
  uni_data.size();          //要素数 O(1)  
  *begin(uni_data);         //最小値取得 O(1)
  *rbegin(uni_data);        //最大値取得 O(1)
  
  for(auto value: uni_data) //昇順で取り出し
}

// スタック（先入れ後出し）
void stack_demo(int value){
  stack<int> stk;
  stk.push(value);        //後ろへ追加 O(1)
  cout << stk.top();      //末尾参照 O(1)
  stk.pop();              //末尾削除 O(1)
  if(que.empty())         //空でtrue O(1)
  que.size();             //要素数 O(1)  
}

// 両端キュー
void queue_demo(int value){
  deque<int> deq;
  deq.push_front(value);  //先頭へ追加 O(1)
  deq.push_back(value);   //後ろへ追加 O(1)
  cout << deq.front();    //先頭参照 O(1)
  que.pop_front();        //先頭削除 O(1)
  cout << deq.back();     //末尾参照 O(1)
  que.pop_back();         //末尾削除 O(1)
  cout << deq.at(i);      //i番目参照 O(1)
  if(que.empty())         //空でtrue O(1)
  que.size();             //要素数 O(1)      
}