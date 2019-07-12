#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int my_hand, honda_hand;
  srand((unsigned)time(NULL));
  printf("じゃんけん\n");
  printf("1: グー\n");
  printf("2: チョキ\n");
  printf("3: パー\n");
  printf("あなたの手: ");
  scanf("%d", &my_hand);
  if (my_hand < 1 || my_hand > 3) {
    printf("正しい手を入力して下さい。\n");
    return 1;
  }
  honda_hand = rand() % 3 + 1;
  printf("本田の手: %d\n", honda_hand);
  if (my_hand == honda_hand) {
    printf("あいこ！\n");
  } else if ((my_hand - honda_hand) % 3 == 2) {
    printf("You won! やるやん！\n");
  } else {
    printf("You lose! 俺の勝ち！たかがじゃんけん、そう思ってないですか？\n");
  }
  return 0;
}
