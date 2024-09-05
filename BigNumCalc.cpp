#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {

}

BigNumCalc::~BigNumCalc() {

}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> bigNum;

    for (char& digit: numString) {
        bigNum.push_back(digit - '0');
    }

    return bigNum;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> res;
    int digit1 = 0;
    int digit2 = 0; 
    int carry = 0;

    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        if (it1 != num1.rend()) {
            digit1 = *it1;
        }

        else {
            digit1 = 0;
        }

        if (it2 != num2.rend()) {
            digit2 = *it2;
        }

        else {
            digit2 = 0;
        }

        int sum = digit1 + digit2 + carry;
        res.push_front(sum % 10);
        carry = sum/10;

        if (it1 != num1.rend()) {
            it1++;
        }

        if (it2 != num2.rend()) {
            it2++;
        }
    }

    return res;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> res;
    int digit1 = 0;
    int digit2 = 0;
    int borrow = 0;

    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();

    while (it1 != num1.rend() || it2 != num2.rend() || borrow != 0) {
        if (it1 != num1.rend()) {
            digit1 = *it1;
        }

        else {
            digit1 = 0;
        }

        if (it2 != num2.rend()) {
            digit2 = *it2;
        }

        else {
            digit2 = 0;
        }

        int diff = digit1 - digit2 - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }

        else {
            borrow = 0;
        }

        res.push_front(diff);

        if (it1 != num1.rend()) {
            it1++;
        }

        if (it2 != num2.rend()) {
            it2++;
        }
    }

    while (res.front() == 0 && res.size() > 1) {
        res.pop_front();
    }

    return res;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    std::list<int> res;
    int digit2 = num2.front();
    int carry = 0;

    for (auto it1 = num1.rbegin(); it1 != num1.rend(); it1++) {
        int prod = (*it1) * digit2 + carry;
        res.push_front(prod % 10);
        carry = prod/10;
    }

    if (carry > 0) {
        res.push_front(carry);
    }

    while (res.front() == 0 && res.size() > 1) {
        res.pop_front();
    }

    return res;
}