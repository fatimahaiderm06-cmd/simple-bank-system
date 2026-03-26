#include <iostream>
#include <string>

using namespace std;

int main() {
    // --- (جزء فاطمة: الأساس) ---
    string accountHolder = "Fatima";
    double balance = 1000.0;

    cout << "--- نظام البنك المبتدئ ---" << endl;
    cout << "مرحباً: " << accountHolder << endl;
    cout << "رصيدك الحالي هو: $" << balance << endl;

    // --- (جزء الشخص الأول: الإيداع) ---
    double depositAmount;
    cout << "\nأدخل المبلغ المراد إيداعه: "; // \n تعني سطر جديد لتنظيم الشكل
    cin >> depositAmount;
    balance += depositAmount;
    cout << "تم الإيداع. رصيدك الآن: $" << balance << endl;

    // --- (جزء الشخص الثاني: السحب) ---
    double withdrawAmount;
    cout << "\nأدخل المبلغ المراد سحبه: ";
    cin >> withdrawAmount;

    if (withdrawAmount <= balance) {
        balance -= withdrawAmount;
        cout << "تم السحب. الرصيد المتبقي: $" << balance << endl;
    } else {
        cout << "عذراً! الرصيد غير كافٍ." << endl;
    }

    // نهاية البرنامج
    cout << "\nشكرًا لاستخدامك نظامنا البنكي!" << endl;
    return 0; // هذا السطر يجب أن يبقى دائماً في الأخير
}
