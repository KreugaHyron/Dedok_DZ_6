#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");

    //Task_1
    int number1, number2;
    cout << "Введите первое 3-значное число: ";
    cin >> number1;
    cout << "Введите второе 3-значное число: ";
    cin >> number2;

    int middle1 = (number1 / 10) % 10;
    int middle2 = (number2 / 10) % 10;

    int newNumber1 = number1 - middle1 * 10 + middle2 * 10;
    int newNumber2 = number2 - middle2 * 10 + middle1 * 10;
    
    cout << "Новое значение первого числа: " << newNumber1 << "\n";
    cout << "Новое значение второго числа: " << newNumber2 << "\n";
    cout << "\n";

    //Task_2
    int number;
    cout << "Введите 4-значное число: ";
    cin >> number;

    int First_num = (number / 1000) % 10;
    int Second_num = (number / 100) % 10;
    int Third_num = (number / 10) % 10;
    int Fourth_num = number % 10;

    int sum = First_num + Third_num;
    int difference = Second_num - Fourth_num;

    cout << "Сумма первой и третьей цифры: " << sum << "\n";
    cout << "Разница второй и четвёртой цифры: " << difference << "\n";
    cout << "\n";

    //Task_3
    int chislo;
    cout << "Введите 3-значное число: ";
    cin >> chislo;

    int firstNumber = (chislo / 100) % 10;
    int thirdNumber = chislo % 10;
    int newNumber = firstNumber * 10 + thirdNumber;
    cout << "Новое число после удаления средней цифры: " << newNumber << "\n";
    cout << "\n";

    //Task_4
    double depositAmount;
    double annualInterestRate;
    cout << "Введите сумму денежного вклада в гривнах: ";
    cin >> depositAmount;
    cout << "Введите процент годовых, выплачиваемый банком: ";
    cin >> annualInterestRate;

    double monthlyInterestRate = annualInterestRate / 12 / 100;
    double monthlyPayment = depositAmount * monthlyInterestRate;
    cout << "Сумма денег, выплачиваемых банком вкладчику каждый месяц: " << monthlyPayment << " грн" << "\n";
    cout << "\n";

    //Task_5
    double totalAmount;
    double itemPrice;
    cout << "Введите общую сумму денег в гривнах: ";
    cin >> totalAmount;
    cout << "Введите цену товара в гривнах: ";
    cin >> itemPrice;

    int quantity = totalAmount / itemPrice;
    double sdacha = totalAmount - (quantity * itemPrice);

    cout << "Количество товара, которое можно купить: " << quantity << "\n";
    cout << "Сумма сдачи: " << sdacha << " грн" << "\n";
    cout << "\n";

    //Task_6
    const double POUNDS_TO_GRAMS = 405.9;
    const double GRAMS_TO_KILOGRAMS = 1000;
    const double POUNDS_TO_KILOGRAMS = POUNDS_TO_GRAMS / GRAMS_TO_KILOGRAMS;

    double weightInPounds;
    cout << "Введите вес в фунтах: ";
    cin >> weightInPounds;

    double weightInKilograms = weightInPounds * POUNDS_TO_KILOGRAMS;
    double weightInPoundsBack = weightInKilograms / POUNDS_TO_KILOGRAMS;

    cout << "Вес в килограммах: " << weightInKilograms << " кг" << "\n";
    cout << "Вес в фунтах (обратный перевод): " << weightInPoundsBack << " фунтов" << "\n";
    cout << "\n";

    //Task_8
    int number_1;
    cout << "Введите пятизначное число: ";
    cin >> number_1;

    int rightmostDigit = number_1 % 10;
    int shiftedNumber = number_1 / 10;

    int secondRightmostDigit = shiftedNumber % 10;
    int shiftedTwiceNumber = shiftedNumber / 10;
    int result = (rightmostDigit * 10000) + (secondRightmostDigit * 1000) + shiftedTwiceNumber;
    cout << "Результат циклического сдвига вправо на 2 разряда: " << result << "\n";
    cout << "\n";
}