#include <iostream>

using namespace std;

class CurrencyConverter {
private:
    double usd_to_eur = 0.91;
    double usd_to_rub = 77.58;

public:
    double convert_usd_to_eur(double usd) {
        return usd * usd_to_eur;
    }

    double convert_usd_to_rub(double usd) {
        return usd * usd_to_rub;
    }

    double convert_eur_to_usd(double eur) {
        return eur / usd_to_eur;
    }

    double convert_eur_to_rub(double eur) {
        return (eur / usd_to_eur) * usd_to_rub;
    }

    double convert_rub_to_usd(double rub) {
        return rub / usd_to_rub;
    }

    double convert_rub_to_eur(double rub) {
        return (rub / usd_to_rub) * usd_to_eur;
    }
};

int main() {
    CurrencyConverter converter;
    double amount;
    string from_currency, to_currency;
    cout << "Amount: ";
    cin >> amount;
    cout << "Enter currency to convert from (USD, EUR, RUB): ";
    cin >> from_currency;
    cout << "Enter currency to convert to (USD, EUR, RUB): ";
    cin >> to_currency;
    double result;
    if (from_currency == "USD" && to_currency == "EUR") {
        result = converter.convert_usd_to_eur(amount);
        cout << amount << " USD = " << result << " EUR" << endl;
    }
    else if (from_currency == "USD" && to_currency == "RUB") {
        result = converter.convert_usd_to_rub(amount);
        cout << amount << " USD = " << result << " RUB" << endl;
    }
    else if (from_currency == "EUR" && to_currency == "USD") {
        result = converter.convert_eur_to_usd(amount);
        cout << amount << " EUR = " << result << " USD" << endl;
    }
    else if (from_currency == "EUR" && to_currency == "RUB") {
        result = converter.convert_eur_to_rub(amount);
        cout << amount << " EUR = " << result << " RUB" << endl;
    }
    else if (from_currency == "RUB" && to_currency == "USD") {
        result = converter.convert_rub_to_usd(amount);
        cout << amount << " RUB = " << result << " USD" << endl;
    }
    else if (from_currency == "RUB" && to_currency == "EUR") {
        result = converter.convert_rub_to_eur(amount);
        cout << amount << " RUB = " << result << " EUR" << endl;
    }
    else {
        cout << "Incorrect input." << endl;
    }

    return 0;
}
