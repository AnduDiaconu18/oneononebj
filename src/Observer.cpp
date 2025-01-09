#include "C:\Users\acer\Documents\GitHub\oneononebj\headers\Observer.h"

void GameNotifier::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void GameNotifier::removeObserver(Observer* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void GameNotifier::notifyAll(const std::string& message) {
    for (auto observer : observers) {
        observer->notify(message);
    }
}
