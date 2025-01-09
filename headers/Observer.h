#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>
#include <string>
#include <algorithm>

/**
 * @class Observer
 * @brief Observer pattern to notify players about game updates.
 */
class Observer {
public:
    virtual void notify(const std::string& message) = 0;
};

/**
 * @class GameNotifier
 * @brief Concrete subject class implementing the observer pattern.
 */
class GameNotifier {
private:
    std::vector<Observer*> observers; ///< List of observers.

public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyAll(const std::string& message);
};

#endif // OBSERVER_H
