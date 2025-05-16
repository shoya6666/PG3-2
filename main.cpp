#include <iostream>
using namespace std;

class Enemy {
public:
    void Update();

    void Approach(); // 接近
    void Attack(); // 攻撃
    void Withdrawal(); // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* pFunc[])();

private:
    int index = 0;
};

void Enemy::Approach() {
    cout << "敵が接近！" << endl;
}

void Enemy::Attack() {
    cout << "敵が攻撃！" << endl;
}

void Enemy::Withdrawal() {
    cout << "敵が離脱" << endl;
}

void Enemy::Update() {

    // 関数テーブルから関数を実行
    (this->*pFunc[index])();

    cout << "次の状態に移行 (0: はい、 他: いいえ)";
    int input;
    cin >> input;

    if (input == 0) {
        index = (index + 1) % 3;
    }
}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::pFunc[])() = {
    &Enemy::Approach, // インデックス0
    &Enemy::Attack,   // インデックス1
    &Enemy::Withdrawal   // インデックス2
};

int main() {

    Enemy enemy;

    while (1)enemy.Update();

    return 0;
}
