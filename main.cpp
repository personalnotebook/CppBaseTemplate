#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// ---------------------------------------------------------
// 1. 在这里写你的练习代码（比如写一个判断闰年的函数）
// ---------------------------------------------------------
bool isLeapYear(int year) {
  if (year % 400 == 0) return true;
  if (year % 100 == 0) return false;
  return year % 4 == 0;
}

// ---------------------------------------------------------
// 2. 在这里写测试用例，让电脑帮你自动对答案
// ---------------------------------------------------------
TEST_CASE("测试闰年算法") {
  // 基础测试
  CHECK(isLeapYear(2000) == true);   // 400的倍数，是闰年
  CHECK(isLeapYear(1900) == false);  // 100的倍数但不是400的倍数，不是闰年

  // 日常年份测试
  CHECK(isLeapYear(2024) == true);   // 4的倍数，是闰年
  CHECK(isLeapYear(2026) == false);  // 普通年份，不是闰年
}